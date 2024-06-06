#!/usr/bin/python3
"""Represents island perimeter measuring function."""


def island_perimeter(grid):
    """Module that returns the perimiter of the island.
	
	grid represents water: 0 and land: 1.

    Args:
        grid (list): list of integers representing an island.
    Returns:
         perimeter of the island defined in grid.
    """

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
                        if (a > 0 and grid[a - 1][b] == 1):
                            edges += 1
return size * 4 - edges * 2
