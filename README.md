# Dynamic Matrix Addition in C

## Project Description

A C program that demonstrates dynamic memory allocation by creating two matrices at runtime. The program accepts the matrix size and elements from the user, adds the two matrices, and displays the result.

## Features

- Create matrices dynamically
- Allocate memory using `malloc()`
- Accept matrix elements from the user
- Add two matrices
- Display the result matrix
- Release dynamically allocated memory using `free()`

## Technologies Used

- C
- Dynamic Memory Allocation
- `malloc()`
- `free()`
- Pointers
- Two-Dimensional Arrays

## How to Run

1. Create a file named `dynamic_matrix_addition.c`.
2. Compile the program using a C compiler.
3. Run the compiled program.

Example using GCC:

```bash
gcc dynamic_matrix_addition.c -o dynamic_matrix_addition
./dynamic_matrix_addition

===== Dynamic Matrix Addition =====
Enter number of rows: 2
Enter number of columns: 2

Enter elements of Matrix 1:
Matrix1[1][1]: 10
Matrix1[1][2]: 20
Matrix1[2][1]: 30
Matrix1[2][2]: 40

Enter elements of Matrix 2:
Matrix2[1][1]: 5
Matrix2[1][2]: 10
Matrix2[2][1]: 15
Matrix2[2][2]: 20

===== Result Matrix =====
15 30
45 60

Memory released successfully.

Author

M.Likitha
