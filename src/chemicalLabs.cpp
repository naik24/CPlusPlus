#include <iostream>

using namespace std;

int main(){
    const double MAX_TEMP = 102.5;
    double temperature;

    // get the current temperature
    cout << "Enter the substance's Celsius temperature: ";
    cin >> temperature;

    // as long as necessary, instruct the technician
    // to adjust the thermostat
    while (temperature > MAX_TEMP){
        cout << "The temperature is too high. Turn the thermostat down and wait 5 minutes." << endl;
        cout << "Then take the Celsius temperature again and enter it here: ";
        cin >> temperature;
    }

    // remind the technician to check the temperature again in 15 minutes
    cout << "The temperature is acceptable. Check it again in 15 minutes.";

    return 0;
}