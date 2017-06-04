//
//
//  Assignment5
//
//  Seyed Mohamad Hosseinioun
//  CSCI 689/0001
//  Nithin Devang
//  Assignment 5
//  Due on 03.10.2017

#include "datesort.h"

vector<Storm> datesort(const  vector<Storm> & vec ) {

        vector<Storm>::iterator it;
        vector<Storm>::iterator mini;
        const int vecLength = distance(vec.begin(), vec.end());
        vector<Storm> temp = vec;
        vector<Storm> sorted;

        for (int i=1; i<= vecLength; ++i){
                int location =0;
                mini = temp.begin();
                for( it=temp.begin(); it !=temp.end(); ++it){
                        if(datecompare(it, mini)){
                                mini=it;
                                location = distance(temp.begin(),it);
                        }
                }
                sorted.push_back(*mini);
                temp.erase(temp.begin()+location);
        }
        return sorted;
}

bool datecompare (vector<Storm>::iterator & first, vector<Storm>::iterator & second) {

        long int val1 = 100000*(*first).get_Year()+100*(*first).get_Seq();
        long int val2 = 100000*(*second).get_Year()+100*(*second).get_Seq();
        if (val1 > val2)
                return 0;
        else
                return 1;
}
