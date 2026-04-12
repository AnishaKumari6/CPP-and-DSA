#include<iostream>
using namespace std;
int repeat(int n){
    if(n<=0){
        return 0;
    }
    cout<<"Anisha Kumari"<<endl;
    return repeat(n-1);
}
int main(){
    int n;
    cin>>n;
    repeat(n);
    return 0;
}