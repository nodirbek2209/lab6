// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <array>
int min(int a,int b){
    if(a>b){
        return b;
    }else{
        return a;
    }
}
void sort1(int (&arr)[],int size){
    int key,j;
    for(int i=1;i<size;i++){
        key=arr[i];
        j=i-1;
        while(j>=0&& arr[j]<key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}

    
    
    

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        arr[i]=element;
    }
    sort1(arr,n);
    int summ=0;
    for(int i=0;i<n;i=i+2){
        summ+=min(arr[i],arr[i+1]);
        
        
    }
    cout<<summ;
    
    
    
    

    return 0;
}
