# The Eight Puzzle
#### Project for Introduction to Artificial Intelligence
#### Created by Sarah Sturkie

## Introduction
This project automatically solves an eight-puzzle. The puzzle is on a 3x3 tile board with 8 numbered tiles and 1 blank tile. The goal is to match the current board with the solved board. Tiles move by "sliding" or swapping a neighboring numbered tile with the blank tile. The different movements are up, down, left, and right. 
* This project is written in C++
* The 3x3 board is created using a vector of vectors. Each index in the vector points to an int vector representing a full row of the board
* Value 0 on the board represents the empty tile
* The board uses 1 of 3 algorithms to solve: Uniform Cost Search, A* with the Misplaced Tile heuristic, and A* with Manhattan Distance heuristic
## Algorithms
Each algorithm solves with the A* algorithm with their own heuristic value. The difference in heuristic value affects the time and space completexity of each algorithm but not their completeness. Each algorithm is capable of eventually solving the puzzle. 
* An algorithm is selected and the A* algorithm ```general_search_algorithm``` begins
* A node is created for that starting puzzle and expanded upon based on possible movements of the blank (or movement of the tiles surrounding the blank)
* A priority queue keeps track of the minimum heuristic value to expand on upon expansion
* A heuristic calculation is done for each new node in each call of the expansion
** This heuristic calculation is based on algorithm choice
* If the current board matches the hard-coded solved board, the program is done
* The number of expanded nodes, maximum number of nodes ever present in the queue at one time, and the depth of the solution are printed
* Duplicates are not accounted for in this program
### Uniform Cost Search
* Heuristic value h(n) is always equal to 0
* There is never a calculation for the algorithm on potentially shorter paths to the solution
* This algorithm expands through several nodes without any "educated" guesses on where to expand next and causes a long runtime depending on the depth to the solution
* Each path costs the same and the search never accounts for the end state
### Misplaced Tile Search
* Heuristic value h(n) is the total number of tiles that are not in their correct position in relation to the goal state
* The current board is compared to the solved board to calculate this total
### Manhattan Distance Search
* Heuristic value h(n) is the sum of all displacement values
* The displacement value is the difference between the tile's current position and its solved position
## Comparisons
## Conclusion
## Resources
The lecture slides created by Dr. Keogh, "Blind Search", "Heuristic Search", and "Eight Puzzle Briefing and Review of Search", were consulted in the development of this project. Additional research on priority queues.
## Known Issues and Bugs
* This program faces runtime issues on depths 4 and up
* It is only able to calculate up to depth 8 as there are memory problems on the machine used
