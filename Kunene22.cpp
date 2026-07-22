//Kunene Sinenhlanhla Level 3 PA
#include <iostream>

using namespace std;

int main() {
    int firsttemp, secondtemp, thirdtemp;
    int difference;

    // Enter the first and Second temperature value
    cout << "Enter the first temperature reading: ";
    cin >> firsttemp; //kihugugu

    cout << "Enter the second temperature reading: ";
    cin >> secondtemp;

    // Find the difference
    difference = secondtemp - firsttemp;

    // Check the difference
    if (difference > 50) {
        cout << "Reduce fryer heat before taking the third reading." << endl;
    }
    else if (difference < 10) {
        cout << "Increase the fryer heat before taking the third reading." << endl;
    }

    // Enter third temperature value
    cout << "Enter the third temperature reading: ";
    cin >> thirdtemp;

    // Check the third temperature value
     if (thirdtemp >= 150 && thirdtemp <=190 ) {
    cout << "You may start frying the Mgwinyas";
     }
    else {
    cout <<"Oil not ready for frying";
    }


    return 0;
}
