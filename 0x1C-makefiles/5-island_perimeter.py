#!/usr/bin/python3
'''
perimeter of island
'''


def island_perimeter(grid):
    '''
    couunt zeros around the land
    '''
    if grid is None:
        return 0

    zero = 0
    for y in range(len(grid)):
        for x in range(len(grid[y])):
            if grid[y][x] == 1:
                zero += 1 if y == 0 or grid[y-1][x] == 0 else 0
                zero += 1 if y == len(grid) - 1 or grid[y+1][x] == 0 else 0
                zero += 1 if x == 0 or grid[y][x-1] == 0 else 0
                zero += 1 if x == len(grid[y]) - 1 or grid[y][x+1] == 0 else 0
    return zero
