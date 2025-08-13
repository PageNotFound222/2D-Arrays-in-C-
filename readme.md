# 2-D-Arrays-In-C++
## Aim:TO UNDERSTAND 2-D ARRAYS IN C++
## SOFTWARE USED:VS CODE
### THEORY:
A two-dimensional (2D) array in C++ is an array of arrays that stores data in a tabular format, consisting of rows and columns. It is declared by specifying two sizes — the number of rows and the number of columns — for example, int arr[3][4]; creates a matrix with 3 rows and 4 columns. Each element in a 2D array is accessed using two indices: one for the row and one for the column, such as arr[0][2] for the element in the first row, third column.

2D arrays are stored in row-major order, meaning all the elements of the first row are stored consecutively in memory, followed by the elements of the second row, and so on. They are commonly used to represent mathematical matrices, game boards, seating charts, and other grid-based data structures. Data can be input into a 2D array and printed using nested loops, where the outer loop iterates through rows and the inner loop iterates through columns.

While 2D arrays are efficient for fixed-size tabular data, they have some limitations. Their size must be defined at compile time unless dynamic allocation is used, and all rows must have the same number of columns in a standard array. For situations where the size changes during execution, or rows have different lengths, C++ provides alternatives such as vector of vectors.





EXPERIMENTS DONE IN THE CODE:
DEFINING A MATRIX OF ORDER MxN where the M is the number of rows and N is the number of colomns in the matrix 
DOING MATRIX MULTIPLICATION OF 2 MATRIX WHERE,IN THIS CODE WE FIRST TAKE THE NO OF ROWS IN THE MATRIX AND THE NUMBER OF COLOMNS IN THE MATRIX AND THEN ADD THE GIVEN MATRIX
