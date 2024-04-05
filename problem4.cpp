// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <array>
#include <cmath>
#include <vector>
void sort1(int (&arr)[],int size){
    int key,j;
    for(int i=1;i<size;i++){
        key=arr[i];
        j=i-1;
        while(j>=0&& arr[j]>key){
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
    vector<int> out;
    sort1(arr,n);
    int dif=abs(arr[1]-arr[0]);
    for(int j=0;j<n-1;j++){
        if (dif==abs(arr[j+1]-arr[j])){
            out.push_back(arr[j]);
            out.push_back(arr[j+1]);
        }
        if (dif>abs(arr[j+1]-arr[j])){
            dif=abs(arr[j+1]-arr[j]);
            out.clear();
            out.push_back(arr[j]);
            out.push_back(arr[j+1]);
            
        }
        
    }
    for(int i=0;i<out.size();i=i+2){
        cout<<out[i]<<" "<<out[i+1]<<endl;
    }
    
    
    
        
        
    
    
    
    
    

    return 0;
}
