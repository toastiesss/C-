#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> strings;
    int numStrings;

    cout << "Enter the number of strings: ";
    cin >> numStrings;

    cin.ignore(); // Clear the newline character from the buffer

    for (int i = 0; i < numStrings; ++i) {
        string userInput;
        cout << "Enter string " << i + 1 << ": ";
        getline(cin, userInput);
        strings.push_back(userInput);
    }

    string substring;
    cout << "Enter the substring to search for: ";
    cin >> substring;

    for (const auto& str : strings) {
        size_t position = str.find(substring);

        if (position != string::npos) {
            cout << "Substring found in string: " << str << " at position: " << position << endl;
        } else {
            cout << "Substring not found in string: " << str << endl;
        }
    }

    return 0;
}
