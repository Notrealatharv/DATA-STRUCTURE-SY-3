#include <iostream>
using namespace std;

int main() {
    int A[2][2], B[2][2], result[2][2];

    cout << "Enter Elements of matrix A:\n";
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            cin >> A[i][j];

    cout << "Enter Elements of matrix B:\n";
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            cin >> B[i][j];

    cout << "Select the operation:\n";
    cout << "1. Addition\n";
    cout << "2. Multiplication\n";
    cout << "3. Division\n";
    cout << "4. Subtraction\n";

    int n;
    cin >> n;

    switch (n) {
        case 1: 
            for (int i = 0; i < 2; i++)
                for (int j = 0; j < 2; j++)
                    result[i][j] = A[i][j] + B[i][j];
            cout << "Addition of two matrices is:\n";
            break;

        case 2: 
            for (int i = 0; i < 2; i++)
                for (int j = 0; j < 2; j++)
                    result[i][j] = A[i][0] * B[0][j] + A[i][1] * B[1][j];
            cout << "Multiplication of two matrices is:\n";
            break;

        case 3: 
            for (int i = 0; i < 2; i++) {
                for (int j = 0; j < 2; j++) {
                    if (B[i][j] != 0)
                        result[i][j] = A[i][j] / B[i][j];
                    else {
                        cout << "Division by zero not allowed at [" 
                             << i << "][" << j << "]\n";
                        return 0;
                    }
                }
            }
            cout << "Division of matrices is:\n";
            break;

        case 4: 
            for (int i = 0; i < 2; i++)
                for (int j = 0; j < 2; j++)
                    result[i][j] = A[i][j] - B[i][j];
            cout << "Subtraction of two matrices is:\n";
            break;

        default:
            cout << "Invalid Input\n";
            return 0;
    }


    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++)
            cout << result[i][j] << " ";
        cout << endl;
    }

    return 0;
}