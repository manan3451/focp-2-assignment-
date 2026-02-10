#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter numbers:";
    cin>>a>>b;
    cout<<"before swap a is :"<<a<<" and b is "<<b<<endl;

    c=a;
    a=b;
    b=c;

    cout<<"after swap a is :"<<a<<" and b is "<<b;


    return 0;
}