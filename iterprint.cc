//
//  Assignment5
//
//  Seyed Mohamad Hosseinioun
//  CSCI 689/0001
//  Nithin Devang
//  Assignment 5
//  Due on 03.10.2017


using namespace std;
#include "iterprint.h"

void iterprint( vector<Storm> & vec) {
        vector<Storm>:: iterator iter;
        int i=0;
        const int blockNum = 20;
        for( iter = vec.begin(); iter != vec.end(); ++iter) {
                if (i%blockNum == 0){
                        cout<< endl;
                        printhead();
                }
                Storm mine(*iter);
                mine.print();
                cout <<endl;
                ++i;
        }
}
