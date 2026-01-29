#include <iostream>
#include "TreePrinter.h"
#include "TreeNode.h"
#include "Utils.h"

void TreePrinter::printTree(const TreeNode& root) {
    std::cout << root.name << '\n';
    for (size_t i = 0; i < root.children.size(); ++i) {
        const TreeNode& child = root.children[i];
        bool isLast = (i == root.children.size() - 1);
        printRecursive(child, "", isLast);
    }
}

void TreePrinter::printRecursive(const TreeNode& node, const std::string& prefix, bool isLast) {
    std::cout << prefix;
    
    if (isLast) {
        std::cout << Symbols::LAST_BRANCH;
    } else {
        std::cout << Symbols::BRANCH;
    }

    std::cout << node.name;

    if (node.isDirectory) {
        std::cout << '/';
    }

    std::cout << '\n';

    if (node.isDirectory) {
        std::string newPrefix = prefix + (isLast ? Symbols::SPACE : Symbols::VERTICAL);

        for (size_t i = 0; i < node.children.size(); ++i) {
            const TreeNode& child = node.children[i];
            bool isLast = (i == node.children.size() - 1);
            printRecursive(child, newPrefix, isLast);
        }
    }
};