#pragma once
#include <string>
#include <filesystem>

namespace Symbols {
    inline const std::string BRANCH = "├── ";
    inline const std::string LAST_BRANCH = "└── ";
    inline const std::string VERTICAL = "│   ";
    inline const std::string SPACE = "    ";
}

inline std::string getFileName(const std::filesystem::path& path) {
    return path.filename().string();
}