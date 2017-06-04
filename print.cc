/
//
//  Assignment5
//
//  Seyed Mohamad Hosseinioun
//  CSCI 689/0001
//  Nithin Devang
//  Assignment 5
//  Due on 03.10.2017
#include "print.h"

void Storm::print() {
        cout<< left;
        const int basinSpace =30;
        if (basin == 'A')
                cout << setw(basinSpace) << "Atlantic Ocean";
        else if (basin == 'E')
                cout << setw(basinSpace) << "Northeastern Pacific Ocean";
        else if (basin == 'C')
                cout << setw(basinSpace) << "Central Pacific Ocean";
        else
                cout << setw(basinSpace) << " ";

        const int sevrSpace = 11;
        if (sevr == 'H')
                cout <<setw(sevrSpace) << "Hurricane";
        else if (sevr == 'S')
                cout << setw(sevrSpace) << "Storm";
        else if (sevr == 'D')
                cout << setw(sevrSpace) << "Depression";
        else
                cout << setw(sevrSpace) << " ";

        const int nameSpace = 10;
        cout << setw(nameSpace) << name;

        const int seqSpace = 4;
        const int yearSpace = 6;
        cout << right << setw(seqSpace) << seq << "/" << setw(yearSpace) << left << year;

        const int maxWindSpace = 4;
        cout << setw(maxWindSpace) << maxWind;

        const int minPressSpace = 7;
        cout << setw(minPressSpace) << minPress;

};
