#include <iostream>
using namespace std;

int main(){
    int nums[]{4,2,3,1};
    int panjang = sizeof(nums)/sizeof(nums[0]);
    
    for(int i = 0; i < panjang; i++){
        if (nums[i] % 2 == 0){
            cout << nums[i] << " ";
        }
    }
    
    for(int i = 0; i < panjang; i++){
        if (nums[i] % 2 != 0){
            cout << nums[i] << " ";
        }
    }
    
}