#include<iostream>
using namespace std;
int main(){
    int empno;
    float bonus,netsalary,basicsalary;
    
    cout<<"enter number of employees:";
    cin>>empno;

    for(int i=1;i<=empno;i++){
        cout<<"employee number:"<<i;
        cout<<"Enter basic salary:";
        cin>>basicsalary;
        bonus=0.12*basicsalary;
        netsalary=basicsalary+bonus;
        cout<<"net salary is :"<<netsalary;

    }
    return 0;
}