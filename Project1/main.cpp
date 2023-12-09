#include <iostream>
#include "caulc.h"
#include "game.h"
#include "web.h"
using namespace std;

int main() {
    int x, y;
    int sum;
    int operation;
    int action;
    
    
    cout << "What Action Would You Like To Peform (1: Calculator 2: Game 3: Open Website 4: Exit):  ";
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
    }

    cout << "\nProgram ended." << endl;
    return 0;
}
