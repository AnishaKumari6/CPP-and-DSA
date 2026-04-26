#include <iostream>
using namespace std;
int main(){
    int arr[]={9,3,5,6};
    int*ptr=arr;
    cout<<*ptr<<endl;
    cout<<*ptr+1<<endl;
    cout<<*(ptr+2)<<endl;
    cout<<*(ptr+3)<<endl;
    cout<<ptr[0]<<endl;
    *ptr+=3; //agar ptr +=3 likhenge to ptr 3 position aage chala jayega lekin agr *ptr+=3 likhenge to ptr ke value me 3 add ho jayega

    cout<<*ptr<<"\n";


}