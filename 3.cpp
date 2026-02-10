#include <iostream>
using namespace std;
int main(){
    float c,f;
    cout<<"enter temperature in fahrenheit:";
    cin>>f;
    c = (f-32.0) * 5.0/9.0;

    cout<<"temperature in celsius is :"<<c;
    
return 0;
}
