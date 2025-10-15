/*

*/

#include <iostream>
using namespace std;

void hitungBanyak(int nums[], int n) {
    bool adaDuplikat = false;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] == nums[j]) {
                cout << "True";
                adaDuplikat = true;
                return;
            }
        }
        if (!adaDuplikat) {
        cout << "False" << endl;
        }
    }
    
    cout << "False";
}

int main(){
    int n;
    cin >> n;

    int nums[n];
    int panjang = sizeof(nums)/sizeof(nums[0]);
    
    cout << "Masukan " << n << " angka: ";
    for(int i = 0; i < panjang; i++ ){
    cin >> nums[i];
    }
    hitungBanyak(nums, n);
}