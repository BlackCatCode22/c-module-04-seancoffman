#include <iostream>
#include <ctime>
#include <iomanip>
#include <string>
#include <sstream>
#include <chrono>

using namespace std;
using namespace std chrono;

int main() {
    cout << "\nWelcome to time and date practice!" << endl;
    // Get the current time.
    time_t now = time(0);

    // Convert to my local system time.
    char* pCtime = ctime(&now);
    cout << "\nMy system time is: " << pCtime << endl;

    // Use the proper members of the tm struct to get 2024-09-30.

    time_t currentTime = time(0);

    tm* localTime = localtime(&currentTime);

    ostringstream dateStream;

    cout << (1900 + localTime->tm_year) << "-"
            << setw(2) << setfill('0') << localTime->tm_mon + 1 << "-"
            << setw(2) << setfill('0') << localTime->tm_mday;

    dateStream << (1900 + localTime->tm_year) << "-"
               << setw(2) << setfill('0') << localTime->tm_mon + 1 << "-"
               << setw(2) << setfill('0') << localTime->tm_mday;

    string arrivalDate = dateStream.str();

    cout << "\nArrival Date is: " << arrivalDate << "\n";

    auto currentTime = chrono::system_clock::now();

    time_t currentTime = chrono::system_clock::to_time_t(currentTime);

    tm localTime = localtime(&currentTime);

    ostringstream dateStream;

    dateStream << put_time(&localTime, "%Y-%m-%d");

    string arrivalDateChrono = dateStream.str();

    cout << "Arrival Date using chrono: " << arrivalDateChrono << endl;


    return 0;
}
