#include<iostream>
using namespace std;
int main(){
    int a,b;
    char ch;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter operation: ";
    cin>>ch;
    cout<<"Enter b: ";
    cin>>b;
    
    switch(ch){
        case '+':cout<<"Your answer is: "<<(a+b)<<endl;
                break;
        case '-':cout<<"Your answer is: "<<(a-b)<<endl;
                break;
        case '*':cout<<"Your answer is: "<<(a*b)<<endl;
                break;
        case '/':cout<<"Your answer is: "<<(a/b)<<endl;
                break;
        case '%':cout<<"Your answer is: "<<(a%b)<<endl;
                break;
        default:cout<<"Enter valid operation"<<endl;                                
        
    }
    
    return 0;
}