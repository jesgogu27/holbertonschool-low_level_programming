#!/usr/bin/python3
"""Island Perimeter"""


def island_perimeter(grid):
    """
    returns the perimeter of the island

    """
    p = 0
    for x in range(len(grid)):
        for y in range(len(grid[x])):
            if grid[x][y] == 1:
                p += 4
                if x > 0 and grid[x - 1][y] == 1:
                    p -= 2
                if y > 0 and grid[x][y - 1] == 1:
                    p -= 2
    return p
    