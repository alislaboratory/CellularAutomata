from life import Life, Vector
import time

from rgbmatrix import RGBMatrix, RGBMatrixOptions

game = Life(Vector(10,10))

options = RGBMatrixOptions()
options.rows = 32
options.cols = 16
options.parallel = 1
options.hardware_mapping = 'regular'

matrix = RGBMatrix(options=options)

canvas = matrix.CreateFrameCanvas()


while True:
    time.sleep(0.1)
    
    grid = game.get_grid()

    grid[6][3].state = True

    game.set_grid(grid)

    for i in len(grid):
        for j in len(i):
            canvas.SetPixel(i, j, 255, 255, 255)

    canvas = matrix.SwapOnVSync(canvas)



