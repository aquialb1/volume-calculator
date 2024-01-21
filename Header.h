#pragma once
#include <iostream>
#include <cmath>

using namespace std;

const int input_length = 1;
const float pi = 3.14159;
const string vol_calc = "The volume is: ";
const string units = " cubic units.";
const string error_01 = "One or more dimensions are invalid. Please try again.";
const string error_02 = "The diameter is invalid. Please try again.";

void box_volume() {
    float length;
    float width;
    float height;

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
        cout << error_01 << endl;
        cout << endl;
        box_volume();
    }
}

void sphere_volume() {
    float diam;
    float rad;

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
        cout << error_02 << endl;
        cout << endl;
        sphere_volume();
    }
}

void cylinder_volume() {
    float diam;
    float rad;
    float height;

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
        cout << error_01 << endl;
        cout << endl;
        cylinder_volume();
    }
}

void cone_volume() {
    float diam;
    float rad;
    float height;

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
        cout << error_01 << endl;
        cout << endl;
        cone_volume();
    }
}