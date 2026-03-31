#include<iostream>
#include<vector>
using namespace std;
int main(){
    // int n=5;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i-1;j++){
    //         cout<<" ";
    //     }
    //     // cout<<endl; 
    //     for(int k=1;k<=i+1;k++){
    //         cout<<k;
    //     }
        
    //     for(int z=i;z>0;z--){
    //         cout<<z;
    //     }
    //     cout<<endl;
    // }



    // int m=4;
    // // cin>>m;
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<m-i-1;j++){
    //         cout<<" ";
    //     }
    //     cout<<"*";
    //     if(i!=0){
    //     for(int j=0;j<2*i-1;j++){
    //         cout<<" ";
    //     }
        
    //         cout<<"*";
    //     }
    //     cout<<endl;

    // }
    // for(int i=0;i<m-1;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<" ";
    //     }
    //     cout<<"*";
    //     if(i!=m-2){
    //         for(int j=0;j<2*(m-i)-5;j++){
    //             cout<<" ";
    //         }
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }




    // int n=5,m;
    // int ans=0;
    // vector<int> v(n);
    // for(int i=0;i<n;i++){
    //     cin>>m;
    //     v.push_back(m);
    // }
    // for(int i:v){
    //     ans=ans^i;
    // }
    // cout<<ans;

    int nums[]={1,2,2,1,1};
    int freq=0,ans=nums[0];
    for(int i=1;i<5;i++){
        if(nums[i]==nums[i-1]){
            freq++;
        }
        else{
            freq=1;
            ans=nums[i];
        }
        if(freq>5/2){
            cout<<ans;
        }
    }
    
}