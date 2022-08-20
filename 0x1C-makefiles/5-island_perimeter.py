#!/usr/bin/python3
"""Defines an island perimeter function."""


def island_perimeter(grid):
    """Return perimeter of island in grid.

    Grid represents water by 0 and land by 1.

    Args:
        grid (list): A list of lists of integers.
    Returns:
        The perimeter of the island in grid.
    """
    row_num = len(grid)
    col_num = len(grid[0])
    islands, overlaps = 0, 0

    for i in range(row_num):
        for j in range(col_num):
            if grid[i][j] == 1:
                islands += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    overlaps += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    overlaps += 1
    return islands * 4 - overlaps * 2
