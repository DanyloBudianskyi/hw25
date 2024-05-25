#include <iostream>
#include <vector>
#include <algorithm>
#include "Date.h"


int main()
{
    vector<Date> dates{ Date(), Date(2020, 5, 22), Date(2004, 9, 11), Date(2009, 3, 19) };
    cout << "All dates:\n";
    for (int i = 0; i < dates.size(); i++) {
        dates[i].showDate();
    }
    cout << "\nTask 1\n";

    Date target(2004, 9, 11);
    auto it = find(dates.begin(), dates.end(), target);

    if (it != dates.end()) {
        cout << "Found: " << *it;
    }
    else {
        cout << "Not found";
    }
    cout << "\n\nTask 2\n";
    auto min = min_element(dates.begin(), dates.end());
    if (it != dates.end()) {
        cout << "Min element: " << *min << endl << endl;
        dates.erase(min);
        for (int i = 0; i < dates.size(); i++) {
            dates[i].showDate();
        }
    }
    cout << "\nTask 3\n";
    Date target2;
    cout << "Input date: ";
    cin >> target2;
    auto findIt = find(dates.begin(), dates.end(), target2);
    if (findIt != dates.end()) {
        dates.erase(findIt);
        cout << endl;
        for (int i = 0; i < dates.size(); i++) {
            dates[i].showDate();
        }
    }
    else {
        cout << "Not found\n";
    }
    cout << "\nTask 4\n";
    Date today;
    auto past = [&today](const Date& date) {return date < today; };
    replace_if(dates.begin(), dates.end(), past, today);
    for (int i = 0; i < dates.size(); i++) {
        dates[i].showDate();
    }
    cout << "\nTask 5\n";
    vector<Date> dates2{ Date(), Date(2020, 5, 22), Date(2004, 9, 11), Date(2009, 3, 19), Date(2008, 5, 20), Date(2005, 1, 5) };
    cout << "\nOriginal list:\n";
    for (int i = 0; i < dates2.size(); i++) {
        cout << dates2[i] << " ";
    }cout << endl;
    cout << "\nSorted by ascending:\n";
    sort(dates2.begin(), dates2.end());
    for (int i = 0; i < dates2.size(); i++) {
        cout << dates2[i] << " ";
    }cout << endl;
    cout << "\nSorted by descending:\n";
    sort(dates2.begin(), dates2.end(), greater<Date>());
    for (int i = 0; i < dates2.size(); i++) {
        cout << dates2[i] << " ";
    }cout << endl;
}