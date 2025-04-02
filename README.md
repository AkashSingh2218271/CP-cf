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

1. **Journey** (`journey.cpp`)
   - Problem: Find optimal path
   - Uses: Path traversal

2. **Draw a Square** (`draw_a_square.cpp`)
   - Problem: Generate a square pattern
   - Uses: Pattern printing

3. **Game of Division** (`game_of_division.cpp`)
   - Problem: Game theory with division
   - Uses: Mathematical logic

4. **Set** (`set.cpp`)
   - Problem: Set operations
   - Uses: Set manipulation

5. **Twice** (`twice.cpp`)
   - Problem: Find elements appearing twice
   - Uses: Array manipulation

6. **Startup** (`startup.cpp`)
   - Problem: Startup sequence
   - Uses: String processing

7. **Greedy Monocrap** (`greedy_monocrap.cpp`)
   - Problem: Greedy algorithm implementation
   - Uses: Greedy approach

8. **Easy Problem** (`easy_problem.cpp`)
   - Problem: Basic problem solving
   - Uses: Implementation

9. **Sliding** (`sliding.cpp`)
   - Problem: Sliding window technique
   - Uses: Array manipulation

10. **Normal Problem** (`normal_problem.cpp`)
    - Problem: Standard implementation
    - Uses: Basic programming

11. **Hard Problem** (`hard_problem.cpp`)
    - Problem: Complex implementation
    - Uses: Advanced logic

12. **Line Breaks** (`line_breaks.cpp`)
    - Problem: Text formatting
    - Uses: String manipulation

13. **Two Frogs** (`two_frogs.cpp`)
    - Problem: Frog jump calculation
    - Uses: Dynamic Programming

14. **Fibonacciness** (`fibonacciness.cpp`)
    - Problem: Fibonacci sequence properties
    - Uses: Mathematical sequence

15. **Fast Math** (`fast_math.cpp`)
    - Problem: XOR operations
    - Uses: Bitwise operations

16. **Orange Drinks** (`orange_drinks.cpp`)
    - Problem: Average calculation
    - Uses: Floating-point arithmetic

17. **Presents** (`presents.cpp`)
    - Problem: Gift distribution
    - Uses: Array manipulation

18. **Additional 800-rated Problems**
    - `magnets.cpp` - Count groups of magnets
    - `in_search_of_easy_problem.cpp` - Determine problem difficulty
    - `george_accommodation.cpp` - Room allocation
    - `cal_function.cpp` - Mathematical function implementation
    - `meaning_mean.cpp` - Mean calculation
    - `square_or_not.cpp` - Square number detection
    - `scale.cpp` - Scaling problem
    - `minimize.cpp` - Minimization problem
    - `two_screens.cpp` - Screen optimization
    - `string.cpp` - String manipulation
    - `max_plus_size.cpp` - Array size optimization
    - `doras_set.cpp` - Set operations

### 900 Rating Problems

1. **Game of Mathletes** (`game_of_mathletes.cpp`)
   - Problem: Find pairs summing to k
   - Uses: Two-pointer technique
   - Algorithm: Sort array and use two pointers to find pairs

2. **Kevin and Permutation** (`kevin_and_permutation.cpp`)
   - Problem: Generate permutation with minimum difference
   - Uses: Array manipulation
   - Algorithm: Place numbers k positions apart, then fill gaps

3. **Replace Character** (`replace_character.cpp`)
   - Problem: Replace least frequent character
   - Uses: Character frequency counting
   - Algorithm: Count frequencies, find min/max, replace one occurrence

4. **MEX Destruction** (`mex_destruction.cpp`)
   - Problem: Find MEX value in array operations
   - Uses: Array manipulation, MEX calculation
   - Algorithm: Process array elements to find minimum excluded value

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
