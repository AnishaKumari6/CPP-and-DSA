#include<iostream>
#include<unordered_map>
using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[5]={2,2,3,4,4};
//     int hash[13]={0};
//     for(int i=0;i<5;i++){
//         hash[arr[i]]+=1;
//     }
//     cout<<hash[n];
// }
int main(){
    string str;
    cin>>str;
    char *arr=new char[str.length()];
    unordered_map<char,int>map;
    for(int i=0;i<str.length();i++){
        arr[i]=str[i];
        map[arr[i]]+=1;
    }
    for(auto it:map){
        cout<<it.first<<" "<<it.second<<endl;
    }
    delete[] arr;

}