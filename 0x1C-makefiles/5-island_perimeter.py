#!/usr/bin/python3

def island_perimeter(grid):
"""Function to calculate the perimeter of the island in given grid."""


	perimeter = 0

	# Iterate through each cell in the grid
	for i in range(len(grid)):
		for j in range(len(grid[0])):

			#whenever we encounter a land cell
			cell
            		if grid[i][j] == 1:
                		perimeter += 4
                		# The cell loses one edge if there is a neighboring land cell on the right or bottom
                		if i < (len(grid) - 1): 
                    			if grid[i+1][j] == 1: 
                        			perimeter -= 2
                		if j < (len(grid[0]) - 1): 
                    			if grid[i][j+1] == 1: 
                        			perimeter -= 2
    return perimeter

