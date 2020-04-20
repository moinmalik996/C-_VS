// CH_5_PC_23.cpp : Pattern Displays
#include <iostream>

using namespace std;


int main() {
    //initialize outer loop to repeat 10 times for each row
    //starting from row no. 1 to row no. 10
    for (int outerCounter = 1; outerCounter <= 10; outerCounter++) {
        //initialize nested loop to print as many +
        //as the row number
        for (int innerCounter = outerCounter; innerCounter > 0; innerCounter--)
            cout << "+";
        //print a new line after each row
        cout << endl;
    }

    //print a blank line between the patterns
    cout << endl;

    //initialize outer loop to repeat 10 times for each row
    //starting from row no. 10 to row no. 1
    for (int outerCounter = 10; outerCounter > 0; outerCounter--) {
        //initialize nested loop to print as many +
        //as the row number
        for (int innerCounter = outerCounter; innerCounter > 0; innerCounter--)
            cout << "+";
        //print a new line after each row
        cout << endl;
    }

    return 0;
}
