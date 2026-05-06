#include <iostream>
#include <map>
#include <string>
using namespace std;

class Bank {
    map<string, long long> accounts; 

public:
      bool CREATE(string X, long long Y) {
        if (accounts.count(X) == 0) {
            accounts[X] = Y;   
            return true;      
        } else {
            accounts[X] += Y; 
            return false;         
        }
    }

    bool DEBIT(string X, long long Y) {
        if (accounts.count(X) == 0) return false;  
        if (accounts[X] < Y) return false;         
        accounts[X] -= Y;                       
        return true;                               
         }

    bool CREDIT(string X, long long Y) {
        if (accounts.count(X) == 0) return false;   
        accounts[X] += Y;                      
        return true;                               
    }

    long long BALANCE(string X) {
        if (accounts.count(X) == 0) return -1;  
        return accounts[X];                     
    }
};

int main() {
    int Q;
    cin >> Q;
    Bank bank;

    while (Q--) {
        string type, X;
        long long Y;
        cin >> type;

        if (type == "CREATE") {
            cin >> X >> Y;
            cout << bank.CREATE(X, Y) << endl;
        }
        else if (type == "DEBIT") {
            cin >> X >> Y;
            cout << bank.DEBIT(X, Y) << endl;
        }
        else if (type == "CREDIT") {
            cin >> X >> Y;
            cout << bank.CREDIT(X, Y) << endl;
        }
        else if (type == "BALANCE") {
            cin >> X;
            cout << bank.BALANCE(X) << endl;
        }
    }
    return 0;
}
