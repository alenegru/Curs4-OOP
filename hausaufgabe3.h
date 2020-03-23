#pragma once
#include <string>
#include <vector>
class Shape {

public:

    string name;
    double area;

    Shape(string n, double a) {
        name = n;
        area = a;
    }

    void shape_string(vector <Shape>& vect) {
        cout << endl;
        for (int i = 0; i < vect.size(); i++) {
            string s = to_string(vect[i].area);
            vect[i].name = vect[i].name + " " + s + "!";
            cout << "Shape is: " << vect[i].name << endl;
        }
    }

    static void apply_numeric(vector <Shape>& vect, double (*func)(double, double), double val) {
        for (int i = 0; i < vect.size(); i++)
            vect[i].area = func(val, vect[i].area);
    }

    static double multiply(double value1, double value2) {
        return value1 * value2;
    }

    static double divide(double value1, double value2) {
        return value1 / value2;
    }
};
