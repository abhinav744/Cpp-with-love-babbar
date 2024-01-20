#include<iostream>
using namespace std;
 void update(int arr[],int n){
        cout<<"Inside function"<<endl;
        arr[0]=11;
        for(int i=0;i<3;i++){
            cout<<arr[i]<<" ";
        }
        cout<<"Going back to function"<<endl;
    }
int main(){
    int arr[3]={1,2,3};
    update(arr,3);
    cout<<"Printing in main"<<endl;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}