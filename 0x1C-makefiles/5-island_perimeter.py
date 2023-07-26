#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    Parameters:
    grid (list of list of integers): Represents the island grid.

    Returns:
    int: The perimeter of the island.
    """
    if not grid or not grid[0]:
        return 0

    rows, cols = len(grid), len(grid[0])
    perimeter = 0

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                # Count the number of surrounding water zones (0's)
                water_zones = 0
                if row - 1 >= 0 and grid[row - 1][col] == 0:
                    water_zones += 1
                if row + 1 < rows and grid[row + 1][col] == 0:
                    water_zones += 1
                if col - 1 >= 0 and grid[row][col - 1] == 0:
                    water_zones += 1
                if col + 1 < cols and grid[row][col + 1] == 0:
                    water_zones += 1

                perimeter += water_zones

    return perimeter
