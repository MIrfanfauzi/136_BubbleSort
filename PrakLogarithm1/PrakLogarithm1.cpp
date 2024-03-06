// PrakLogarithm1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int a[20];
int n;

void input() {
    while (true) {
        cout << " Masukkan banyaknya elemen pada array : ";
        cin >> n;
        if (n <= 20)
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal 20 elemen. \n";

        }
    }
    cout << endl;
    cout << "=====================";
    cout << "Masukkan Elemen Array";
    cout << "=====================";

    for (int i = 0; i < n; i++) {
        cout << " Data ke-" << (i + 1) << ": ";
        cin >> a[i];

    }

}

int main()
{
    std::cout << "Hello World!\n";
}

