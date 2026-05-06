/*Problem statement
Assume that there are 100 slots available for every movie.
Given Q queries of the following types:
• BOOK X Y
o Allow a customer with a unique ID X to book a ticket for a movie with the movie ID Y.
o If the customer has already booked a ticket for the same movie or the movie is sold out,
return false.
o Otherwise, mark the ticket as booked and return true.
• CANCEL X Y
o Allow a customer with a unique ID X to cancel a booked ticket for a movie with the movie ID
Y.
o If the customer has not booked a ticket for the movie, return false.
o Otherwise, mark the ticket as canceled and return true.
• IS_BOOKED X Y
o Check if a customer with a unique ID X has booked a ticket for the movie with the movie ID Y.
o Return true if booked; otherwise, return false.
• AVAILABLE_TICKETS Y
o Return the number of available tickets for the movie with the movie ID Y.
Class description
• MovieTicket: Represents information about the users and movies
• Public functions: Refers to the types of queries (described above) that must be implemented
Input format for custom testing
Note: Use this input format if you are testing against custom input or writing code in a language
where we don’t provide boilerplate code.
• The first line contains a single integer Q, denoting the number of elements in the array.
• Each of the next Q lines contains the query (case-sensitive for strings).
Output format
Return the result for each function method based on the query*/


#include <iostream>
#include <string>
using namespace std;

class MovieTicket {
    int available[101];         
    int booked[1001][101];     

public:
    MovieTicket() {
        for (int i = 1; i <= 100; i++) {
            available[i] = 100;
        }

        for (int c = 0; c <= 1000; c++) {
            for (int m = 0; m <= 100; m++) {
                booked[c][m] = 0;
            }
        }
    }

    bool book(int customerID, int movieID) {
        if (available[movieID] == 0 || booked[customerID][movieID] == 1) return false;
        booked[customerID][movieID] = 1;
        available[movieID]--;
        return true;
    }

    bool cancel(int customerID, int movieID) {
        if (booked[customerID][movieID] == 0) return false;
        booked[customerID][movieID] = 0;
        available[movieID]++;
        return true;
    }

    bool isbooked(int customerID, int movieID) {
        return booked[customerID][movieID] == 1;
    }

    int available_ticket(int movieID) {
        return available[movieID];
    }
};

int main() {
    int Q;
    cin >> Q;
    MovieTicket mt;

    while (Q--) {
        string type;
        int X, Y;
        cin >> type;

        if (type == "BOOK") {
            cin >> X >> Y;
            cout << mt.book(X, Y) << endl;
        }
        else if (type == "CANCEL") {
            cin >> X >> Y;
            cout << mt.cancel(X, Y) << endl;
        }
        else if (type == "IS_BOOKED") {
            cin >> X >> Y;
            cout << mt.isbooked(X, Y) << endl;
        }
        else if (type == "AVAILABLE_TICKETS") {
            cin >> Y;
            cout << mt.available_ticket(Y) << endl;
        }
    }
    return 0;
}
