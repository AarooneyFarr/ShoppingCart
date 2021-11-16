cmake_minimum_required(VERSION 3.17)
project(ShoppingCart)

set(CMAKE_CXX_STANDARD 14)

add_executable(ShoppingCart main.cpp ItemToPurchase.h ItemToPurchase.cpp ShoppingCart.h ShoppingCart.cpp)