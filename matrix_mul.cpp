#include <iostream>
using namespace std;

int main() {

    int row1, col1, row2, col2, i, j, k;

    int m1[10][10], m2[10][10], mul[10][10];

    cout << "\nEnter the number of Rows and Columns of first matrix : ";
    cin >> row1 >> col1;

    cout << "\nEnter the number of Rows and Columns of second matrix : ";
    cin >> row2 >> col2;

    if (col1 == row2) {
        cout << "\nEnter the " << row1 * col1 << " elements of first matrix : \n";

        for (i = 0; i < row1; i++) {
            for (j = 0; j < col1; j++) {
                cin >> m1[i][j];
            }
        }

        cout << "\nEnter the " << row2 * col2 << " elements of second matrix : \n";

        for (i = 0; i < row2; i++) {
            for (j = 0; j < col2; j++) {
                cin >> m2[i][j];
            }
        }

        cout << "\nThe first matrix is : \n";
        for (i = 0; i < row1; i++) {
            for (j = 0; j < col1; j++) {
                cout << m1[i][j] << "  ";
            }
            cout << endl;
        }

        cout << "\nThe second matrix is : \n";
        for (i = 0; i < row2; i++) {
            for (j = 0; j < col2; j++) {
                cout << m2[i][j] << "  ";
            }
            cout << endl;
        }
        // multiplication calculation
        for (i = 0; i < row1; i++) {
            for (j = 0; j < col2; j++) {
                mul[i][j] = 0;

                for (k = 0; k < col1; k++)
                    mul[i][j] = mul[i][j] + (m1[i][k] * m2[k][j]);
            }
        }

        cout << "\nThe mulduct matrix is : \n";
        for (i = 0; i < row1; i++) {
            for (j = 0; j < col2; j++) {
                cout << mul[i][j] << "  ";
            }
            cout << endl;
        }

    } 
    else {
        cout << "\nMatrix multiplication can't be done as the matrices are not compatible";
    }

    cout << "\n";
    return 0;
}