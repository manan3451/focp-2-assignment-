#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of enteries:";
    cin>>n;
    int max=0;
    int a;
    for(int i=0;i<n;i++){
        cout<<"enter sales:";
        cin>>a;
        
        if(a>max){
           max=a;
        }
    }
    cout<<"largest sale is:"<<max<<endl;

    return 0;
}