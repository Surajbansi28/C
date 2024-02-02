#include <iostream>
using namespace std;

int main() {
    int buffer[10], bufsize, in, out, produce, consume, choice = 0;
    in = 0;
    out = 0;
    bufsize = 10;

    while (choice != 3) {
        cout << "\n1. Produce \t 2. Consume \t 3. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if ((in + 1) % bufsize == out)
                    cout << "\nBuffer is Full";
                else {
                    cout << "\nEnter the value: ";
                    cin >> produce;
                    buffer[in] = produce;
                    in = (in + 1) % bufsize;
                }
                break;

            case 2:
                if (in == out)
                    cout << "\nBuffer is Empty";
                else {
                    consume = buffer[out];
                    cout << "\nThe consumed value is " << consume;
                    out = (out + 1) % bufsize;
                }
                break;

            case 3:
                cout << "\nExiting the program\n";
                break;

            default:
                cout << "\nInvalid choice. Please enter 1, 2, or 3.\n";
                break;
        }
    }

    return 0;
}
