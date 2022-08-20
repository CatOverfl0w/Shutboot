#include <iostream>

using namespace std;

void shutdown();
void reboot();
int main() {                                                   
    cout << "Do you want to shutdown or reboot your computer :";
    string shutboot;
    cin >> shutboot;
                                                               
    if (shutboot == "shutdown")                                    
        shutdown();

    else if (shutboot == "reboot")
        reboot();

    else
        cout << "Choose an option !";

    return 0;
}

void shutdown(){
    system("shutdown");
}

void reboot(){
    system("reboot");
}