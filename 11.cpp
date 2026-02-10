#include<iostream>
using namespace std;
int main(){
    float expense,dis;
    float totalexpense;
    int items;
    cout<<"enter number of items:";
    cin>>items;
    cout<<"enter expense:";
    cin>>expense;
    
    if(items>1000){
        dis=0.10*expense;
        totalexpense=expense-dis;
    }
    else{
        totalexpense=expense;
    }
    cout<<"total expense is :"<<totalexpense;
return 0;
}