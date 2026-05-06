#include <iostream>
#include <vector>    
#include <string>
#include <cstdlib>   
#include <ctime>    

using namespace std;


class RoastGenerator {
public:
    void generateRoast(string name) {
        // Vector of roast templates
        vector<string> roasts = {
            "{name} writes code so slow that even a turtle switched to Python.",
            "If procrastination were an Olympic sport, {name} would already have a gold medal.",
            "{name}'s debugging style is basically staring at the screen until the bug gets embarrassed and leaves.",
            "{name}'s code runs so slowly that even dial-up internet feels fast.",
            "If laziness had a brand ambassador, it would be {name}.",
            "{name} doesn’t debug code — they negotiate with bugs.",
            "{name} thinks semicolons are optional… until the compiler disagrees.",
            "Even copy-paste feels tired when {name} is coding.",
            "{name} once tried to fix a bug and created three new ones.",
            "If Stack Overflow had a VIP section, {name} would live there."
        };

        
        int index = rand() % roasts.size();
        string roast = roasts[index];

       
        size_t pos = roast.find("{name}");
        while (pos != string::npos) {
            roast.replace(pos, 6, name);
            pos = roast.find("{name}", pos + name.length());
        }

        // Show the roast
        cout << endl << "🔥 Roast: " << roast << endl;
    }
};

int main() {
  
    srand(time(0));

    string userName;
    cout << "Enter your name: ";
    getline(cin, userName); // allows full name input


    if (userName.empty()) {
        cout << "Name cannot be empty. Please run again!" << endl;
        return 0;
    }

    
    RoastGenerator rg;
    rg.generateRoast(userName);

    return 0;
}
