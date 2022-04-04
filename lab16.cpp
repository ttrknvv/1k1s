#include <iostream>

using namespace std;

void vivodMassiva_afterChange(int** massiv, int rows, int colums);
int findElement_a(int** massiv, int rows, int colums, int a);
int findElement_b(int** massiv, int rows, int colums, int b);

int main()
{
    int k, n, arr, a, b, saveRows_1, saveRows_2, massiv_2[1][8];
    cout << "Input the size of Matrix(kxn: k <=12; n <= 8) = ";
    cin >> k;
    cout << " x "; 
    cin >> n;
    int **array= new int*[k];
    for (int i = 0; i < k; i++) {
       array[i] = new int[n];
       for (int s = 0; s < n; s++) {
            cin >> arr;
            array[i][s] = arr;
            }
    }
    ////////////////////////////////////////////////////////////
    cout << "Change the rows with the a = "; cin >> a;
    cout << " and b = "; cin >> b;
    ////////////////////////////////////////////////////////////
    saveRows_1 = findElement_a(array, k, n, a);
    saveRows_2 = findElement_b(array, k, n, b);
    /// ////////////////////////////////////////////////////////////////////////////
    cout << "Massiv before the change: \n";
    for (int i = 0; i < k; i++) {
        for (int s = 0; s < n; s++) {

            cout << array[i][s] << "\t";
        }
        cout << endl;
    }
    /// ////////////////////////////////////////////////////////////////////////////
    for (int s = 0; s < n; s++) {
        massiv_2[0][s] = array[saveRows_1][s];
        array[saveRows_1][s] = array[saveRows_2][s];
        array[saveRows_2][s] = massiv_2[0][s];
    }
    /// //////////////////////////////////////////////////////////////////////////
    vivodMassiva_afterChange(array, k, n);
    ////////////////////////////////////////////////////////////
    for (int i = 0; i < n; i++) {
        delete[] array[i];
    }
    delete []array;
    return 0;
}
/// ////////////////////////////////////////////////////////////////////////////
void vivodMassiva_afterChange(int **massiv, int rows, int colums) {
    cout << "Massiv after change: \n";
    for (int i = 0; i < rows; i++) {
        for (int s = 0; s < colums; s++) {
        cout << massiv[i][s] << "\t";
        }
        cout << endl;
    }
}
int findElement_a(int** massiv, int rows, int colums, int a) {
    int saveRows_1;
    for (int i = 0; i < rows; i++) {
        for (int s = 0; s < colums; s++) {
            if (massiv[i][s] == a) {
                saveRows_1 = i;
                break;
            }
           }
    }
    return saveRows_1;
}
int findElement_b(int** massiv, int rows, int colums, int b) {
    int saveRows_2;
    for (int i = 0; i < rows; i++) {
        for (int s = 0; s < colums; s++) {
            if (massiv[i][s] == b) {
                saveRows_2 = i;
                break;
            }
        }
    }
    return saveRows_2;
}
