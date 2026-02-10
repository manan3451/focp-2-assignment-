#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter number:";
    cin>>number;
    int a=1;
    for(int i=2;i<number;i++){
    if(number%i==0){
        a=0;
        break;
    }
}
if(a==0){
    cout<<"not a prime number";
}
else{
    cout<<"prime number";
}
    return 0;
}