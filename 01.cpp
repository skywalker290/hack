#include <iostream>
#include <unistd.h>
#include <bits/stdc++.h>
#include <sys/time.h>
#include <sys/resource.h>
using namespace std;

int main() {
    extern char ** environ;
    // auto pid = gethostname(environ);
    auto parent=getppid();
    auto pid=getpid();
    auto nice=getpriority(PRIO_PROCESS,pid);
    auto uid=getuid();
    auto euid=geteuid();
    std::cout << "Process ID (PID): " << parent << std::endl;
    cout<<pid<<endl;
    cout<<nice<<endl;
    cout<<uid<<endl;
    cout<<euid<<endl;

    return 0;
}
