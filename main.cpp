#include <iostream>
using namespace std;

int main() {
    string name;
    char initial;
    short age;
    bool isAdult = false;
    int zipcode;
    double wage;
    int daysWorked;
    short hoursWorkedPerDay;
    const double tax = 100.00 * 0.2f;

    cout << "\n\tEnter your name, mate: ";
    cin >> name;
    cout << "\n\tEnter your last initial: ";
    cin >> initial;
    cout << "\n\tEnter your age, mate: ";
    cin >> age;
    cout << "\n\tEnter your zip code, mate: ";
    cin >> zipcode;
    cout << "\n\tWhat are your wages, mate?: ";
    cin >> wage;
    cout << "\n\tHow many days did you work this week?: ";
    cin >> daysWorked;

    if (age > 19) isAdult = true;
    int taxableHours = 0;
    for (int i = 0; i < daysWorked; i++) {
        cout << "\n\tHow many hours did you work for day " << i << " :";
        cin >> hoursWorkedPerDay;
        taxableHours += hoursWorkedPerDay;
    }

    const double grossIncome = taxableHours * wage;
    const double netIncome = grossIncome - tax;

    cout << "\n\t" << name << " " << initial << " worked " << taxableHours << " hours this week at $" << wage << " per hour.";
    cout << "\n\t" << name << " is " << age << " years of age.";

    cout << "\n\t" << "Gross Income: " << grossIncome;
    cout << "\n\t" << "Net Income: " << netIncome;
}