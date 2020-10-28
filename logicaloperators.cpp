//A program that makes use of logical operators
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string trouser_size, shirt_size, bow_tie, suit_color, full_name;
    string jersey_size, jersey_shirt, jersey_short, jersey_color;
    double number_of_suits, num_jersey, choice;

    cout << "Hi, welcome to the Arsenal Football Club Store" << endl;
    cout << "May I know your name? ";
    cin >> full_name;
    cin.ignore();
    cout << "" << endl;

    cout << "Great to see you " << full_name << ", we have new suits selling now. Place your order before our inventory sells out!!!" << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "Menu Options" << endl;
    cout << "1. Suits (Colors only are in black and grey)" << endl;
    cout << "2. Jerseys (Colors only in only red)" << endl;
    cout << "What would you like? Choose either (1 or 2) " << endl;
    cin >> choice;

    if (choice == 1 && suit_color == "black" || suit_color == "grey")
    {
        cout << "What size of shirt do you want? (S,M,L): " << endl;
        cin >> shirt_size;
        cin.ignore();
        cout << "What's size of the trouser do you want? (S,M,L): " << endl;
        cin >> trouser_size;
        cin.ignore();
        cout << "Do you want a bow-tie (Yes/No): " << endl;
        cin >> bow_tie;
        cin.ignore();
        cout << "Great Job, " << full_name << " your suit consisting of size a " << shirt_size << ", shirt, " << trouser_size << " trouser, and a " << bow_tie << " bowTie in " << suit_color << " will be shipped to your address once we confirm your details." << endl;
        cout << "";
        cin.ignore();
        cout << "What color do you want? (Strictly choose either  black, red, or grey) ";
        cin >> suit_color;
    }
    else if (choice == 2)
    {
        cout << "How many jerseys do you want? (enter whole numbers only): " << endl;
        cin >> num_jersey;
        cout << "" << endl;
        cout << "Your " << num_jersey << " jersey(s) in (red) will be ready for shipping." << endl;
    }
    else
    {
        cout << "You didn't choose between 1 and 2. Lets try again! Run the program again. " << endl;
    }

    return 0;
}