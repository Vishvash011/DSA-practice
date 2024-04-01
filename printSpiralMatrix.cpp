#include <iostream>
#include <vector>

using namespace std;

vector<int> printSpiralMatrix(const vector<vector<int>>& matrix) {
        vector<int>ans;
        int rows = matrix.size();
        int cols = matrix[0].size();
        int top = 0, bottom = rows - 1, left = 0, right = cols - 1;

        while (top <= bottom && left <= right) {
        // Print top row
            for (int i = left; i <= right; ++i) {
            ans.push_back(matrix[top][i]);
        }
        top++;

        // Print right column
        for (int i = top; i <= bottom; ++i) {
            ans.push_back(matrix[i][right]);
        }
        right--;

        // Print bottom row
        if (top <= bottom) {
            for (int i = right; i >= left; --i) {
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
        }

        // Print left column
        if (left <= right) {
            for (int i = bottom; i >= top; --i) {
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
}

int main() {
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));

    cout << "Enter matrix elements:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }

    cout << "Spiral Matrix: ";
    printSpiralMatrix(matrix);

    return 0;
}
