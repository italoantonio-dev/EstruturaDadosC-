cmake_minimum_required(VERSION 3.20)
project(DataStructures_List1)

set(CMAKE_CXX_STANDARD 17)

# Cria um executável independente para cada arquivo .cpp
add_executable(two_sum two_sum.cpp)
add_executable(remove_duplicates remove_duplicates.cpp)
add_executable(reverse_string reverse_string.cpp)
add_executable(move_zeroes move_zeroes.cpp)
add_executable(majority_element majority_element.cpp)
add_executable(counting_song counting_song.cpp)
add_executable(ambiguous_dates ambiguous_dates.cpp)