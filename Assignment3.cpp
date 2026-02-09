#include <iostream>
#include <string>
using namespace std;

int main() {
    string instructorName, yourName, food, adjective, color, animal;
    int number;

    cout << "Enter instructor name: ";
    getline(cin, instructorName);

    cout << "Enter your name: ";
    getline(cin, yourName);

    cout << "Enter a food: ";
    getline(cin, food);

    cout << "Enter a number between 100 and 120: ";
    cin >> number;
    cin.ignore();

    cout << "Enter an adjective: ";
    getline(cin, adjective);

    cout << "Enter a color: ";
    getline(cin, color);

    cout << "Enter an animal: ";
    getline(cin, animal);

    cout << "\nDear Instructor " << instructorName << ",\n\n";
    cout << "I am sorry that I am unable to turn in my homework at this time. ";
    cout << "First, I ate a rotten " << food << ", which made me turn " << color;
    cout << " and extremely ill. I came down with a fever of " << number << ". ";
    cout << "Next, my " << adjective << " pet " << animal;
    cout << " must have smelled the remains of the " << food;
    cout << " on my homework, because he ate it.\n\n";
    cout << "I am currently rewriting my homework and hope you will accept it late.\n\n";
    cout << "Sincerely,\n\n" << yourName << endl;

    return 0;
}/* create the code yourself */
