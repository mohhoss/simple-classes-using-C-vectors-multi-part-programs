//
//
//  Assignment5
//
//  Seyed Mohamad Hosseinioun
//  CSCI 689/0001
//  Nithin Devang
//  Assignment 5
//  Due on 03.10.2017

#include "storm.h"



        Storm::Storm () { basin='N'; name="None"; seq=0; year=0; maxWind=0; minPress=0; sevr='N';};

        Storm::Storm (char v1,string v2,int v3,int v4,int v5,int v6, char v7) {
                basin= v1;
                name= v2;
                seq= v3;
                year= v4;
                maxWind= v5;
                minPress =v6;
                sevr=v7;
        }

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

        }
        char Storm::get_Sevr() const {return sevr;}

        int Storm::get_Seq() const {return seq;}

        int Storm::get_Year() const {return year;}

        int Storm::get_MaxWind() const {return maxWind;}

        int Storm::get_MinAir() const {return minPress;}
                                                                                                                                                                               71,1          Bot
