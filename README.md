## Code Structure
The code is implemented in C++ and includes:
- Input/output handling
- Nested loops for calculating sums
- Variables to track maximum sum and optimal x value
- Proper handling of edge cases

# Codeforces Problem Solutions

This repository contains solutions to various Codeforces problems, organized by difficulty rating.

## Table of Contents
- [Repository Structure](#repository-structure)
- [Problems by Rating](#problems-by-rating)
  - [800 Rating Problems](#800-rating-problems)
  - [900 Rating Problems](#900-rating-problems)
- [Contest](#Contest)
  - [Div-4-R-1017](#Div-4-R-1017)
  - [Neowise Labs Contest 1 (Codeforces Round 1018, Div. 1 + Div. 2)](#Div-1-2-R-1018)
- [Compilation Guide](#compilation-guide)
- [Usage](#usage)
- [Contributing](#contributing)

## Repository Structure

- `codeforces_800_/` - Contains solutions to problems rated 800
- `codeforces_900_/` - Contains solutions to problems rated 900

## Problems by Rating

### 800 Rating Problems

- **Primary Task** (`primary_task.cpp`)
  - Determine if a number could be a miswritten form of 10^x (x ≥ 2)
  - Uses: String manipulation, pattern matching
  - Solution checks:
    1. Number length ≥ 3 (minimum valid is 100)
    2. Starts with "10"
    3. Remaining part is valid (not "1" or starting with '0')

- **Fox and Snake** (`fox_and_snake.cpp`)
  - Draw a snake pattern on an n×m grid
  - Uses: String manipulation, pattern generation
  - Solution approach:
    1. Creates three row patterns:
       - Full row of '#'
       - Row with '#' at end
       - Row with '#' at start
    2. Alternates patterns to create snake-like movement
    3. Snake starts at (1,1), extends right, then down, alternating direction

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

- **MEX Table** (`mex_table.cpp`)
  - Maximize sum of MEX values in n×m table
  - Uses: Mathematical insight, MEX calculation
  - Solution approach:
    1. MEX is smallest non-negative integer not in collection
    2. Maximum sum is max(n+1, m+1)
    3. Achieved by arranging numbers to ensure each row/column contains all numbers from 0 to n or 0 to m

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

- **X Axis Minimum Distance** (`x_axis.cpp`)
  - Find the smallest possible total distance from three points on the X axis to any point 'a' on the X axis
  - Uses: Basic arithmetic

- **Maximum Multiple Sum** (`maximum_multiple_sum.cpp`)
  - Find the value of x (2 ≤ x ≤ n) that maximizes the sum of all multiples of x that are ≤ n
  - Uses: Mathematical optimization, sum calculation
  - Solution approach:
    1. Iterates through all possible x values from 2 to n
    2. For each x, calculates sum of its multiples (2x, 3x, ..., kx) where kx ≤ n
    3. Uses mathematical formula to optimize sum calculation
    4. Tracks maximum sum and corresponding x value

- **Diverse Game** (`diverse_game.cpp`)
  - Create a new matrix b from given matrix a where no element matches its position in a
  - Uses: Matrix manipulation, element transformation
  - Solution approach:
    1. For 1x1 matrix, output -1 (impossible case)
    2. For other cases, transform elements:
       - Largest element (n*m) becomes 1
       - All other elements are incremented by 1
    3. Efficient single-pass solution with O(n*m) complexity
- **Strange Splitting** (`strange_splitting.cpp`)
  - Color elements of a sorted array such that the ranges of red and blue elements are not equal.
  - Uses: Array manipulation, coloring logic.
  - Solution approach:
    1. Read the number of elements in the array.
    2. Check if the first and last elements are the same; if so, output "NO" (impossible case).
    3. If they are different, output "YES" and color the first element red and the last element blue.
    4. Color all other elements red.
    5. Output the resulting coloring.
- **Catch the Coin** (`catch_the_coin.cpp`)  
  - Determine for each coin whether Monocarp can collect it before it falls below the X-axis  
  - Coins fall one unit down per second; Monocarp starts at `(0, 0)` and moves one unit per second  
  - A coin at `(x, y)` is collectible if `abs(x) <= y`  
  - Uses: Basic math, absolute value, conditional logic
- **RAM Upload Simulation** (`upload_more_ram.cpp`)
  - Find the minimum number of seconds required to upload `n` GBs of RAM to a server, with a constraint that only 1 GB can be uploaded in any `k` consecutive seconds.
  - Uses: Looping, conditional logic, simulation
- **Minimum Neighbor Max Minus One** (`neighbor_min.cpp`)
  - For each test case, given an array of integers, find the smallest value among all `max(v[i], v[i-1]) - 1` for `i` from 1 to n-1
  - Uses: Iteration, min/max operations, vector input handling
- **Wonderful Sticks** (`wonderful_sticks.cpp`)
  - Find any valid arrangement of sticks with lengths from 1 to n, satisfying a string of relational constraints (`<` and `>`)
  - Uses: Stack simulation, relative ordering, value shifting
  - **Alice and Books** (`alice_and_books.cpp`)
  - Find the maximum total number of pages Alice can read by dividing books into two piles and selecting the largest book from each
  - Uses: Maximum tracking, array manipulation
- **New Bakery** (`new_bakery.cpp`)
  - Calculate the maximum profit Bob can earn from selling `n` buns using a promotional pricing strategy
  - Uses: Arithmetic series sum, conditional logic
- **Minimum Occupied Diagonals** (`diagonals.cpp`)
  - Determine the minimum number of diagonals that must be occupied when placing `k` chips on an `n x n` checkered board
  - A diagonal is defined by cells where `i + j` is constant
  - The goal is to distribute chips so that the number of occupied diagonals is minimized
  - Uses: Greedy placement strategy, arithmetic reasoning
- **Question Mark** (`question_mark.cpp`)
  - Maximize the number of correct answers Tim can get on a test by matching his answers ('A', 'B', 'C', 'D', '?') to the expected distribution (n correct answers per option)
  - Uses: Character counting with `map`, simple arithmetic
- **Only Pluses** (`only_pluses.cpp`)
  - Maximize the product of three integers by increasing the smallest among them up to 5 times
  - Uses: Greedy strategy, basic arithmetic
- **Buttons** (`buttons.cpp`)
  - Determine the winner between Anna and Katie in a button pressing game based on the counts of exclusive and shared buttons
  - Uses: Conditional logic, basic arithmetic

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

## Contest

### Div-4-R-1017

### Div-1-2-R-1018

## Code Structure
The code is implemented in C++ and includes:
- Simple input/output handling
- Direct calculation of maximum MEX sum
- No need for complex data structures or algorithms

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

