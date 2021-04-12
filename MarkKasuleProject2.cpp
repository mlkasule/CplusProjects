/*
* Class: CMSC 140 23506
* Instructor: Prof. Gregory Grinberg
* Description: Project 2: This program converts temperature, distance, and weight from Celsius to Fahrenheit, Kilometers to Miles,and Kilograms to pounds respectively.
* Due:10/18/2020
* I pledge that I have completed the programming assignment independently.
I have not copied the code from a student or any source.
I have not given my code to any student.
Print your Name here: Mark Kasule
*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string country_name;
    int menu_option;
    double temperature_celsius, distance_in_km, distance_in_miles, weight_in_kg, weight_in_lbs;
    double temperatureF;
    const double ONE_KILOMETER = 0.6;
    const double ONE_KILOGRAM = 2.2;
    const string PROGRAMMER_FULL_NAME = "Mark Kasule", DUE_DATE = "10/18/2020";
    const string PROJECT_NUMBER = "CMSC140 PROJECT 2";

    cout << "" << endl;

    cout << "Enter country's temperature (celsius): ";
    cin >> country_name;

    cin.ignore();

    cout << "" << endl;
    cout << "Converter Toolkit" << endl;
    cout << "-----------------" << endl;
    cout << "1. Temperature Converter" << endl;
    cout << "2. Distance Converter" << endl;
    cout << "3. Weight Converter" << endl;
    cout << "4. Quit" << endl;
    cout << "" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> menu_option;

    if (menu_option == 1)
    {
        //temperature
        cout << "(Please enter temperature in Celsius (such as 24):) ";
        cin >> temperature_celsius;
        //convert celsius to fahrenheit
        temperatureF = static_cast<int>(temperature_celsius * 9 / 5) + 32;
        cout << "It is " << temperatureF << " in Fahrenheit." << endl;
        cout << "" << endl;
        cout << country_name << " sounds fun!\n"
             << endl;
    }
    else if (menu_option == 2)
    {
        //distance covered
        cout << "Please enter the distance in Kilometers (such as 18.54): ";
        cin >> distance_in_km;
        //if positive distance
        if (distance_in_km >= 0)
        {
            distance_in_miles = (ONE_KILOMETER * distance_in_km);
            cout << "The distance in miles is: " << setprecision(2) << fixed << showpoint << distance_in_miles;
            cout << "" << endl;
            cout << country_name << " sounds fun\n"
                 << endl;
        }
        //if negative distance
        else
        {
            cout << "!!! Program does not convert negative distance !!!\n";
        }
    }
    else if (menu_option == 3)
    {
        //weight in pounds
        cout << "Please enter weight in kilograms: ";
        cin >> weight_in_kg;
        //if weight is positive
        if (weight_in_kg >= 0)
        {
            weight_in_lbs = (ONE_KILOGRAM * weight_in_kg);
            cout << "The weight in pounds is: " << setprecision(1) << fixed << showpoint << weight_in_lbs << endl;
            cout << "" << endl;
            cout << country_name << " sounds fun\n"
                 << endl;
        }
        //weight if negative
        else
        {
            cout << "!!! Program does not convert negative weight !!!\n"
                 << endl;
        }
    }
    else if (menu_option == 4)
    {
        cout << "QUIT, GOODBYE!!"
             << endl;
    }
    else
    {
        cout << "Opps, I didn't catch that, please choose an option between 1-4!!!\n"
             << endl;
    }
    cout << "" << endl;
    cout << "Thank you for testing my program!!" << endl;
    cout << "" << endl;
    cout << "PROGRAMMER: " << PROGRAMMER_FULL_NAME << endl;
    cout << PROJECT_NUMBER << endl;
    cout << "Due Date: " << DUE_DATE << endl;

    return 0;
}