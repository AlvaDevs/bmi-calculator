//
//  main.cpp
//  bmi-calculator
//
//  Created by Alvaro Alvarez on 12/07/23.
//

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
//    variables
    float weight = 0, height = 0, result = 0;
    
//    data request
    cout << "Body Mass Index Calculator (BMI)\n";
    cout << "Enter your weight(kg): ";
    cin >> weight;
    cout << "Now, enter your height(m): ";
    cin >> height;
    
//    Calculating BMI
    result = weight / pow(height, 2);
    cout << "Your BMI is: " << setprecision(4) << result << " kg/m^2\n";

    return 0;
}
