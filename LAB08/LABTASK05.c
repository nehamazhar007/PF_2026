#include <stdio.h>

void printGrid(int (*grid)[5]);
int countNeighbours(int (*grid)[5], int row, int col);
void nextGeneration(int (*grid)[5]);

int main()
{
    int grid[5][5] = {0};
    int gens, g, i;

    for (i = 1; i <= 3; i++)
        grid[i][2] = 1;

    do
    {
        printf("Enter number of generations (0-50): ");
        if (scanf("%d", &gens) != 1)
        {
            while (getchar() != '\n');
            gens = -1;
        }
        if (gens < 0 || gens > 50)
            printf("Invalid number\n");
    } while (gens < 0 || gens > 50);

    for (g = 0; g <= gens; g++)
    {
        printf("Generation %d:\n", g);
        printGrid(grid);
        if (g < gens)
            nextGeneration(grid);
    }

    return 0;
}

void printGrid(int (*grid)[5])
{
    int r, c;
    for (r = 0; r < 5; r++)
    {
        for (c = 0; c < 5; c++)
            printf("%d ", grid[r][c]);
        printf("\n");
    }
}

int countNeighbours(int (*grid)[5], int row, int col)
{
    int i, j, nr, nc, count = 0;
    for (i = -1; i <= 1; i++)
    {
        for (j = -1; j <= 1; j++)
        {
            if (i == 0 && j == 0)
                continue;
            nr = row + i;
            nc = col + j;
            if (nr >= 0 && nr < 5 && nc >= 0 && nc < 5)
                count += grid[nr][nc] & 1;
        }
    }
    return count;
}

void nextGeneration(int (*grid)[5])
{
    int r, c, n, alive;

    for (r = 0; r < 5; r++)
    {
        for (c = 0; c < 5; c++)
        {
            n = countNeighbours(grid, r, c);
            alive = grid[r][c] & 1;
            if (alive && (n == 2 || n == 3))
                grid[r][c] |= 2;
            else if (!alive && n == 3)
                grid[r][c] |= 2;
        }
    }

    for (r = 0; r < 5; r++)
        for (c = 0; c < 5; c++)
            grid[r][c] >>= 1;
}