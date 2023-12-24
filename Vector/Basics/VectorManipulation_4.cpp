#include <iostream>
#include <vector>
using namespace std;

int main() {

vector <int> vect = {2, 4, 6, 8, 10};

vect.push_back(12);

cout << "Elements inside the vector: ";
for (int i = 0; i < vect.size(); i++) 
    cout << vect[i] << " ";   

vect.erase(vect.begin()); // deletes element at the begining
cout << "\nElements inside the vector: ";
for (int i = 0; i < vect.size(); i++) 
    cout << vect[i] << " ";

vect.erase(vect.begin() + 2); // deletes element at index 2
cout << "\nElements inside the vector: ";
for (int i = 0; i < vect.size(); i++) 
    cout << vect[i] << " ";

vect.erase(vect.begin(), vect.begin() + 2); // deletes element from the begining to index 1
cout << "\nElements inside the vector: ";
for (int i = 0; i < vect.size(); i++) 
    cout << vect[i] << " ";

    return 0;
}