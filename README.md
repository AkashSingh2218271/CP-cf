# Codeforces Problem Solutions

This repository contains solutions to various Codeforces problems, organized by difficulty rating.

## Table of Contents
- [Repository Structure](#repository-structure)
- [Problems by Rating](#problems-by-rating)
  - [800 Rating Problems](#800-rating-problems)
  - [900 Rating Problems](#900-rating-problems)
- [Compilation Guide](#compilation-guide)
- [Usage](#usage)
- [Contributing](#contributing)

## Repository Structure

- `codeforces_800_/` - Contains solutions to problems rated 800
- `codeforces_900_/` - Contains solutions to problems rated 900

## Problems by Rating

### 800 Rating Problems

- **Journey** (`journey.cpp`)
  - Find shortest path in a grid with obstacles
  - Uses: BFS/DFS traversal

- **Draw a Square** (`draw_a_square.cpp`)
  - Print a square pattern with given dimensions
  - Uses: Nested loops, pattern printing

- **Game of Division** (`game_of_division.cpp`)
  - Two-player game with division operations
  - Uses: Game theory, mathematical logic

- **Set** (`set.cpp`)
  - Perform set operations on given elements
  - Uses: Set data structure, operations

- **Twice** (`twice.cpp`)
  - Find elements appearing exactly twice in array
  - Uses: Array manipulation, counting

- **Startup** (`startup.cpp`)
  - Process startup sequence with specific rules
  - Uses: String processing, state management

- **Greedy Monocrap** (`greedy_monocrap.cpp`)
  - Solve optimization problem using greedy approach
  - Uses: Greedy algorithm, sorting

- **Easy Problem** (`easy_problem.cpp`)
  - Basic implementation problem
  - Uses: Simple programming concepts

- **Sliding** (`sliding.cpp`)
  - Find maximum sum in sliding window
  - Uses: Sliding window technique

- **Normal Problem** (`normal_problem.cpp`)
  - Standard implementation challenge
  - Uses: Basic programming concepts

- **Hard Problem** (`hard_problem.cpp`)
  - Complex implementation challenge
  - Uses: Advanced programming concepts

- **Line Breaks** (`line_breaks.cpp`)
  - Format text with specific line break rules
  - Uses: String manipulation

- **Two Frogs** (`two_frogs.cpp`)
  - Calculate frog jumps with constraints
  - Uses: Dynamic Programming

- **Fibonacciness** (`fibonacciness.cpp`)
  - Check if number is in Fibonacci sequence
  - Uses: Mathematical sequence

- **Fast Math** (`fast_math.cpp`)
  - Perform bitwise operations on numbers
  - Uses: Bitwise operations

- **Orange Drinks** (`orange_drinks.cpp`)
  - Calculate average of drink volumes
  - Uses: Floating-point arithmetic

- **Presents** (`presents.cpp`)
  - Distribute presents among friends
  - Uses: Array manipulation

- **Array Divisibility** (`array_divisibility.cpp`)
  - Create array where sum of elements at positions divisible by k is divisible by k
  - Uses: Mathematical sequence

- **Magnets** (`magnets.cpp`)
  - Count groups of adjacent magnets
  - Uses: String processing

- **In Search of Easy Problem** (`in_search_of_easy_problem.cpp`)
  - Check if any problem is marked as hard
  - Uses: Array processing

- **George and Accommodation** (`george_accommodation.cpp`)
  - Find rooms with space for George and friend
  - Uses: Simple arithmetic

- **Calculate Function** (`cal_function.cpp`)
  - Compute sum of alternating series
  - Uses: Mathematical formula

- **Meaning of Mean** (`meaning_mean.cpp`)
  - Calculate mean of given numbers
  - Uses: Basic statistics

- **Square or Not** (`square_or_not.cpp`)
  - Check if number is perfect square
  - Uses: Mathematical operations

- **Scale** (`scale.cpp`)
  - Scale numbers by given factor
  - Uses: Basic arithmetic

- **Minimize** (`minimize.cpp`)
  - Find minimum value in array
  - Uses: Array traversal

- **Two Screens** (`two_screens.cpp`)
  - Optimize screen usage
  - Uses: Basic optimization

- **String** (`string.cpp`)
  - Process string operations
  - Uses: String manipulation

- **Max Plus Size** (`max_plus_size.cpp`)
  - Find maximum plus sign size in grid
  - Uses: Grid traversal

- **Dora's Set** (`doras_set.cpp`)
  - Perform set operations
  - Uses: Set manipulation

- **Soccer** (`soccer.cpp`)
  - Check if soccer teams never had equal scores between two given scores
  - Uses: Logical comparison, relative position checking

- **Sum of Digits** (`a_plus_b_again.cpp`)
  - Find sum of digits of a two-digit number
  - Uses: Digit extraction, modulo operations

- **Creating Words** (`creating_words.cpp`)
  - Swap first characters of two 3-letter words
  - Uses: String manipulation, character swapping

- **Bus Seating Arrangement** (`seating_in_a_bus.cpp`)
  - Check if passengers followed bus seating rules
  - Uses: Set operations, neighbor checking

### 900 Rating Problems

* **Game of Mathletes** (`game_of_mathletes.cpp`)
  - Find pairs of numbers that sum to k
  - Uses: Two-pointer technique

* **Kevin and Permutation** (`kevin_and_permutation.cpp`)
  - Generate permutation with minimum difference k
  - Uses: Array manipulation

* **Replace Character** (`replace_character.cpp`)
  - Replace least frequent character in string
  - Uses: Character frequency counting

* **MEX Destruction** (`mex_destruction.cpp`)
  - Find minimum excluded value in array
  - Uses: Array processing, MEX calculation

## Compilation Guide

### Windows
Using MinGW G++:
```bash
# Single file compilation
g++ -std=c++17 filename.cpp -o filename.exe

# Run the program
./filename.exe
```

Using MSVC:
```bash
# Single file compilation
cl /EHsc filename.cpp

# Run the program
filename.exe
```

### Linux/MacOS
```bash
# Single file compilation
g++ -std=c++17 filename.cpp -o filename

# Run the program
./filename
```

### Compilation Flags
For better debugging and warnings:
```bash
g++ -std=c++17 -Wall -Wextra -O2 filename.cpp -o filename
```

Common flags:
- `-std=c++17`: Use C++17 standard
- `-Wall`: Enable all warnings
- `-Wextra`: Enable extra warnings
- `-O2`: Enable optimization level 2
- `-g`: Add debugging information

## Usage

Each solution file contains:
- Problem description in comments
- Input/Output format
- Detailed code comments explaining the logic
- Time and space complexity considerations

To run any solution:
1. Compile the C++ file using instructions in [Compilation Guide](#compilation-guide)
2. Input format is specified in file comments
3. Output will be according to problem requirements

## Contributing

Feel free to:
- Add new solutions
- Improve existing solutions
- Add more detailed comments
- Suggest better algorithms

Please maintain the existing code structure and commenting style when contributing.

# Codeforces Problem Solution

## Problem Description
Dmitry wrote down t integers on the board, but he believes he might have missed writing an important integer n among them. The integer n had the form 10^x (where x ≥ 2), but Dmitry missed writing the '^' symbol. For example:
- Instead of 10^5, he wrote 105
- Instead of 10^19, he wrote 1019

The task is to determine which of the integers on the board could have been the important integer n and which could not.

## Solution Approach
The solution checks if a given number could be a miswritten form of 10^x (where x ≥ 2) by verifying the following conditions:
1. The number must be at least 3 digits long (since 10^2 = 100 is the smallest valid number)
2. The number must start with "10"
3. The remaining part after "10" must:
   - Not be just "1" (as that would be 10^1 which is not allowed)
   - Not start with '0' (as numbers can't start with 0)

## Code Structure
- `primary_task()`: Main function that checks if a number could be a valid 10^x number
- Input: A string representing the number to check
- Output: "yes" if the number could be a valid 10^x number, "no" otherwise

## Usage
1. First input: Number of test cases (t)
2. For each test case:
   - Input: A number to check
   - Output: "yes" or "no" indicating if it could be a valid 10^x number

## Example
Input:
```
3
105
1019
100
```
Output:
```
yes
yes
no
```
