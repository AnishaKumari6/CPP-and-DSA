#include <iostream>
using namespace std;
int main(){
    int arr[]={9,3,5,6};
    int*ptr=arr;
    // cout<<*ptr<<endl;
    // cout<<*ptr+1<<endl;
    // cout<<*(ptr+2)<<endl;
    // cout<<*(ptr+3)<<endl;
    *ptr++;
    cout<<*ptr<<"\n";


}