#!/usr/bin/python3
"""Defines the island_perimeter function."""


def island_perimeter(grid):
    """Returns the perimeter of the island in grid.

    Args:
        grid: the grid. A rectangular list or lists of integers. 0 represents
            water. 1 represents land. A cell is a square with side length 1.
            Cells are connected horizontally or vertically.
    """
    perimeter = 0
    height = len(grid)
    width = len(grid[0]) if height else 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 0:
                continue

            if i == 0 or grid[i - 1][j] == 0:
                perimeter += 1

            if i == (height - 1) or grid[i + 1][j] == 0:
                perimeter += 1

            if j == 0 or grid[i][j - 1] == 0:
                perimeter += 1

            if j == (width - 1) or grid[i][j + 1] == 0:
                perimeter += 1

    return perimeter
