#include<iostream>
using namespace std;
int fib(int n){
    int a,b;
for(int i=1;i<=n;i++){
        int nextNum=a+b;
        cout<<" "<<nextNum;
        a=b;
        b=nextNum;
    }
}
int main(){
    int n;
    cin>>n;
    fib(n);
    
    return 0;
}