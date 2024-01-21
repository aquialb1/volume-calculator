#include <iostream>
#include <cmath>
#include "Header.h"

using namespace std;

int main() {
    string selection;

    cout << "Volume Calculator" << endl;
    cout << endl;

    do {
        cout << "1 - Box  |  2 - Sphere  |  3 - Cylinder  |  4 - Cone  |  0 - Exit" << endl;
        cout << endl;
        cout << "Please select an option from the menu above: ";
        cin >> selection;
        cout << endl;

        if (selection == "1" && selection.length() == input_length) {
            cout << "- Box -" << endl;
            cout << endl;
            box_volume();
        }
        else if (selection == "2" && selection.length() == input_length) {
            cout << "- Sphere -" << endl;
            cout << endl;
            sphere_volume();
        }
        else if (selection == "3" && selection.length() == input_length) {
            cout << "- Cylinder -" << endl;
            cout << endl;
            cylinder_volume();
        }
        else if (selection == "4" && selection.length() == input_length) {
            cout << "- Cone -" << endl;
            cout << endl;
            cone_volume();
        }
        else if (selection == "0" && selection.length() == input_length) {
            cout << "";
        }
        else {
            cout << "Invalid option. Please try again." << endl;
            cout << "\n";
        }
    } while (selection != "0");

    cout << endl;
    return 0;
}
