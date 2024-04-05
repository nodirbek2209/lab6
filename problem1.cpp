// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <array>

void sort1(int (&arr)[],int size){
    int j,key;
    for(int i=3;i<size;i=i+2){
        key=arr[i];
        j=i-2;
        while(j>=0 && arr[j]>key){
            arr[j+2]=arr[j];
            j=j-2;
        }
        arr[j+2]=key;
    }
}
void sort2(int (&arr)[],int size){
    int j,key;
    for(int i=2;i<size;i=i+2){
        key=arr[i];
        j=i-2;
        while(j>=0 && arr[j]<key){
            arr[j+2]=arr[j];
            j=j-2;
        }
        arr[j+2]=key;
    }
    
}
    
    
    

int main() {
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        int element;
        cin>>element;
        arr[i]=element;
    }
    sort1(arr,size);
    sort2(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
    
    

    return 0;
}
