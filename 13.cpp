#include<iostream>
using namespace std;
int main(){
    float a,b,c;
    float root1,root2;
    float real,imag;
    cin>>a;
    cin>>b;
    cin>>c;
    float d=(b*b)-(4*a*c);
    if(d>0){
    root1=(-b+sqrt(d))/(2*a);
    root2=(-b-sqrt(d))/(2*a);
    cout<<"roots are :"<<root1<<"and"<<root2;
    }
    else if(d==0){
        root1= -b/(2*a);
        root2= -b/(2*a);
        cout<<"roots are :"<<root1<<"and"<<root2;
    }
    else{
        real=-b/(2*a);
        imag=sqrt(-d)/(2*a);
        cout<<"root1 is "<<real<<"+"<<imag<<"i"<<endl;
        cout<<"root2 is "<<real<<"-"<<imag<<"i"<<endl;

    }
    return 0;

}