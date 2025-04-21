

#include <iostream>
using namespace std;

int main() {
    string name;
    int age;

    // Asking for user's name
    cout << "Enter your name: ";
    cin >> name;

    // Asking for user's age
    cout << "Enter your age: ";
    cin >> age;

    // Displaying the information
    cout << "Hello, " << name << "! You are " << age << " years old." << endl;

    return 0;
}
