# The Eight Puzzle
#### Project for Introduction to Artifical Intelligence
#### Created by Sarah Sturkie

## Introduction
* This project automatically solves an eight-puzzle. The puzzle is on a 3x3 tile board with 8 numbered tiles and 1 blank tile. 
* The goal is to match the current board with the solved board. Tiles move by "sliding" or swapping a neighboring numbered tile with the blank tile. The different movements are up, down, left, and right. 
## Structure
* This project is written in C++
* The 3x3 board is created using a vector of vectors. Each index in the vector points to an int vector representing a full row of the board
* Value 0 on the board represents the empty tile
* The board uses 1 of 3 algorithms to solve: Uniform Cost Search, A* with the Misplaced Tile heuristic, and A* with Manhattan Distance heuristic
## Algorithms
### Uniform Cost Search
### Misplaced Tile Search
### Manhattan Distance Search
## Comparisons
## Conclusion
## Resources
The lecture slides created by Dr. Keogh, "Blind Search", "Heuristic Search", and "Eigh Puzzle Briefing and Review of Search", were consulted in the development of this project. Additional research on priority queues.
## Known Issues and Bugs
* This program faces runtime issues on depths 4 and up.
