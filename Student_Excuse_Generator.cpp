#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// Removes extra spaces from the start and end of a string.
string trimSpaces(const string& text) {
    size_t start = text.find_first_not_of(" \t\n\r");
    if (start == string::npos) {
        return "";
    }

    size_t end = text.find_last_not_of(" \t\n\r");
    return text.substr(start, end - start + 1);
}

// Replaces all {name} placeholders with the student's name.
string replaceNameInTemplate(string templateText, const string& studentName) {
    string placeholder = "{name}";
    size_t position = templateText.find(placeholder);

    while (position != string::npos) {
        templateText.replace(position, placeholder.length(), studentName);
        position = templateText.find(placeholder, position + studentName.length());
    }

    return templateText;
}

int main() {
    // Seed random generator so output differs on each run.
    srand(static_cast<unsigned int>(time(0)));

    // Creative excuse templates with {name} placeholder.
    vector<string> excuseTemplates = {
        "{name} tried to submit homework, but the Wi-Fi took a personal day.",
        "{name}'s laptop updated itself right before deadline and forgot everything.",
        "A power cut turned {name}'s assignment into digital smoke.",
        "{name} finished the work, but the file is currently lost in the cloud.",
        "{name}'s keyboard decided the spacebar was optional today.",
        "The family cat sat on Enter, and {name}'s code vanished mysteriously.",
        "{name} was ready to submit, but the portal took longer than a snail marathon.",
        "{name}'s notes were perfect, until coffee performed a dramatic plot twist.",
        "A surprise relative visit turned {name}'s study plan into crowd management.",
        "{name} solved everything on paper, then forgot the paper at home.",
        "{name} practiced too hard for viva and accidentally slept through submission time.",
        "{name} pressed Save... just not on the correct file."
    };

    cout << "==========================================" << endl;
    cout << "   Welcome to Student Excuse Generator!  " << endl;
    cout << "==========================================" << endl;
    cout << endl;

    // Take input and trim extra spaces.
    string studentName;
    cout << "Enter student name: ";
    getline(cin, studentName);
    studentName = trimSpaces(studentName);

    // Handle empty input with a default name.
    if (studentName.empty()) {
        studentName = "This student";
    }

    // Pick one random template and generate excuse.
    int randomIndex = rand() % excuseTemplates.size();
    string selectedTemplate = excuseTemplates[randomIndex];
    string finalExcuse = replaceNameInTemplate(selectedTemplate, studentName);

    cout << endl;
    cout << "------------------------------------------" << endl;
    cout << "Generated Excuse:" << endl;
    cout << "------------------------------------------" << endl;
    cout << finalExcuse << endl;
    cout << "------------------------------------------" << endl;

    return 0;
}
