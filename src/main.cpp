#include <iostream>
#include <string>
#include <filesystem>
#include "TreeBuilder.h"
#include "TreePrinter.h"

int main(int argc, char* argv[]) {
    if (argc == 2) {
        std::string path = argv[1];
        if (std::filesystem::exists(path) && std::filesystem::is_directory(path)) {
            TreeBuilder builder;
            TreeNode root = builder.buildTree(path);

            TreePrinter printer;
            printer.printTree(root);
        } else {
            std::cout << "invalid directory\n";
        }
        return 0;
    }
}