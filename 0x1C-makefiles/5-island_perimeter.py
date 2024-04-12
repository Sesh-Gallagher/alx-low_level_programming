#!/usr/bin/python3
"""Represents the island perimeter measuring function."""


def island_perimeter(grid):
	"""Return  perimiter of an island.
	The grid represents water by 0 and by 1.

Args:
	grid (list): list of integers representing an island.
	Returns:
	perimeter of the island defined in grid. """

	edges = 0
	size = 0
	height = len(grid)
	width = len(grid[0])

    for a in range(height):
        for b in range(width):
            if grid[a][b] == 1:
                size += 1
                if (b > 0 and grid[a][b - 1] == 1):
                    edges += 1
                if (a > 0 and grid[a - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
