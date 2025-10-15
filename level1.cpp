/*

*/

#include <iostream>
using namespace std;

int main() {
    string teks;
    cin >> teks;

    int panjang = teks.length();
    for (int i = panjang - 1; i >= 0; i--) {
        cout << teks[i] << " ";
    }
}