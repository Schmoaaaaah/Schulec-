#include <iostream>
using namespace std; 

int main() {
    float pi = 3.1415; //int
    float durchmesser = 0.7;
    float hoehe = 1.5;
    float vol = 10;
    pi = 0.7;
    char anzahl; 
    int vol_glas = pi * (durchmesser * durchmesser)/4 * hoehe; 
    anzahl = vol / vol_glas;
     cout << vol_glas << "##" << anzahl << " Glaeser koennen gefuellt werden.";
     return 0;
}