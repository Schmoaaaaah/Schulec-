#include <iostream>

using namespace std;

int test(string ausgabe) {
    cout << (ausgabe + "\n");
    return 0;
}

int main() {
    for (int i = 0; i < 10; i++) {
        int result = test(string(i));
        if (result == 0) {
            cout << "Test worked\n";
        } else {
            cout << "something went wrong\n";
        }
    }
    return 0;
}