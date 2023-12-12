#include <iostream>
#include "caulc.h"
#include "system.h"
using namespace std;

int main() {
    int action;cout << "What Action Would You Like To Peform (1: Calculator 2: Perform power oprations on your system 3: Exit):  ";
    cin >> action;

    if (action == 1) {
        cal();
    }
    else if (action == 2) {
            
        systemaction();
    }
    else if (action == 3) {
        exit;
        
    }
    else if (action == 2016)
    {
	    		cout << "You foound the secret";
	}
    else {
        cout << "You did not selct anything ima exit";
    }

    cout << "\nThank you for using my program" << endl;
    return 0;
}
