#include <iostream>
using namespace std;
int main() 
{
    double temp;
    
    cout << "Enter the temperature in centigrade: ";
    cin >> temp;
    
    if (temp < 0) {
        cout << "Freezing weather." << endl;
    } else if (temp >= 0 && temp <= 10) {
        cout << "Very Cold weather." << endl;
    } else if (temp > 10 && temp <= 20) {
        cout << "Cold weather." << endl;
    } else if (temp > 20 && temp <= 30) {
        cout << "Normal in Temp." << endl;
    } else if (temp > 30 && temp <= 40) {
        cout << "It’s Hot." << endl;
    } else {
        cout << "Its Very Hot." << endl;
    }
    return 0;
}

