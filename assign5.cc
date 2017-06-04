//
//      Mohamad Hosseinioun
//      CSCI 689/0001
//      Nithin Devang
//      Assignment 5
//      Due on 03.10.2017

#include "assign5.h"
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main( int argc, const char * argv[]) {
        if (argc !=2){
                cerr << "Usage: " << argv[0] << " string" <<endl;
                return -1;
        }

        // opening the stream
        ifstream source;
        string filename = argv[1];
        source.open(filename.c_str());

        // testing the proper opening
        if ( ! source.is_open()) {
                cerr << "The file " << filename << " did not open properly!" <<endl;
                return -1;
        }

        // one and half loop for getting the values
        string basinStr, nameStr, seqStr, yearStr, maxWindStr, minPressStr, sevrStr;
        vector<Storm> stormdat;
        source >> basinStr >>  nameStr >> seqStr >> yearStr >> maxWindStr >> minPressStr >> sevrStr;

        //printhead();
        while(! source.eof()) {
                // processing
                Storm mine(basinStr[0], nameStr, stoi(seqStr), stoi(yearStr), stoi(maxWindStr), stoi(minPressStr), sevrStr[0]);
                stormdat.push_back(Storm(basinStr[0], nameStr, stoi(seqStr), stoi(yearStr), stoi(maxWindStr), stoi(minPressStr), sevrStr[0]));

                // next input
                source >> basinStr >>  nameStr >>  seqStr >>  yearStr >>  maxWindStr >>  minPressStr >>  sevrStr;
        }


}
