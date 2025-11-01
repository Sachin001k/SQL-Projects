#include<bits/stdc++.h>

using namespace std;
void subsequence(int index, int arr[], vector<int>&ds, int n){
    //base case
    if(index == n){
        //print the ds
        for(auto it:ds){
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }
    //add into the ds
    ds.push_back(arr[index]);
    subsequence(index+1,arr,ds,n);
    ds.pop_back();

    //last to exclude butincrease
    subsequence(index+1, arr, ds, n);

}
int main(){
    int arr[3] = {3,1,2};
    vector<int>ds;
    subsequence(0, arr, ds, 3);

}