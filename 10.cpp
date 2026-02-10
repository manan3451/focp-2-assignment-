#include<iostream>
using namespace std;
int main(){
    int year;
    
    for(int i=0;;i++){
        cout<<"enter year:";
        cin>>year;
    if(year==0){
        cout<<"end of program";
        break;
    }
    else if(year%4==0){
        cout<<"leap year"<<endl;
    }
    else{
        cout<<"not a leap year"<<endl;
        
    }}
    return 0;
}