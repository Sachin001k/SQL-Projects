#include<bits/stdc++.h>

using namespace std;

int solveR(int index, int n, int arr[], int sum, int k){
    //vase case
    if(index == n){
        if(sum == k){
            return 1;
        }
        else return 0;
    }

    sum += arr[index];
    int left = solveR(index+1, n, arr, sum, k);
    sum -= arr[index];

    int right = solveR(index+1, n, arr, sum, k);

    return left+right;
}

int main(){
    int arr[3] = {1,2,1};
    int k = 2;

    cout<<solveR(0,3,arr,0,k)<<endl;
}