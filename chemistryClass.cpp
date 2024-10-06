#include <iostream>
#include <iomanip>

using namespace std;

void getTestScores(double[], int);
double getTotal(const double[], int);
double getLowest(const double[], int);

void getTestScores(double scores[], int size){
    
    // loop counter
    int index;

    // get each test score
    for(index = 0; index <= size - 1; index++){
        cout << "Enter test score number " << (index + 1) << ": ";
        cin >> scores[index];
    }
}

double getTotal(const double numbers[], int size){
    double total = 0;

    for(int count = 0; count < size; count++){
        total += numbers[count];
    }

    return total;
}