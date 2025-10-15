#include <iostream>
using namespace std;

int main(){
    int nums[]{1,5,2,4,1};
    int panjang = sizeof(nums)/sizeof(nums[0]);

    int operasi = 0;
    for(int i = 0; i < panjang - 1; i++){
        if(nums[i] > nums [i + 1]){
            int banyakTambah = nums[i] - nums[i+1] + 1;
            nums[i+1] += banyakTambah;
            operasi += banyakTambah;
        }
        
    }
    for(int i = 0; i < panjang; i++){
        cout << nums[i] << " ";
    }
    cout << endl << operasi;
}