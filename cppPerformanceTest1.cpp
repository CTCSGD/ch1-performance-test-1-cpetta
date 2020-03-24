// cppPerformanceTest1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Christoper Petta

#include <iostream>
using namespace std;

int main()
{
    int score1, score2, score3;

    cout << "Please enter your first score: ";
    cin >> score1;

    cout << "Secound Score: ";
    cin >> score2;

    cout << "Third score: ";
    cin >> score3;

    cout << "The average score is: ";
    cout << (score1 + score2 + score3) / 3;
}