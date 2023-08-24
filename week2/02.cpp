#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    char *hostname = getenv("HOSTNAME");

    if (hostname != nullptr) {
        cout << "Hostname: " << hostname << endl;
    }
    else {
        cout << "Hostname environment variable not found." << endl;
    }

    return 0;
}
