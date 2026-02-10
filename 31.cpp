#include<iostream>
using namespace std;
int main(){
    int array[5];
    int count=0;
    for(int i=0;i<5;i++){
        cout<<"enter elements:";
        cin>>array[i];
        if(array[i]%3==0 && array[i]%5==0){
            count++;
        }
    }
    cout<<"numbers divisible by 3 and 5 are:"<<count;
    return 0;
}

