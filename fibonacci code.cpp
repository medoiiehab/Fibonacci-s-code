#include <iostream>
#include <cmath>
#include <string>

using namespace std;
//made by mohammed ehab 
/*my github : https://github.com/ME2Ehab */
//just the idea of the code and how to break it into programming code, didn't take long but I felt like alan turing breaking the enigma.
int main() {
int range, first = 0,second = 1, fibonacci;

    cout << "enter the range of fibonacci code : ";cin >> range;
    cout << "the fibonacci code is up to " << range << ". "<< endl;

        for (int i = 0; i < range; i++)
        {
        fibonacci = first + second; first = second; second = fibonacci;
        cout << fibonacci << "." << endl;   
        }
}