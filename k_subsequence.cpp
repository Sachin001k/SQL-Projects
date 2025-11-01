#include<bits/stdc++.h>

using namespace std;

void solveR(int index, int n, int arr[], int k, vector<int>&ds, int sum){
    //base case
    if(index == n){
        if(sum == k){
            for(int i=0;i<ds.size();i++){
                cout<<ds[i]<<" ";
            }
            cout<<endl;
        }
        
        return;
    }

    //put inside the ds
    ds.push_back(arr[index]);
    sum += arr[index];
    solveR(index+1,n,arr,k,ds,sum);
    ds.pop_back();
    sum -= arr[index];
    solveR(index+1,n,arr,k,ds,sum);

}
int main(){
    int arr[3] = {1,2,1};
    int k = 2;
    vector<int>ds;
    solveR(0,3,arr,k,ds,0);
}