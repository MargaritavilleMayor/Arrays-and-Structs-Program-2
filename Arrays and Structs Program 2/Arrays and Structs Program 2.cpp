// Arrays and Structs Program 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

struct runners_miles
{
    int athlete1[7];
    int athlete2[7];
    int athlete3[7];
    int athlete4[7];
    int athlete5[7];
};

void file_reading(string runners[5], runners_miles& miles);
void calculations(int miles_tot[5], double miles_avg[5], runners_miles& miles);
void output_table(string runners[5], runners_miles miles, int miles_tot[5], double miles_avg[5]);

int main()
{
    string runners[5];
    int miles_tot[5]{ 0 };
    double miles_avg[5]{ 0 };
    runners_miles miles{ 0 };
    file_reading(runners, miles);
    calculations(miles_tot, miles_avg, miles);
    output_table(runners, miles, miles_tot, miles_avg);
    
}

//Reads the information from the file into arrays
void file_reading(string runners[5], runners_miles& miles)
{
    ifstream input_file;
    input_file.open("runners.txt");
    input_file >> runners[0];
    for (int i = 0; i <= 6; ++i)
    {
        input_file >> miles.athlete1[i];
    }
    input_file.ignore(2, '\n');
    input_file >> runners[1];
    for (int j = 0; j <= 6; ++j)
    {
        input_file >> miles.athlete2[j];
    }
    input_file.ignore(2, '\n');
    input_file >> runners[2];
    for (int k = 0; k <= 6; ++k)
    {
        input_file >> miles.athlete3[k];
    }
    input_file.ignore(2, '\n');
    input_file >> runners[3];
    for (int l = 0; l <= 6; ++l)
    {
        input_file >> miles.athlete4[l];
    }
    input_file.ignore(2, '\n');
    input_file >> runners[4];
    for (int t = 0; t <= 6; ++t)
    {
        input_file >> miles.athlete5[t];
    }
}

//Calculates the total miles and average miles of each athlete
void calculations(int miles_tot[5], double miles_avg[5], runners_miles& miles)
{
    for (int i = 0; i <= 6; ++i)
    {
        miles_tot[0] = miles_tot[0] + miles.athlete1[i];
    }
    miles_avg[0] = miles_tot[0] / 7;
    for (int j = 0; j <= 6; ++j)
    {
        miles_tot[1] = miles_tot[1] + miles.athlete2[j];
    }
    miles_avg[1] = miles_tot[1] / 7;
    for (int k = 0; k <= 6; ++k)
    {
        miles_tot[2] = miles_tot[2] + miles.athlete3[k];
    }
    miles_avg[2] = miles_tot[2] / 7;
    for (int l = 0; l <= 6; ++l)
    {
        miles_tot[3] = miles_tot[3] + miles.athlete4[l];
    }
    miles_avg[3] = miles_tot[3] / 7;
    for (int t = 0; t <= 6; ++t)
    {
        miles_tot[4] = miles_tot[4] + miles.athlete5[t];
    }
    miles_avg[4] = miles_tot[4] / 7;
}

//Prints out all the information
void output_table(string runners[5], runners_miles miles, int miles_tot[5], double miles_avg[5])
{
    string day_names[9]{ "Sun", "Mon", "Tue", "Wed", "Thur", "Fri", "Sat", "Tot.", "Avg" };
    cout << setw(15);
    for (int k = 0; k <= 8; ++k)
    {
        cout << day_names[k] << setw(5);
    }
    cout << endl << runners[0] << setw((15 - (runners[0].length())));
    for (int i = 0; i <= 6; ++i)
    {
        cout << miles.athlete1[i] << setw(5);
    }
    cout << setw(5) << miles_tot[0] << setw(5) << miles_avg[0] << endl;
    cout << runners[1] << setw((15 - (runners[1].length())));
    for (int j = 0; j <= 6; ++j)
    {
        cout << miles.athlete2[j] << setw(5);
    }
    cout << setw(5) << miles_tot[1] << setw(5) << miles_avg[1] << endl;
    cout << runners[2] << setw((15 - (runners[2].length())));
    for (int l = 0; l <= 6; ++l)
    {
        cout << miles.athlete3[l] << setw(5);
    }
    cout << setw(5) << miles_tot[2] << setw(5) << miles_avg[2] << endl;
    cout << runners[3] << setw((15 - (runners[3].length())));
    for (int t = 0; t <= 6; ++t
        )
    {
        cout << miles.athlete4[t] << setw(5);
    }
    cout << setw(5) << miles_tot[3] << setw(5) << miles_avg[3] << endl;
    cout << runners[4] << setw((15 - (runners[4].length())));
    for (int h = 0; h <= 6; ++h)
    {
        cout << miles.athlete5[h] << setw(5);
    }
    cout << setw(5) << miles_tot[4] << setw(5) << miles_avg[4] << endl;
}