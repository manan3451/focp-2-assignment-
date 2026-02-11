#include <iostream>
using namespace std;
void swapbyvalue(int a,int b){
    int temp=a;
    a=b;
    b=temp;
    cout<<"swapped elements are:"<<a<<" "<<b<<endl;
}
void swapbyref(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
    cout<<"swapped elements are:"<<a<<" "<<b<<endl;
}

int main(){
    int x,y;
    cout<<"enter values of x and y:";
    cin>>x>>y;
    swapbyvalue(x,y);
    swapbyref(x,y);
    return 0;
}