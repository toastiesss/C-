#include <iostream>
#include <vector>
using namespace std;

int main() {

vector <int> vect; // initializiation - - - - -  vector <datatype> name;

// parameters --- > (number of elements, element assigned)
vect.assign(4, 2);

cout << "Elements inside the vector: ";

for (int i = 0; i < vect.size(); i++) // pwede ring for (auto shit : vect)
    cout << vect[i] << " ";     // cout << shit;

cout << endl; 

// vector manipulation below:

vect.assign(5, 3);

cout << "Elements inside the vector: ";

for (int i = 0; i < vect.size(); i++) 
    cout << vect[i] << " ";     

    return 0;
}