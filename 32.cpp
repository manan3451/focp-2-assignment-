#include<iostream>
using namespace std;
int main(){
    int array[5];
    int max=0;
    int smax=0;

    for(int i=0;i<5;i++){
        cout<<"enter elements:";
        cin>>array[i];
        
        if(array[i]>max){
            smax=max;
            max=array[i];
        }
        else if(array[i]>smax && array[i]!=max){
            smax=array[i];
        }
    }
    cout<<"largest is:"<<max<<endl;
    cout<<"second largest is:"<<smax;
    return 0;
}
