#include <iostream>
#include <vector>
using namespace std;

int main() {

vector <int> vect = {2, 4, 6, 8, 10};
vector <int> vect2 = {1, 3, 5, 7};

cout << "Elements inside the vector 1: ";
for (int i = 0; i < vect.size(); i++) 
    cout << vect[i] << " ";   

cout << "\nElements inside the vector 2: ";
for (int i = 0; i < vect2.size(); i++) 
    cout << vect2[i] << " ";

vect.swap(vect2); // swaps values of vector 1 and vector 2
cout << endl;

cout << "\nElements inside the vector 1: ";
for (int i = 0; i < vect.size(); i++) 
    cout << vect[i] << " ";   

cout << "\nElements inside the vector 2: ";
for (int i = 0; i < vect2.size(); i++) 
    cout << vect2[i] << " ";

vect.clear(); // clears the elements in vector vect
cout << endl << endl;

cout << "Elements inside the vector 1: ";
for (int i = 0; i < vect.size(); i++) 
    cout << vect[i] << " ";   

cout << "\nElements inside the vector 2: ";
for (int i = 0; i < vect2.size(); i++) 
    cout << vect2[i] << " ";

    return 0;
}