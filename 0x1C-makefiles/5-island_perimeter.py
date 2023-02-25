#!/usr/bin/python3
"""
Contains the island_perimeter function
"""


def find_path(values, row, col, checked, grid, grid_state):
    """
    Finds the path of the land
    values: a list of the active perimeter of grid cells(land) checked
    row: the row position on the grid
    col: the col position on the grid
    checked: a list of grid cell(land) checked
    grid: grid to be checked
    grid_state: a tuple containing the width and height of the grid
    """
    cell_sum = 0
    position = (row, col)
    if position in checked:
        return
    if row in range(
            grid_state[0]) and col in range(
                    grid_state[1]) and grid[row][col] == 1:
        checked.append(position)
        if row == 0 or grid[row-1][col] == 0:
            cell_sum += 1
        if row == grid_state[0]-1 or grid[row+1][col] == 0:
            cell_sum += 1
        if col == 0 or grid[row][col-1] == 0:
            cell_sum += 1
        if col == grid_state[1]-1 or grid[row][col+1] == 0:
            cell_sum += 1
        values.append(cell_sum)
        find_path(values, row-1, col, checked, grid, grid_state)
        find_path(values, row+1, col, checked, grid, grid_state)
        find_path(values, row, col-1, checked, grid, grid_state)
        find_path(values, row, col+1, checked, grid, grid_state)


def island_perimeter(grid):
    """
    returns the perimeter of the island described in grid.
    grid is a list of list of integers:
        - 0 represents a water zone
        - 1 represents a land zone
        - One cell is a square with side length 1
        - Grid cells are connected horizontally/vertically (not diagonally).
    """
    grid_state = (len(grid), len(grid[0]))
    values = []
    first = ()
    checked = []
    for idx, row in enumerate(grid):
        try:
            col = row.index(1)
            first += (idx, col)
            break
        except ValueError:
            continue
    if not first:
        return 0
    find_path(values, first[0], first[1], checked, grid, grid_state)
    return sum(values)
