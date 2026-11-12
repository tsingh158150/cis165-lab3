/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    const int MINUTES_PER_HOUR = 60;
    const int level_one_minutes = 78;
    const int level_two_minutes = 144;

    // Convert each level's total minutes into hours and remaining minutes.
    int level_one_hours = level_one_minutes / MINUTES_PER_HOUR;
    int level_one_remaining_minutes = level_one_minutes % MINUTES_PER_HOUR;

    int level_two_hours = level_two_minutes / MINUTES_PER_HOUR;
    int level_two_remaining_minutes = level_two_minutes % MINUTES_PER_HOUR;

    // Find the additional time needed to complete Level 2.
    int difference_minutes = level_two_minutes - level_one_minutes;
    int difference_hours = difference_minutes / MINUTES_PER_HOUR;
    int difference_remaining_minutes = difference_minutes % MINUTES_PER_HOUR;

    cout << "Level 1 time: " << level_one_hours << " hour(s) and "
         << level_one_remaining_minutes << " minute(s)." << endl;

    cout << "Level 2 time: " << level_two_hours << " hour(s) and "
         << level_two_remaining_minutes << " minute(s)." << endl;

    cout << "Difference: " << difference_hours << " hour(s) and "
         << difference_remaining_minutes << " minute(s)." << endl;

    return 0;
}
