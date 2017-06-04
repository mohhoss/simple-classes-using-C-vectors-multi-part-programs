#include <stdio.h>
#include <iostream>
#include <vector>
#include "storm.h"
using namespace std;
#ifndef DATESORT_H
#define DATESORT_H

vector<Storm>  datesort(const vector<Storm> &) ;
bool datecompare(vector<Storm>::iterator &, vector<Storm>::iterator &);

#endif
