#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    time_t czas_linuksowy = time(NULL);
    tm *czas = localtime(&czas_linuksowy);
    cout << czas->tm_mday << "."
         << czas->tm_mon + 1 << "."
         << 1900 + czas->tm_year << endl;
    cout << czas->tm_hour << ":" << czas->tm_min << ":" << czas->tm_sec;
    return 0;
}