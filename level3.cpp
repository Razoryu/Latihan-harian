/*

*/

#include <iostream>
using namespace std;

int nums[] = {0,1,0,3,12};
int panjang = sizeof(nums)/sizeof(nums[0]);

int main(){
    for(int i = 0; i < panjang; i++){
        if(nums[i] != 0){
            cout << nums [i] << " ";
        }
    }
    for(int i = 0; i < panjang; i++){
        if(nums[i] == 0){
            cout << nums [i] << " ";
        }
    }
}