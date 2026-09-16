#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    system ("cls");
    int array3d[3][3][4];
    int angka = 2;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                array3d[i][j][k] = angka;
                angka = angka + 2;
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        cout << "Elemen ke-" << (i + 1) << ":" << endl;
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                cout << array3d[i][j][k] << "\t";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}