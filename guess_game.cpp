#include <iostream>
using namespace std;

int main() {
    int low = 1;
    int high = 100;
    char response;

    cout << "==============================" << endl;
    cout << "The computer will guess your number!" << endl;
    cout << "Think of a number between 1 and 100." << endl;
    cout << "Respond with: (h) Higher, (l) Lower, (c) Correct" << endl;
    cout << "==============================" << endl << endl;

    while (low <= high) {
        int guess = (low + high) / 2;
        cout << "Is your number " << guess << "? ";
        cout << "(h = Higher, l = Lower, c = Correct): ";
        cin >> response;

        if (response == 'c') {
            cout << "\n🎉 Yay! I guessed your number!" << endl;
            break;
        } else if (response == 'h') {
            low = guess + 1;
        } else if (response == 'l') {
            high = guess - 1;
        } else {
            cout << "⚠️ Invalid input! Please use only: h, l, c" << endl;
        }
    }

    if (low > high) {
        cout << "\n Hmm, something went wrong! Maybe an inaccurate response?" << endl;
    }

    return 0;
}

