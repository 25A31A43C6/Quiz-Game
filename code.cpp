#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> questions = {
        "What is the capital of India?",
        "Which language is used for system programming?",
        "What is 5 + 3?",
        "Who developed C++?"
    };

    vector<string> options[4] = {
        {"1. Mumbai", "2. Delhi", "3. Kolkata", "4. Chennai"},
        {"1. Python", "2. C++", "3. HTML", "4. SQL"},
        {"1. 5", "2. 8", "3. 10", "4. 7"},
        {"1. Dennis Ritchie", "2. Bjarne Stroustrup", "3. James Gosling", "4. Guido van Rossum"}
    };

    int answers[] = {2, 2, 2, 2};
    int score = 0;
    int choice;

    for (int i = 0; i < 4; i++) {
        cout << questions[i] << endl;

        for (int j = 0; j < 4; j++) {
            cout << options[i][j] << endl;
        }

        cout << "Enter your answer: ";
        cin >> choice;

        if (choice == answers[i]) {
            score++;
        }

        cout << endl;
    }

    cout << "Your score is: " << score << "/4" << endl;

    return 0;
}