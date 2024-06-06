#!/usr/bin/python3
"""Represents module that calculates island perimeter in a grid."""


def island_perimeter(grid, i, j):
    """Module that returns the perimiter of the island.
	
	grid represents water: 0 and land: 1.

    Args:
        grid (list): list of integers representing an island.
    Returns:
         perimeter of the island defined in grid."""

    edges = 0
    num = 0
    height = len(grid)
    width = len(grid[0])

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                num += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return num * 4 - edges * 2

