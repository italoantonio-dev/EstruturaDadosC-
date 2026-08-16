# Data Structures I - Algorithms List 1

This repository contains my C++ solutions for the first algorithms list of the **Data Structures I** course, taught by Professor Júnio Moreira at IFTM.

## 🚀 Technologies Used
* C++ (C++17)
* CMake

## 📂 Algorithms
The following exercises were solved with a strong focus on performance, algorithm complexity, and *in-place* memory manipulation:

1. **Two Sum** (`two_sum.cpp`): Finds the indices of two numbers that add up to a specific target using a Hash Map for fast lookups.
2. **Remove Duplicates** (`remove_duplicates.cpp`): Removes duplicates from a sorted array *in-place* using the two-pointer technique.
3. **Reverse String** (`reverse_string.cpp`): Reverses a string *in-place* optimally.
4. **Move Zeroes** (`move_zeroes.cpp`): Moves all zeros to the end of an array while maintaining the relative order of non-zero elements, without making a copy of the array.
5. **Majority Element** (`majority_element.cpp`): Finds the majority element efficiently utilizing the Boyer-Moore Voting Algorithm.
6. **Counting Song** (`counting_song.cpp`): Calculates the total numbers sung in a progressive counting song using a closed-form mathematical formula $O(1)$.
7. **Ambiguous Dates** (`ambiguous_dates.cpp`): Validates edge cases to check if a given DD/MM date input can cause ambiguous interpretations.

## ⚙️ How to Run
You can use `CMake` to build the targets or compile each file directly using your compiler. Example using g++:

```bash
g++ two_sum.cpp -o two_sum
./two_sum