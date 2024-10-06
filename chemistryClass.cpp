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

double getLowest(const double numbers[], int size){

    double lowest;

    lowest = numbers[0];

    for(int count = 1; count < size; count++){
        if(numbers[count] < lowest){
            lowest = numbers[count];
        }
    }

    return lowest;
}

int main(){
    const int SIZE = 4;
    double testScores[SIZE], total, lowestScore, average;

    // set up numeric output formatting
    cout << fixed << showpoint << setprecision(1);

    // get the test scores from user
    getTestScores(testScores, SIZE);

    // get the total of the test score
    total = getTotal(testScores, SIZE);

    // get the lowest test score
    lowestScore = getLowest(testScores, SIZE);

    // subtract the lowest score from the total
    total -= lowestScore;

    // calculate the average. Divide by 3 because
    // the lowest test score was dropped
    average = total / (SIZE - 1);

    // display the average
    cout << "The average with the lowest score "
         << "dropped is " << average << ".\n";

    return 0;

}