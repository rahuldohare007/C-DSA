// LeetCode: 118. Pascal's Triangle

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> ans;
    ans.push_back(vector<int>{1});
    if (numRows == 1)
    {
        return ans;
    }
    ans.push_back(vector{1, 1});
    if (numRows == 2)
    {
        return ans;
    }
    for (int i = 2; i < numRows; i++)
    {
        vector<int> row(i + 1);
        row[0] = row[i] = 1;

        for (int p = 1; p < i; p++)
        {
            row[p] = ans[i - 1][p - 1] + ans[i - 1][p];
        }

        ans.push_back(row);
    }
    return ans;
}
// Time Complexity: O(numRows^2)
// Space Complexity: O(1) (ignoring the output space)

int main()
{
    int numRows = 5;
    vector<vector<int>> result = generate(numRows);
    for (const auto &row : result)
    {
        for (int val : row)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}