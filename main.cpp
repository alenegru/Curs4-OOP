//
//  main.cpp
//  curs4
//
//  Created by Alexandra Negru on 23/03/2020.
//  Copyright © 2020 Alexandra Negru. All rights reserved.
//

#include <iostream>
#include "haus1.h"
#include "haus2.h"
#include "haus3.h"

using namespace std;

int main() {
    cout << "Test Hausaufgabe1. Sum = ";
    int array[10] = { 1,2,3,4,5};
    cout << sum(array, 0, 2, 0);

    cout << "\nTest Hausaufgabe2. Sum = ";
    cout << sum_lambda(array, 0, 2, 2);

    cout << "\nTest Hausaufgabe3";

    Shape s1("circle", 2);
    Shape s2("square", 3);
    Shape s3("triangle", 4);

    vector <Shape> vect = {s1, s2, s3};

    cout << "Test multiply everything by 2\n";

    s1.apply_numeric(vect, s1.multiply, 2);
    for (int i = 0; i < vect.size(); i++)
        cout << vect[i].name << ": " << vect[i].area << ", ";
    
    cout << "\nTest to_string";
    s1.shape_string(vect);
    
}
