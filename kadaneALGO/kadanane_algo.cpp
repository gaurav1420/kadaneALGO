#include<iostream>
using namespace std;

int getMaxsubarraysum(int arr[], int n){
    int maxSF = INT_MIN;
    int sum = 0;

    for(int i = 0; i<n; i++){
        //include current element
        sum = sum + arr[i];

        //update the
        maxSF = max(maxSF,sum);

        //if max ending here is 0 then don't include
        if(sum < 0){
            sum = 0;
        }
    }
    return maxSF;
}

int main(){
   // int arr[] = {-2,-3,4,-1,-2,1,5,-3};
   // int n = sizeof(arr)/ sizeof(arr[0]);

   int n;
   cout << "Enter size of array :";
   cin >> n;

   //taking input of array

   int arr[n];
   for(int i = 0; i<n; i++){
       cin >> arr[i];
   }

    getMaxsubarraysum(arr, n);

    cout << getMaxsubarraysum(arr, n);
    return 0;
} 
