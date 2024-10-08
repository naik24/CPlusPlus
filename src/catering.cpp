#include <iostream>
#include <iomanip>

using namespace std;

// function prototypes
void showIntro();
double getCups();
double cupsToOunces(double);

void showIntro(){
    cout << "This program converts measurements\n"
         << "in cups to fluid ounces. For your\n"
         << "reference the formula is:\n"
         << " 1 cup = 8 fluid ounces\n\n";
}

double getCups(){
    double numCups;

    cout << "Enter the number of cups: ";
    cin >> numCups;

    return numCups;
}

double cupsToOunces(double numCups){
    return numCups * 8.0;
}

int main(){

    // variables for the cups and ounces
    double cups, ounces;

    // set up numeric output formatting
    cout << fixed << showpoint << setprecision(1);

    // display an intro screen
    showIntro();

    // get number of cups
    cups = getCups();

    // convet cups to fluid ounces
    ounces = cupsToOunces(cups);

    // display the number of ounces
    cout << cups << " cups equals " << ounces << " ounces." << endl;

    return 0;
}