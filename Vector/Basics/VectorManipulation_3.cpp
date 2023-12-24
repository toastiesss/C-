#include <iostream>
#include <vector>
using namespace std;

int main() {

vector <int> vect = {2, 4, 6, 8, 10};

vect.push_back(12);

cout << "Elements inside the vector: ";
for (int i = 0; i < vect.size(); i++) 
    cout << vect[i] << " ";   

// parameter ---> (position, element)
vect.insert(vect.begin(), 99); // insert 99 from the begining. 

cout << "\nElements inside the vector: ";
for (int i = 0; i < vect.size(); i++) 
    cout << vect[i] << " ";

vect.insert(vect.begin() + 3, 101); // insert 101 after element 4

cout << "\nElements inside the vector: ";
for (int i = 0; i < vect.size(); i++) 
    cout << vect[i] << " ";

// range insert (position, count, element)
vect.insert(vect.end(), 2, 143); // insert 143 two times at the end

cout << "\nElements inside the vector: ";
for (int i = 0; i < vect.size(); i++) 
    cout << vect[i] << " ";

    return 0;
}