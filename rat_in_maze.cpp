// using backtracking

#include <iostream>
using namespace std;

// to check whether the  position is safe  or not
bool isSafe(int **arr, int x, int y, int n)
{
    if (x < n && y < n && arr[x][y] == 1)
    {
        return true;
    }
    return false;
}

bool rat_iinMaze(int **arr, int x, int y, int n, int **sol)
{
    if (x == n - 1 && y == n - 1)
    { // base condition
        sol[x][y] = 1;
        return true;
    }

    if (isSafe(arr, x, y, n))
    {
        sol[x][y] = 1;
        if (rat_iinMaze(arr, x + 1, y, n, sol))
        { // for horizontal side
            return true;
        }
        if (rat_iinMaze(arr, x, y + 1, n, sol))
        { // for vertical
            return true;
        }
        sol[x][y] = 0; // backtracking
        return false;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    int **arr = new int *[n];
    for (auto i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }

    for (auto i = 0; i < n; i++)
    {
        for (auto j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int **sol = new int *[n];
    for (auto i = 0; i < n; i++)
    {
        sol[i] = new int[n];
        for (auto j = 0; j < n; j++)
            sol[i][j] = 0;
    }

    if (rat_iinMaze(arr, 0, 0, n, sol))
    {
        for (auto i = 0; i < n; i++)
        {
            for (auto j = 0; j < n; j++)
            {
                cout << sol[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}

// 1 0 1 0 1
// 1 1 1 1 1
// 0 1 0 1 0
// 1 0 0 1 1
// 1 1 1 0 1