#include <iostream>
using namespace std;

int main() {
    // Pointer to the array of strings representing the environment variables
    extern char **environ;

    // Iterate through each environment variable and print it
    for (int i = 0; environ[i] != nullptr; i++) {
        cout << environ[i] << endl;
    }

    return 0;
}
