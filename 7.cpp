#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"score of a:";
    cin>>a;
    cout<<"score of b:";
    cin>>b;
    cout<<"score of c:";
    cin>>c;
    if(a>b && a>c){
        cout<<"a is winner";
    }
        else if(b>c && b>a){
            cout<<"b is winner";
        }
        else {
            cout<<"c is winner";
        }
        return 0;
    }
