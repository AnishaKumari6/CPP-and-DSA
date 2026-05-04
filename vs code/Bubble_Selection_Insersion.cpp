#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[6]={3,1,5,6,2,4};
    for(int i=0;i<6;i++){
        bool swap=false;
        for(int j=i+1;j<6-i-1;j++){
            if(arr[i]>arr[j]){
                swap=true;
            int temp=arr[i];
            arr[i]=arr[j+1];
            arr[j+1]=temp;
            }
        }
        if(!swap){
            break;
        }
    }
    for(int i=0;i<6;i++){
        cout<<arr[i]<<"  ";
    }
    
}