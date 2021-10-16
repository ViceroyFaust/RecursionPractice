#include <iostream>

/*
1. What's the simplest possible input? This is the base case
    A 1 * 1 grid, one step solves the problem. also, any one dimensional.
    grid has exactly one solution.
    grid_paths(n, m) = 1 if n = 1 or m = 1.
2. Play around with examples/experiment
    2D grids have as many paths as their length.
3. Relate hard cases to easy cases
    3D grids have 2D solutions + 1 square.
    A 3 * 4 grid is composed of a 3 * 3 and a 2 * 4 with +1 to the paths
4. Generalize the pattern
    An n * m grid can be found using (n - 1) * m and n * (m - 1) grids 
    grid_paths(n, m) = grid_paths(n-1, m) + grid_paths(n, m-1)
5. Write code by combining a recursive pattern with the base case
    grid_paths(n, m) = {1 if n = 1 or m = 1; grid_paths(n-1, m) + grid_paths(n, m-1)}
*/

/*
Write a function that takes two inputs, n and m, and outputs the number of
unique paths from the top left corner to the bottom right corner of a n * m
grid.
Constraints: You can only move down or right 1 unit at a time
*/
int grid_paths(int n, int m) {
    if (n == 1 || m == 1)
        return 1;
    return grid_paths(n - 1, m) + grid_paths(n, m - 1);
}

int main() {
    std::cout << "Grid Paths\nn: ";
    int n, m;
    std::cin >> n;
    std::cout << "m: ";
    std::cin >> m;
    std::cout << "Unique paths: " << grid_paths(n, m) << std::endl;
    return 0;
}