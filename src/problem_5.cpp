#include <iostream>
#include <vector>

using namespace std;

void printMatrix(vector<vector<char>> &matrix) {
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[1].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void fillMatrix(vector<vector<char>> &matrix) {
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[1].size(); j++) {
            cin >> matrix[i][j];
        }
    }
}

void printColors(vector<vector<char>> &matrix) {
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[1].size(); j++) {
            if (matrix[i][j] == 'b') {
                cout << "\033[1;34m" << matrix[i][j] << "\033[0m" << " ";
            } else if (matrix[i][j] == 'y') {
                cout << "\033[1;33m" << matrix[i][j] << "\033[0m" << " ";
            } else if (matrix[i][j] == 'w') {
                cout << "\033[1;37m" << matrix[i][j] << "\033[0m" << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    vector<vector<char>> matrix(5, vector<char>(5));
    cout << "Enter the matrix (b, y, w): " << endl;
    fillMatrix(matrix);
    cout << "The matrix is: " << endl;
    printMatrix(matrix);
    cout << "The colors are: " << endl;
    printColors(matrix);
    return 0;
}

