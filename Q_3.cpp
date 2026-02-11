#include<iostream>
using namespace std;
void findminmax(int arr[],int size,int &minv,int &maxv){
    for(int i=0;i<size;i++){
        if(arr[i]>maxv){
            maxv=arr[i];
        }

    }
    minv=maxv;
    for(int i=0;i<size;i++){
        if(arr[i]<minv){
            minv=arr[i];
        }

    }
    cout<<"maximum value is :"<<maxv<<endl;
    cout<<"minimum value is :"<<minv<<endl;
}
int main(){
    int max=0;
    int min=0;
    int n;
    cout<<"enter number of elements in array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter elements:";
        cin>>arr[i];
    }
    findminmax(arr,n,max,min);
    return 0;
}