#include<iostream>
using namespace std;
// int mystery(int n){
//     if(n<0)
//     return 0;
//     return n + mystery(n-1);

// }
// int main(){
//     cout<<mystery(5);
//     return 0;
// }

// void counter(){
//     static int c=0;
//     c++;
//     cout<<c<<" ";
// }
// int main(){
//     for (int i=0;i<4;i++)
//     counter();
//     return 0;
// }

int compute(int a, double b){
    return a + b;

}
double compute (double a,double b){
    return a+b;
}
int main(){
    cout<<compute(10,10);

}

