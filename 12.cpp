#include<iostream>
using namespace std;
int main(){
    int side1,side2,side3;
    cout<<"first side:";
    cin>>side1;
    cout<<"second side:";
    cin>>side2;
    cout<<"third side:";
    cin>>side3;
    if(side1+side2<=side3){
        cout<<"invalid dimensions entered";
    }
    else if(side1==side2 && side2==side3){
        cout<<"equilateral triangle";
    }
    else if(side1==side2 || side2 ==side3){
        cout<<"isosceles triangle";
    }
    else{
        cout<<"scalene triange";
    }
    return 0;
}