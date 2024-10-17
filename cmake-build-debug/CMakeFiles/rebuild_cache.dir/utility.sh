set -e

cd /cygdrive/d/Projects/DSA/cmake-build-debug
/cygdrive/c/Users/ASUS/AppData/Local/JetBrains/CLion2024.2/cygwin_cmake/bin/cmake.exe --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
