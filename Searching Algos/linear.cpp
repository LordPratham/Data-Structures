#include <iostream>
using namespace std;

void linearSearch(int arr[],int size,int element){
    bool found=0;
    for(int i =0;i<size;i++){
        if (arr[i]==element){
            cout<<"Found at index : "<<i<<endl;
            found=1;
            break;
        }
    }
    if (!found){
        cout<<"Not Found!"<<endl;
    }
}

int main()
{
    int arr[6]={3,1,51,14,5,4},n=6;
    linearSearch(arr,n,3);
    cout<<'\n';
    return 0;
}