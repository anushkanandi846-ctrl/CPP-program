#include <iostream>
using namespace std;
void add matrices (int rows, int cols, int matrix1 [] [10], int matrix2 [] [10], int result [] [10])
{
for (int i=0; i<rows; i++)
{
for (int j=0; j<cols; j++)
{
result [i] [j]= matrix1 [i][j]+ matrix2 [i] [j];
}
}
}



void substractionmatrices (int rows, int cols, int matrix1 [] [10], int matrix2 [] [10], int result [] [10]))
{
for (int i=0; i<rows; i++)
{
for (int j=0; j<cols; j++)
{
result [i] [j]= matrix1 [i] [j]- matrix2 [i] [j];
}
}
} 




void multiplymatrices (int rows1, int cols1, int matrices1 [][10], int rows2, ints cols2, int matrices2 [] [10], int result [] [10])
{
for (int i=0; i<rows1; i++)
{
for (int j=0;j<cols2; j++)
{
result [i][j]=0;
for (int k=0; K<cols1; k++)
{
result [i] [j]+=matrix1 [i] [j] * matrix2 [K][j];
}
}
}
}



void transposematrix (int rows, int cols, int matrix [] [10], int result [] [10])
{
for (int i=0; i <rows; i++)
{
for (int j=0; j <cols ; i++)
{
result [i] [j] = matrix [i][j];
}
}
}



void displaymatrix(int rows, int cols, int matrix[][10])
{
for (int i = 0; i < rows; i++)
{
for (int j = 0; j < cols; j++)
{
cout << matrix[i][j] << " ";
}
        cout << endl;
    }
}

int main()
{
    int matrix1[10][10], matrix2[10][10], result[10][10];
    int rows1, cols1, rows2, cols2;
    int choice;

    cout << "Enter the number of rows and columns for matrix 1: ";
    cin >> rows1 >> cols1;
    cout << "Enter the elements of matrix 1:\n";
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            cin >> matrix1[i][j];
        }
    }

  
    cout << "Enter the number of rows and columns for matrix 2: ";
    cin >> rows2 >> cols2;
    cout << "Enter the elements of matrix 2:\n";
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            cin >> matrix2[i][j];
        }
    }

  
    cout << "\nSelect operation to perform:\n";
    cout << "1. Add matrices\n2. Subtract matrices\n3. Multiply matrices\n4. Transpose matrix 1\n5. Transpose matrix 2\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        if (rows1 == rows2 && cols1 == cols2)
        {
            addMatrices(rows1, cols1, matrix1, matrix2, result);
            cout << "\nResult of Addition:\n";
            displayMatrix(rows1, cols1, result);
        }
        else
        {
            cout << "Addition not possible. Matrices must have the same dimensions.\n";
        }
        break;

    case 2:
        if (rows1 == rows2 && cols1 == cols2)
        {
            subtractMatrices(rows1, cols1, matrix1, matrix2, result);
            cout << "\nResult of Subtraction:\n";
            displayMatrix(rows1, cols1, result);
        }
        else
        {
            cout << "Subtraction not possible. Matrices must have the same dimensions.\n";
        }
        break;

    case 3:
        if (cols1 == rows2)
        {
            multiplyMatrices(rows1, cols1, matrix1, matrix2, rows2, cols2, result);
            cout << "\nResult of Multiplication:\n";
            displayMatrix(rows1, cols2, result);
        }
        else
        {
            cout << "Multiplication not possible. Number of columns in matrix 1 must equal number of rows in matrix 2.\n";
        }
        break;

    case 4:
        transposeMatrix(rows1, cols1, matrix1, result);
        cout << "\nTranspose of Matrix 1:\n";
        displayMatrix(cols1, rows1, result);
        break;

    case 5:
        transposeMatrix(rows2, cols2, matrix2, result);
        cout << "\nTranspose of Matrix 2:\n";
        displayMatrix(cols2, rows2, result);
        break;

    default:
        cout << "Invalid choice!\n";
    }

    return 0;
}





