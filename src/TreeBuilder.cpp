#include "TreeBuilder.h"
#include <algorithm>

TreeNode TreeBuilder::buildTree(const std::string& path) {
    return buildRecursive(path);
}

TreeNode TreeBuilder::buildRecursive(const std::filesystem::path& path) {
    TreeNode node;
    node.name = path.filename().string();
    node.isDirectory = false;
    if (std::filesystem::is_directory(path)) {
        node.isDirectory = true;
        for (const auto& entry : std::filesystem::directory_iterator(path)) {
            node.children.push_back(buildRecursive(entry.path()));
        }
        sortChildren(node.children);
    }
    return node;
}

void TreeBuilder::sortChildren(std::vector<TreeNode>& children) {
    std::sort(children.begin(), children.end(), [](const TreeNode& a, const TreeNode& b) {
        return a.name < b.name;
    });
}