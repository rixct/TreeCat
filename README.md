# TreeCat

Простая консольная программа на C++, которая строит красивое ASCII-дерево файлов и папок, аналогично утилите `tree`.

Программа рекурсивно считывает структуру директорий и выводит её в виде дерева:

```
root/
├── file1.txt
├── src/
│   ├── main.cpp
│   └── utils.cpp
└── docs/
    └── readme.md
```

---

## 🚀 Возможности

- 📂 Рекурсивный обход папок  
- 📄 Вывод файлов и директорий  
- 🌳 Красивое ASCII-дерево  
- 🔥 Использование `std::filesystem` (C++17)  
- ⚙️ Возможность расширения (глубина, фильтры и т.д.)

---

## 🛠️ Структура проекта

```
tree-cat/
│
├── CMakeLists.txt
├── README.md
│
├── include/
│   ├── core/
│   │   ├── TreeNode.h
│   │   ├── TreeBuilder.h
│   │   └── TreePrinter.h
│   │
│   └── utils/
│       └── FileUtils.h
│
├── src/
│   ├── main.cpp
│   │
│   ├── core/
│   │   ├── TreeBuilder.cpp
│   │   └── TreePrinter.cpp
│   │
│   └── utils/
│       └── FileUtils.cpp
│
└── examples/
    └── demo_output.txt
```

---

## ⚙️ Требования

- Компилятор с поддержкой **C++17**
- `g++`, `clang++` или MSVC
- CMake (рекомендуется)

---

## 🔧 Сборка проекта (CMake)

### 1. Клонировать репозиторий

```bash
git clone https://github.com/rixct/TreeCat.git
cd ascii-tree
```

### 2. Создать папку сборки

```bash
mkdir build
cd build
```

### 3. Запустить CMake

```bash
cmake ..
```

### 4. Собрать проект

```bash
cmake --build .
```

---

## ▶️ Запуск программы

После сборки:

```bash
./tree-cat /path/to/folder
```

Пример:

```bash
./tree-cat .
```