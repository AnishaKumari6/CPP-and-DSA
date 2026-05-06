#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[6] = {3, 1, 5, 6, 2, 4};
    // for (int i = 1; i < 6; i++)
    // {   
    //     // Bubble sort
    //     bool swap = false;
    //     for (int j = 0; j < 6-1; j++)
    //     {
    //         if (arr[i] < arr[j])
    //         {
    //             swap = true;
    //             int temp = arr[j];
    //             arr[j] = arr[i];
    //             arr[i] = temp;
    //         }
    //     }
    //     if (!swap)
    //     {
    //         break;
    //     }
    // }
    // for (int i = 0; i < 6; i++)
    // {
    //     cout << arr[i] << "  ";
    // }

    // selection sort
    for(int i=0;i<6;i++){
        int small=i;
        for(int j=i+1;j<6;j++){
            if(arr[j]<=arr[small]){
                small=j;
            }
        }
        swap(arr[i],arr[small]);
    }
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}