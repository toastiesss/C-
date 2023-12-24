#include <iostream>
#include <vector>
using namespace std;

int main() {

vector <int> vect = {2, 4, 6, 8, 10};
vector <int> vect2 = {1, 3, 5, 7};

cout << "Elements inside the vector 1: ";
for (auto i = vect.begin(); i < vect.end(); i++) // uses different iterator
    cout << *i << " "; // uses pointer   

cout << "\nElements inside the vector 2: ";
for (auto i = vect2.begin(); i < vect2.end(); i++)  
    cout << *i << " ";

cout << endl;

cout << "\nElements inside the vector 1: ";
for (auto i = vect.rbegin(); i < vect.rend(); i++) // reverse
    cout << *i << " ";   

cout << "\nElements inside the vector 2: ";
for (auto i = vect2.rbegin(); i < vect2.rend(); i++)  
    cout << *i << " ";

// ^^^ nagprint lng hindi naapektuhan yung laman mismo ng vector

cout << endl;

vect.resize(4); // resizes the capacity of the vector
vect2.resize(3);

cout << endl;

cout << "Elements inside the vector 1: ";
for (int i = 0; i < vect.size(); i++) // size of vector is 4, removes 10
    cout << vect.at(i) << " ";  // at.i same lng sa [i] 

cout << "\nElements inside the vector 2: ";
for (int i = 0; i < vect2.size(); i++)  // size of vector is 3, removes 7
    cout << vect2[i] << " ";

/*When you resize a vector to a larger size than its current size, the new elements 
are default-initialized. The behavior of default initialization depends on the type
of elements in the vector. For int vectors, default initialization sets the new 
elements to 0. For string vectors, default initialization constructs default-constructed
strings, which, in the case of strings, means empty strings.*/

    return 0;
}