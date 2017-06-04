
//  Seyed Mohamad Hosseinioun
//  CSCI 689/0001
//  Nithin Devang
//  Assignment 5
//  Due on 03.10.2017

#include "airsort.h"

vector<Storm> airsort( vector<Storm> & vec ) {

        vector<Storm>::iterator it;
        vector<Storm>::iterator mini;
        const int vecLength = distance(vec.begin(), vec.end());
        vector<Storm> temp = vec;
        vector<Storm> sorted;

        for (int i=1; i<= vecLength; ++i){
                int location =0;
                mini = temp.begin();
                for( it=temp.begin(); it !=temp.end(); ++it){
                        if((*it).get_MinAir() < (*mini).get_MinAir()){
                                mini=it;
                                location = distance(temp.begin(),it);
                        }
                }
                sorted.push_back(*mini);
                temp.erase(temp.begin()+location);
        }
        return sorted;
}
