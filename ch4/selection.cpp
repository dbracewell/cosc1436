#include <iostream>
using namespace std;

// AND &&  TRUE && TRUE
// OR ||   TRUE || FALSE TRUE || TRUE FALSE || TRUE

int main()
{
    int hoursWorked;
    double payRate;

    cout << "How many hours did you work";
    cin >> hoursWorked;

    cout << "What is your payrate?";
    cin >> payRate;

    // If hoursWorked <= 40 THEN
    //    grossPay = hoursWorked * payRate;
    // ELSE IF hoursWorked <= 60 THEN
    //    grossPay = 40 * payRate + (hoursWorked-40) * 1.5 * payRate
    // ELSE
    //    grossPay = 40 * payRate + (hoursWorked-40) * 2 * payRate
}
