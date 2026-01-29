#pragma once

#include <vector>
#include <string>

struct TreeNode {
    std::string name;
    bool isDirectory;
    std::vector<TreeNode> children;
};