cmake_minimum_required(VERSION 3.5)

project(RBT LANGUAGES C)

add_executable( RBT main.c BT/src/BT.c)

target_include_directories( RBT BT/h )

add_compile_options( -fms-extensions )
# target_compile_features( RNT, C_STANDARD
