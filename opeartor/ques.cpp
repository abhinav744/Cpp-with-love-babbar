// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=0;i<=15;i+=2){
//         cout<<i<<" "<<endl;
//         if(i&1){
//             continue;
//         }
//         i++;
//     }
    
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i+j==10){
                break;
            }
            cout<<i<<" "<<j<<endl;
        }
    }
    return 0;
}