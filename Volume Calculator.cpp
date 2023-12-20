#include <iostream>
#include <cmath>

using namespace std;

const float pi = 3.14159;
const string units = " cubic units.";
const string vol_calc = "The volume is: ";
const int input_length = 1;

void box_volume() {
    float length;
    float width;
    float height;

    cout << "- Box -" << endl;
    cout << endl;

    cout << "Length: ";
    cin >> length;

    cout << "Width: ";
    cin >> width;

    cout << "Height: ";
    cin >> height;
    cout << endl;

    float volume = length * width * height;

    if (length > 0 && width > 0 && height > 0) {
        cout << vol_calc << volume << units << endl;
        cout << endl;
    }
    else {
        cout << "One or more dimensions are invalid. Please try again." << endl;
        cout << endl;
        box_volume();
    }
}

void sphere_volume() {
    float diam;
    float rad;

    cout << "- Sphere -" << endl;
    cout << endl;

    cout << "Diameter: ";
    cin >> diam;
    cout << endl;
    rad = diam / 2;

    float volume = (4 * pi * pow(rad, 3)) / 3;

    if (diam > 0) {
        cout << vol_calc << volume << units << endl;
        cout << endl;
    }
    else {
        cout << "The diameter is invalid. Please try again." << endl;
        cout << endl;
        sphere_volume();
    }
}

void cylinder_volume() {
    float diam;
    float rad;
    float height;

    cout << "- Cylinder -" << endl;
    cout << endl;

    cout << "Diameter: ";
    cin >> diam;
    rad = diam / 2;

    cout << "Height: ";
    cin >> height;
    cout << endl;

    float volume = (pi * pow(rad, 2) * height);

    if (diam > 0 && height > 0) {
        cout << vol_calc << volume << units << endl;
        cout << endl;
    }
    else {
        cout << "One or more dimensions are invalid. Please try again." << endl;
        cout << endl;
        cylinder_volume();
    }
}

void cone_volume() {
    float diam;
    float rad;
    float height;

    cout << "- Cone -" << endl;
    cout << endl;

    cout << "Diameter: ";
    cin >> diam;
    rad = diam / 2;

    cout << "Height: ";
    cin >> height;
    cout << endl;

    float volume = (pi * pow(rad, 2) * height) / 3;

    if (diam > 0 && height > 0) {
        cout << vol_calc << volume << units << endl;
        cout << endl;
    }
    else {
        cout << "One or more dimensions are invalid. Please try again." << endl;
        cout << endl;
        cone_volume();
    }
}

int main() {
    string selection;

    cout << "Volume Calculator" << endl;
    cout << endl;

    do {
        cout << "1 - Box  |  2 - Sphere  |  3 - Cylinder  |  4 - Cone  |  5 - Exit" << endl;
        cout << endl;
        cout << "Please select an option from the menu above: ";
        cin >> selection;
        cout << endl;

        if (selection == "1" && selection.length() == input_length) {
            box_volume();
        }
        else if (selection == "2" && selection.length() == input_length) {
            sphere_volume();
        }
        else if (selection == "3" && selection.length() == input_length) {
            cylinder_volume();
        }
        else if (selection == "4" && selection.length() == input_length) {
            cone_volume();
        }
        else if (selection == "5" && selection.length() == input_length) {
            cout << "";
        }
        else {
            cout << "Invalid option. Please try again." << endl;
            cout << "\n";
        }

    } while (selection != "5");

    cout << endl;
    return 0;
}