/*

*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int nums[]{2, 7, 11, 15};
    int panjang = sizeof(nums)/sizeof(nums[0]);

    for (int i = 0; i < panjang; i++ ){
        for (int j = 1; j < panjang; j++ ){
            if(nums[i] + nums [j] == n){
                cout << nums[i] << " " << nums[j];
            }
        }
    }
}
