#include<iostream>
using namespace std;
bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[8]={1,2,3,4,5,6,66,4};
    cout<<"Enter key: ";
    int key;
    cin>>key;
    bool found=search(arr,8,key);
    if(found){
        cout<<"Key is present ";
    }
    else{
        cout<<"Key is absent";
    }
    return 0;
}