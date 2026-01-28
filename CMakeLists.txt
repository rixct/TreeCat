cmake_minimum_required(VERSION 3.10)

project(TreeCat)

include_directories(include)

add_executable(tree-cat
    src/main.cpp
    src/TreeBuilder.cpp
    src/TreePrinter.cpp
    src/Utils.cpp
)

target_include_directories(tree-cat PRIVATE include)