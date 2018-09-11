// Design a program that asks the user to enter a store's sales for each day of
// the week. The amounts should be stored in a list. Use a loop to calculate
// the total sales for the week and display the result.

#include <iostream>
using namespace std;

int main() {
    // Initialized Variables
    string week[7] = {"Sunday", "Monday", "Tuesday", "Wednesday",
                      "Thursday", "Friday", "Saturday"};
    int index = 0,
        sales = 0,
        totalSales = 0;

    for (int day = 1; day <= 7; day++) {
        cout << "Enter the store's sales for " + week[index] << " ";
        cin >> sales;
        cout << endl;
        totalSales += sales;
        index++;
    }

    cout << "Total sales for the week: " << totalSales;

    return 0;
}