#include <iostream>
using namespace std;
int main(){
    float itemno,amount,final;
    float quantity,unitp,dis;

    cout<<"enter itemno:";
    cin>>itemno;
    cout<<"enter quantity:";
    cin>>quantity;
    cout<<"enter unitprice:";
    cin>>unitp;

    amount=quantity * unitp;

    dis=0.20*amount;

    final=amount - dis;

    cout<<"bill is:"<<final;

    return 0;
}



    
