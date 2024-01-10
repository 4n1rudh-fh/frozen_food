cmake_minimum_required(VERSION 3.16.3)
project(frozen_food)
add_executable(frozen_food main.cpp FrozenFood.hpp FrozenFood.cpp FrozenPizza.hpp FrozenPizza.cpp DeepDishPizza.hpp DeepDishPizza.cpp)
target_compile_options(frozen_food PRIVATE -std=c++17)