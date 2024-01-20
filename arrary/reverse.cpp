#include<iostream>
using namespace std;
void reverse(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main(){
    int arr[5]={1,23,4,5,6};
    int brr[4]={2,33,43,77};
    reverse(arr,5);
    reverse(brr,4);
    printArray(arr,5);
    printArray(brr,4);
    return 0;
}