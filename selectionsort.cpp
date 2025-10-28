#include <iostream>
using namespace std;

// nuker nilai
void tukar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int n;
    cout << "Jumlah: ";
    cin >> n;

    int arr[n];
    cout << "Masukkan angka: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //Selection Sort
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // tukar terkecil dengan terkecil sebelumnya
        if (minIndex != i) {
            tukar(arr[i], arr[minIndex]);
        }
    }

    cout << "Hasil setelah diurutkan (Selection Sort):\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
