#include<iostream>
using namespace std;
bool isEven(int a){
    if(a&1){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    int num;
    cin>>num;
    if(isEven(num)){
        cout<<"Even"<<endl;
    }
    else{
        cout<<"Odd"<<endl;
    }
    
    
    return 0;
}