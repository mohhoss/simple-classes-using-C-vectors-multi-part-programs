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
#include <iostream>
#include <iomanip>
using namespace std;

#ifndef STORM_H
#define STORM_H

class Storm {
        char basin;
        string name;
        int seq;
        int year;
        int maxWind;
        int minPress;
        char sevr;

        public:
        Storm ();
        Storm (char, string, int, int, int, int,  char);
        void print();
        char get_Sevr() const;
        int get_Seq() const;
        int get_Year() const;
        int get_MaxWind() const;
        int get_MinAir() const;
};
#endif
