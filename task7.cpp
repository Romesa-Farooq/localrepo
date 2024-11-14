#include <iostream>
using namespace std;
int main() {
    char ch;
    for (int i = 1; i <= 5; i++) {
        for (ch = 'A'; ch < 'A'+ i; ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }

    return 0;
}
