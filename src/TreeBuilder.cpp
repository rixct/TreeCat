#include "TreeBuilder.h"
#include "Utils.h"
#include <algorithm>
#include <iostream>

TreeNode TreeBuilder::buildTree(const std::string& path) {
    return buildRecursive(path);
}

TreeNode TreeBuilder::buildRecursive(const std::filesystem::path& path) {
    TreeNode node;
    node.name = getFileName(path);
    node.isDirectory = false;
    if (std::filesystem::is_directory(path)) {
        node.isDirectory = true;
        try {
            for (const auto& entry : std::filesystem::directory_iterator(path)) {
                node.children.push_back(buildRecursive(entry.path()));
            }
            sortChildren(node.children);
        } catch (const std::filesystem::filesystem_error& e) {
            std::cout << "filesystem error: " << e.what() << std::endl;
        }
    }
    return node;
}

void TreeBuilder::sortChildren(std::vector<TreeNode>& children) {
    std::sort(children.begin(), children.end(), [](const TreeNode& a, const TreeNode& b) {
        return a.name < b.name;
    });
}