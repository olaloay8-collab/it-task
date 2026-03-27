 #include <iostream>
#include <string>

using namespace std;

// Data: 10 parking slots
int parkingSlots[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; 
string carPlates[10] = {"", "", "", "", "", "", "", "", "", ""};

int main() {
    int choice, slotNum;
    string searchPlate;

    while (true) {
        cout << "\n--- Smart Parking System ---\n";
        cout << "1. View Parking Status\n";
        cout << "2. Park a Car (Friend 1 Task)\n";
        cout << "3. Remove a Car (Friend 2 Task)\n";
        cout << "4. Search for a Car (Friend 3 Task)\n";
        cout << "5. Exit\n";
        cout << "Select option: ";
        cin >> choice;

        if (choice == 1) {
         cout << "Enter slot number (1-10): ";
            cin >> slotNum;
            if (slotNum >= 1 && slotNum <= 10 && parkingSlots[slotNum-1] == 0) {
                cout << "Enter Plate Number: ";
                cin >> carPlates[slotNum-1];
                parkingSlots[slotNum-1] = 1;
                cout << "Success! Car parked.\n";
            } else {
                cout << "Error: Slot is full or invalid.\n";
            }
            cout << "\n--- Current Slots Status ---\n";
            for (int i = 0; i < 10; i++) {
                cout << "Slot " << i + 1 << ": " << (parkingSlots[i] == 0 ? "[ Empty ]" : "[ Full ] Plate: " + carPlates[i]) << endl;
            }
        } 
        else if (choice == 2) {
            // TODO: Friend 1 insert Park code here
            cout << "Waiting for Friend 1...\n";
        }
        else if (choice == 3) {
            // TODO: Friend 2 insert Remove code here
            cout << "Waiting for Friend 2...\n";
        }
        else if (choice == 4) {cout << "Enter Plate Number to search: ";
            cin >> searchPlate;
            bool found = false;
            for (int i = 0; i < 10; i++) {
                if (carPlates[i] == searchPlate) {
                    cout << "Car found in Slot: " << i + 1 << endl;
                    found = true;
                    break;
                }
            }
            if (!found) cout << "Car not found.\n";
            // TODO: Friend 3 insert Search code here
            cout << "Waiting for Friend 3...\n";
        }
        else if (choice == 5) {
            break;
        }
    }
    return 0;
}
