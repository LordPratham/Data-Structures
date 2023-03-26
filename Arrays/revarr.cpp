#include <iostream>
using namespace std;

void printArr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}

void rev(int arr[],int size){
    int temp;
    for(int i=0;i<size/2;i++){
        temp=arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=temp;

    }

}
int main()
{
    int arr[6]={2,4,1,5,6,3},size=6;
    printArr(arr,size);
    rev(arr,size);
    printArr(arr,size);
    
    cout<<'\n';
    return 0;
}