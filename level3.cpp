#include <iostream>
using namespace std;

int main(){
    int nums[]{4,3,2,9};
    int panjang = sizeof(nums)/sizeof(nums[0]);

    cout << "[";
    for(int i = 0; i < panjang; i++){
        if(i == panjang - 1){
            nums[i] = nums[i] + 1;
        }
        if(nums[i] == 10){
            cout << "1 0";
        }
        else {
            cout << nums[i] << " ";
        }
        
    }
    cout << "]";
}