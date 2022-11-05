// car1November2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //question 1
    // declaration constant
    float pi = 3.141592;
    //variable initiation 
    float area, volume, radius, height;
   

   
    //getting input from the user
    cout << "\t\tQuestion 1\n";
    cout << "Please enter the height of the cylinder" <<endl;
    cin >> height;
    cout << "Please enter the radius of the cylinder" << endl;
    cin >> radius;

    //logic and processe
    volume = pi * radius * radius * height;
    area = 2 * pi * radius * height + 2 * pi * radius * radius;



    //display output
    cout << "the volume of the cylinder whose height is " << height << " and radius is " << radius << " is ";

    cout << "volume:  " << volume;
    cout << " area   " << area << endl << endl;
   

    // Question 2
    // initializaiton of variables
    float Fahrenheit, Celsius;

    //input from user
    cout << "\t\tQuestion 2\n";
    cout << "Please enter the temperature in Fahrenheit" << endl;
    cin >> Fahrenheit;
     
    // Logic and processes
    Celsius = 5.0 / 9.0 * (Fahrenheit - 32.0);

    //displaying output
    
    cout << "The temperature is" << Celsius << "Degrees Celsius\n\n";

    //Question 3
    //initialization and declaration of variables
    float rate = 0.25;
    float grossSalary = 10000;
    float taxPayable;
    float netSalary;

    //logic and process
    taxPayable = 0.25 * 10000;// the tax to be paid to the government
    netSalary = 10000 - taxPayable;//the remaining amount to be retained by the employer
    cout << "\t\tQuestion 3\n";
    cout << "Tax payable is" << taxPayable;
    cout << "Net salary is " << netSalary;





}


