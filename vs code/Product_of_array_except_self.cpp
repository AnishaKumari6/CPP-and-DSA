#include<iostream>
#include<vector>
using namespace std;
vector<int> multiply(vector<int>&arr){
    int n=arr.size();
    vector<int> prefix(n,1);
    vector<int> sufix(n,1);
    vector<int>ans(n,1);
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]*arr[i-1];
    }
    for(int i=n-2;i>=0;i--){
        sufix[i]=sufix[i+1]*arr[i+1];
    }
    for(int i=0;i<n;i++){
        ans[i]=prefix[i]*sufix[i];
    }
    return ans;
}
int main(){
      int n=4;
      vector<int> arr;
      vector<int> brr;
      for(int i=0;i<n;i++){
        int m;
        cin>>m;
        arr.push_back(m);
      }
      brr=multiply(arr); 
      for(int i=0;i<n;i++){
        cout<<brr[i]<<" ";
      }
}