#include <iostream>
using namespace std;


int main() {
    int n;
    cout << "Jumlah: ";
    cin >> n;

    int arr[n];
    cout << "Masukan angka:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //Insertion Sort
    for (int i = 1; i < n; i++) {
        int Index = arr [i];
        int j = i - 1;

        // Geser elemen yang lebih besar ke kanan
        while (j >= 0 && arr[j] > Index) {
            arr[j+1] = arr[j];
            j--;
        }
        arr [j+1] = Index;
    }

    cout << "Insertion Sort:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
