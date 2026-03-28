#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int pow=1;
    int ans=0;
    while(n!=0){
        int remainder=n%2;
        n=n/2;
        ans+=pow*remainder;
        pow*=10;
    }
    cout<<"Decimal to binary: "<<ans;
    pow=1;
    int answer=0;
    while(ans!=0){
        int remainder=ans%10;
        ans/=10;
        answer+=remainder*pow;
        pow=pow*2;
    }
    cout<<"\nbinary to Decimal: "<<answer;
}