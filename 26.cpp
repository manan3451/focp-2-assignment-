#include<iostream>
using namespace std;
int main(){
    int total=0;
    float percentage;
    int array[5];
    for(int i=0;i<5;i++){
        cout<<"enter marks:";
        cin>>array[i];
        total+=array[i];
    }
    cout<<array;
    cout<<"total is:"<<total<<endl;
    percentage=total/5.0;
    cout<<"percentage is :"<<percentage;
    return 0;
}