//
//
//  Assignment5
//
//  Seyed Mohamad Hosseinioun
//  CSCI 689/0001
//  Nithin Devang
//  Assignment 5
//  Due on 03.10.2017

#include <stdio.h>
#include <iomanip>
#include <iostream>
using namespace std;

void printhead() {
        cout << left;
        const int basinSpace =30;
        const int sevrSpace = 11;
        cout << setw(basinSpace+sevrSpace) << "Storm";

        const int nameSpace = 10;
        const int seqSpace = 4;
        cout << setw(nameSpace+seqSpace) << "Name";

        const int yearSpace = 6;
        cout <<  setw(yearSpace) << "Date";

        const int maxWindSpSpace = 4;
        cout << setw(maxWindSpSpace) << "Wind";

        const int minAirPrSpace = 6;
        cout << right << setw(minAirPrSpace) << "mbar";

        cout <<endl;
        for (int i=1; i <= (basinSpace+sevrSpace+nameSpace+seqSpace+yearSpace+maxWindSpSpace+minAirPrSpace); ++i)
                cout << "-";
        cout <<endl;
}
