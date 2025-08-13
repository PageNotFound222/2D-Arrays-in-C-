#include <iostream>
using namespace std;

int main() {
    int m, n, x, y;

    cout << "Enter the number of rows for matrix 1: ";
    cin >> m;
    cout << "Enter the number of columns for matrix 1: ";
    cin >> n;

    int mat1[m][n];

    cout << "Enter the number of rows for matrix 2: ";
    cin >> x;
    cout << "Enter the number of columns for matrix 2: ";
    cin >> y;

    int mat2[x][y];

    
    if (m != x || n != y) {
        cout << "Matrix addition is not possible!" << endl;
        return 0; // Exit if dimensions don't match
    }

   
    cout << "Enter elements of matrix 1:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat1[i][j];
        }
    }

   
    cout << "Enter elements of matrix 2:" << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cin >> mat2[i][j];
        }
    }

    
    int mat3[m][n];

   
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    
    cout << "Matrix 1:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat1[i][j] << " ";
        }
        cout << endl;
    }

  
    cout << "Matrix 2:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat2[i][j] << " ";
        }
        cout << endl;
    }

    
    cout << "Sum Matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
/* output:
Enter the number of rows for matrix 1: 2
Enter the number of columns for matrix 1: 2
Enter the number of rows for matrix 2: 2
Enter the number of columns for matrix 2: 2
Enter elements of matrix 1:
1

2
3
4
Enter elements of matrix 2:
6
7
8
9
Matrix 1:
1 2 
3 4 
Matrix 2:
6 7 
8 9 
Sum Matrix:
7 9 
11 13 
*\
