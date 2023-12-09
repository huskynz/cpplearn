#include <iostream>
#include "caulc.h"
#include "game.h"
#include "web.h"
using namespace std;

int main() {
    int action;
    
    
    cout << "What Action Would You Like To Peform (1: Calculator 2: Game 3: Reboot your system 4: Exit):  ";
    cin >> action;
    
    
    
    if (action == 1) {
        cal();
    }
    else if (action == 2) {
            
        game();
    }
    else if (action == 3) {
        web();
        
    }
    else if (action == 4) {
        exit;
    }
    else {
        cout << "You did not selct anything ima exit";
        return 404;
    }

    cout << "\nThank you for using my program" << endl;
    return 0;
}
