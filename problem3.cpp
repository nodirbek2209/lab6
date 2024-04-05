// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <array>

    
    
    

int main() {
    int n;
    cin>>n;
    int arr[n];
    int key;
    int count=0;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        if(i==0){
            key=element;
            
        }
        if(element==key){
            count++;
        }else{
            count--;
        }
        if(count<0){
            key=element;
        }
        
    }
    cout<<key;
    
    
        
        
    
    
    
    
    

    return 0;
}
