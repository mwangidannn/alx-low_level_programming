#!/usr/bin/python3
"""This explains  island perimeter measuring function."""


def island_perimeter(grid):
    """calls back perimiter of an island.

    The grid represents water by 0 and land by 1.

    Args:
        grid (list): A list of list of integers representing an island.
    Calls back:
        perimeter of the island defined in grid.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for p in range(height):
        for z in range(width):
            if grid[p][j] == 1:
                size += 1
                if (z > 0 and grid[p][z - 1] == 1):
                    edges += 1
                if (p > 0 and grid[p - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
