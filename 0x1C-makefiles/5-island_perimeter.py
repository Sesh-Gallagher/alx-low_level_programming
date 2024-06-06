#!/usr/bin/python3
"""Module that defines the island perimeter measuring function."""


def island_perimeter(grid):
    """Returns the perimiter of the island.

    grid represents land by 1 and water by 0.

    Args:
        grid (list): list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid."""

    size = 0
    width = len(grid[0])
    height = len(grid)
    edges = 0

    for a in range(height):
        for b in range(width):
            if grid[a][b] == 1:
                size += 1
                if (b > 0 and grid[a][b - 1] == 1):
                    edges += 1
                if (a > 0 and grid[a - 1][b] == 1):
                    edges += 1
    return size * 4 - edges * 2
