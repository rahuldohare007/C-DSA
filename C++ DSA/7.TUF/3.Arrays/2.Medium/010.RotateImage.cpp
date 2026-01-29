// LeetCode - 48. Rotate Image

#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>> &matrix)
{
// In less time complexity using while loop
    int n = matrix.size();
    int top = 0, bottom = n - 1;
    while (top < bottom)
    {
        for (int i = 0; i < n; i++)
        {
            swap(matrix[top][i], matrix[bottom][i]);
        }
        top++;
        bottom--;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}
// Time Complexity: O(n^2)
// Space Complexity: O(1)

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    rotate(matrix);
    for (const auto &row : matrix)
    {
        for (const auto &elem : row)
        {
            cout << elem << " ";
        }
        cout << endl;
    }

    return 0;
}