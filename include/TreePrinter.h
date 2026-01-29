#pragma once
#include "TreeNode.h"

class TreePrinter {
    private:
        void printRecursive(const TreeNode& node,
                            const std::string& prefix,
                            bool isLast);
    public:
        void printTree(const TreeNode& root);
};