#include <iostream>
using namespace std;

bool uniqueOccurrences(int arr[],int size) {
        int n=size;
        int sizeArr[1000]={0};
        for (int i=0;i<n;i++){
            if(arr[i]==INT_MIN){
                    continue;
                }
            for(int j=0;j<n;j++){
                // if(arr[j]==INT_MIN){
                //     continue;
                // }
                if(arr[i]==arr[j]){
                    arr[j]=INT_MIN;
                    sizeArr[i]+=1;
                }
            }
        }
        for(int i=0;i<n;i++){
            if (sizeArr[i]==0){
                continue;
            }
            for (int j=i+1;j<n;j++){
                if (sizeArr[j]==0){
                continue;
            }
                if (sizeArr[i]==sizeArr[j]){
                    return false;
                }

            }
        }
        return true;
        
    }

int main()
{
    int arr[]={1,2,2,1,1,3};
    bool a;
    a=uniqueOccurrences(arr,6);
    cout<<a;
    cout<<'\n';
    return 0;
}