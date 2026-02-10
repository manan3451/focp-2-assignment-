#include<iostream>
using namespace std;
int main(){
    int ids;
    int n;
    cout<<"enter number of events:";
    cin>>n;
    
    for(int i=0;i<n;i++){
        cout<<"enter IDs:";
    cin>>ids;
    if(ids%3==0 && ids%5==0){
            cout<<"Buzz Fuzz"<<endl;
            break;
        }
    if(ids%5==0){
            cout<<"Fuzz"<<endl;
        }
        else if(ids%3==0){
        cout<<"Buzz"<<endl;
    }}
        return 0;
    }
