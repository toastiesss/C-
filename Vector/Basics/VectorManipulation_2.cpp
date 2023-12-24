#include <iostream>
#include <vector>
using namespace std;

int main() {

vector <int> vect; 

vect.assign(4, 2);

cout << "Elements inside the vector: ";
for (int i = 0; i < vect.size(); i++) 
    cout << vect[i] << " ";   

vect.push_back(11); // push back 11

cout << endl;

cout << "Elements after the push_back: ";
for (int shit : vect)
    cout << shit << " ";

cout << endl; 

vect.push_back(11); 
vect.push_back(22);
vect.push_back(33);
vect.push_back(44);
vect.push_back(55); // push back 11 22 33 44 55

cout << "Elements after the 2nd push_back: ";
for (int shit : vect)
    cout << shit << " ";

cout << endl; 

vect.pop_back(); // deletes 55

cout << "Elements after the pop_back: ";
for (int shit : vect)
    cout << shit << " ";

    return 0;
}