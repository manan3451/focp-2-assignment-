#include<iostream>
using namespace std;
int main(){
    float a,b;
    cin>>a>>b;
    char op;
    cout<<"enter operation:";
    cin>>op;
    if(op=='+'){
        cout<<"sum:"<<a+b<<endl;
    }
    else if(op=='-'){
        cout<<"sub is :"<<a-b<<endl;
    }
    else if(op=='*'){
        cout<<"multiplication is:"<<a*b<<endl;
    }
    else if(op=='/'){
        cout<<"division is:"<<a/b;
    }
    return 0;
}