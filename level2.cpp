/*

*/

#include <iostream>
using namespace std;
int main(){
    int nums[] = {1,2,3,4,5,6,7};
    int k = 3;
    int panjang = sizeof(nums)/sizeof(nums[0]);

    for(int i = panjang - k; i < panjang; i++){
        cout << nums[i] << " ";
    }
    for(int i = 0; i < panjang - k; i++){
        cout << nums[i] << " ";
    }
}