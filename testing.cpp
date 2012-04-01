#include <iostream>

using namespace std;

// Used for input of two names
char firstName[30];
char lastName[30];
char askFirstName[] = "First name: ";
char askLastName[] = "Last name: ";

// Used for adding together the two names
string namesTogether;

int main() {
//	Input first name
    cout << askFirstName;
	cin >> firstName;
//  Input last name
    cout << askLastName;
	cin >> lastName;

//	Combine the first and last name together
    namesTogether = firstName;
	namesTogether += lastName;

//	Display resulting string
    cout << namesTogether << "\n";

    return 0;
}
