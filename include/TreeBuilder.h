#pragma once

#include <filesystem>
#include <vector>
#include "TreeNode.h"

class TreeBuilder {
    private:
        TreeNode buildRecursive(const std::filesystem::path& path);
        void sortChildren(std::vector<TreeNode>& children);
    public:
        TreeNode buildTree(const std::string& path);
};