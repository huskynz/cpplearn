#ifndef SYSTEM_H
#define SYSTEM_H

#include <iostream>
using namespace std;

inline void systemaction() { // Assuming void return type
    int operation;

    cout << R"(
HuskyNZ's Simple Power Oprater                                                                                                                                                                                                                                                                                                                                                                                                                                   
)" << '\n';

    cout << "What operation would you like to perform? (1: Reboot, 2: Shutdown, 3: Sleep, 4: Logoff): ";
    cin >> operation;

    if (operation == 1) {

        system("shutdown /r /t 0");
    }
    else if (operation == 2) {
        system("shutdown -s");
    }
   
    else if (operation == 3) {
        system("rundll32.exe powrprof.dll,SetSuspendState 0,1,0");
    }
    else if (operation == 4) {
        system("shutdown /l")
    }
    else {
        cout << "Invalid operation. Please try again.";
    }
}

#endif SYSTEM_H


