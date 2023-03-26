#include <iostream>
using namespace std;

void swapAlternate(int arr[],int n){
    int first=0,second=first+1;
    while(second<=n-1){
        swap(arr[first],arr[second]);
        first+=2;
        second=first+1;
    }
}
void printArr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}

int main()
{
    int arr[8]={1,2,3,4,5,6,7,8},n=8;
    swapAlternate(arr,n);
    printArr(arr,n);
    cout<<'\n';
    return 0;
}