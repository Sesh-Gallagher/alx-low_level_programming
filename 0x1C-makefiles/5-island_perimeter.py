#!/usr/bin/python3
"""Represents the island perimeter measuring function"""

def island_perimeter(grid):
    """ Returns the perimeter of the island

    Grid is represented by the following 1 land and 0 water

    Args:
        grid (list): list of integers representing the island

    Returns:
            Perimeter of the island """

    size = 0
    edges = 0
    height = len(grid)
    width = len(grid[0])

    for a in range(height):
        for b in range(width):
            if grid[a][b] == 1:
                size += 1
                if (b > 0 and grid[a][b - 1] == 1):
                    edges += 1
                if (a > 0 and grid[a - 1][b] == 1):
                    edges += 1
    return size * 4 - edges * 2
