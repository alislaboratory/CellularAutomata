
class Vector:
    def __init__(self, x, y):
        self.x = x
        self.y = y
class Cell:
    def __init__(self, position):
        self.position = Vector(position.x, position.y)
        self.state = False
        self.colour = 0x0

class Board:
    def __init__(self, size):

        self.grid = []
        for i in range(size.y + 2):
            temp_row = []
            for j in range(size.x + 2):
                temp_row.append(Cell(j, i))

            self.grid.append(temp_row)

    def get_position(self, vector):
        return self.grid[vector.y][vector.x]
    
    def get_grid(self):
        return self.grid

    def set_grid(self, grid):
        self.grid = grid

class Life:
    def __init__(self, size):
        board = Board(size)
    
    def _check_neighbors(self, position, grid):
        num_neighbors = 0
        
        y = position.x
        x = position.y
        neighbors = [ grid[x-1][y-1].state, grid[x][y-1].state, grid[x+1][y-1].state, grid[x+1][y].state, grid[x+1][y+1].state, grid[x-1][y+1].state, grid[x-1][y].state ]

        for nb in neighbors:
            if nb:
                num_neighbours += 1

        return num_neighbours


    def tick(self):
        grid = self.board.get_grid()[:]
        for y in range(1, len(grid) - 1):
            for x in range(1, len(y) -1):
                neighbors = _check_neighbors(Vector(x, y), self.bard.get_grid())

                if neighbors > 3:
                    grid[y][x].state = False

                elif neighbors < 2:
                    grid[y][x].state = False

                elif neighbors == 2:
                    if grid[y][x].state:
                        grid[y][x].state = True
                    else:
                        grid[y][x].state = False

                elif neighbors == 3:
                    grid[y][x].state = True
        
        self.board.set_grid(grid)

        
    def get_board(self):
        return self.board











        
    
