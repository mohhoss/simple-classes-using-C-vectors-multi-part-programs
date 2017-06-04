# simple-classes-using-C-vectors-multi-part-programs
The purpose of this assignment is to give you some experience in writing simple classes, using C++ vectors and in writing multi-part programs.


This assignment reads in a collection of data about ocean storms and generates some brief reports. The data for this assignment is condensed from the National Hurricane Center and Tropical Prediction Center's archive of past hurricane seasons and can be found on the web at http://www.nhc.noaa.gov/data/#hurdat.

The data in this set represents storms from 1851 to 2015 in the northern Atlantic Ocean and from 1949 to 2015 in the northeastern and north central Pacific Ocean.

Your program will read the data file into a vector and then process it, generating reports of the data in unsorted and sorted order, based on several sorting criteria.

Program

You will need to write a class and several functions for this assignment. From a design point of view this class is not a complete class. Only the methods needed to guarantee the proper functioning of the assignment are implemented.

class Storm

Your class should be implemented in a separate source code file, along with an associated header file. The header file should have appropriate header guards.

This class contains seven data members: four ints, two chars and a C++ string. The data members must be private. The class data member are:

a single character indicating whether the storm was in the Atlantic or Pacific basin. An 'A' indicates the Atlantic Ocean, an 'E' the northeastern Pacific Ocean, and a 'C' the central Pacific Ocean.
the name of the storm. Storms before 1950 (and a fair number after) were not named and therefore have the data name UNNAMED
an integer for the sequence number of the storm. The sequence numbers start at 1 for each year and are assigned to the storms in each ocean basin in order of creation.
an integer for the year of the storm.
an integer for the maximum wind speed in nautical miles per hour (knots) recorded for the storm. If no max wind speed was recorded for the storm, then a max wind speed of -1 is listed.
an integer for the minimum air pressure in millibars recorded for the storm. If no air pressure was recorded for the storm, then an air pressure of 10000 is listed.
a character classifying the storm. An 'H' represents a storm that reached hurricane status (winds >= 64 knots). An 'S' is for a storm that was at most a tropical storm or subtropical storm (winds between 34 and 64 knots). A 'D' represents a tropical or subtropical depression (winds < 34 knots).
This class should have eight methods: (Don't worry. Most of them are quite small.)

A default constructor. This should simply set the data members to values that would not normally be used. Default values of 'N', 'None' and 'N' should be used for the basin, name, and storm type, respectively. Zeros make good default values for the integer data members.
A constructor that takes 7 values with which to set all of the data members of the class.
A print method. This should print out the data fields of the instance on a single line. Examples of the fields can be seen below in the sample output. Points to be made here are
The location and storm type should be printed out in a long form.
The sequence and year should have a slash between them.
If minimum pressure data does not exist, it should not be printed.
If the storm category does not exist, it should not be printed.
If the wind speed does not exist, it should not be printed.
Five basic accessor methods. Specifically, methods for retrieving the storm type, sequence number, year, wind speed, and pressure. Accessor methods for the ocean basin and storm name will not be needed.
Main program

Your program should have at least seven more functions (in addition to main()). Two functions have to do with printing. One has to do with input, and four have to do with sorting.

One function will simply print a header for reports. It needs no arguments and returns no value.

One function will print an STL vector of constant Storm instances in the order given. The print function should keep track of the number of lines printed, printing out a break and a new header after every twenty lines. A symbolic constant should be used for this value of twenty lines.

When looping through the vector, you are required to use an iterator rather than an integer index.

One function should take an open ifstream and a Storm and read enough data from the file to fill the Storm.

The format of the data file is: each line contains the information for a single storm. The order of the data values on each line is basin, name, sequence number, year, max wind speed, minimum pressure, and storm type.

One function sorts an STL vector of Storm instances by increasing date.

One function sorts an STL vector of Storm instances by decreasing wind speed.

One function sorts an STL vector of Storm instances by increasing air pressure.

The sorting functions are all very similar. Their only difference is in how elements are compared. You may use any sorting algorithm you wish. But you may not use pre-built library sorting functions. Below is the pseudo-code for selection sort, if needed.

sort ( T data[])
{
   for(b = 0; b < data_size - 1; b++)
       minindex = b;
       for(i = b+1; i < data_size; i++)
          if  data[i] less than  data[minindex]
              minindex = i;

       swap data[b] and data[minindex]
}

You should write an additional function to compare two Storm instances by their dates and return true if the date of the first storm is less than the date of the second. This function is to assist your routine for sorting the storms by date.

The dates of two storms can be compared by their years. This comparison alone will determine the result unless the two years are the same. If the two years are equal, the sequence numbers should then be compared, and the result returned accordingly.

The main program should take the name of a data file to open as a command line argument. If the file can not be opened, an appropriate error message should be displayed and the program should exit.

The records from the file should be read into an STL vector of Storms. The input function created above should help read in one Storm.

After reading the records, print out the number of records input.

The program should then call the print function to display the data in the order that it exists in the file (which has been randomized). It should then sort the array by increasing date, decreasing wind speed and increasing pressure, printing the sorted results after each step.

Input

A link to a data set can be found on the web site. If you are working on turing/hopper, you can also make a copy or link directly to your directory from /home/turing/duffin/courses/cs689/data/storm.dat

Output

Partial sample output from this program on turing/hopper is found below.
Your output may be slightly different depending on the sorting algorithm you use, and the exact comparisons you make ( < vs. <=). These differences are OK, as long as the data is properly sorted by the specified fields.

z123456@turing$ assign5 storm.dat

2864 storms read from storm.dat

Storm                               Name         Date     Wind mbar
-------------------------------------------------------------------
Eastern Pacific  Storm              ILSA        8/1967      60     
Atlantic         Hurricane          UNNAMED     3/1881      80     
Eastern Pacific  Storm              UNNAMED     6/1954      45     
Atlantic         Hurricane          ILSA        9/1958      95  956
Eastern Pacific  Hurricane          MAGGIE     13/1974     120  934
Atlantic         Storm              UNNAMED     2/1865      50     
Atlantic         Hurricane          IGOR       11/2010     135  924
Atlantic         Hurricane          UNNAMED     5/1923     105     
Eastern Pacific  Storm              ODILE      16/2008      50  997
Atlantic         Depression         UNNAMED     3/1980      30     
Eastern Pacific  Storm              UNNAMED     1/1959      45     
Atlantic         Hurricane          JOSEPHINE  16/1984      90  965
Atlantic         Hurricane          UNNAMED     3/1904      70     
Atlantic         Storm              UNNAMED     3/1912      45     
Eastern Pacific  Depression         THREE       3/2007      30 1004
Atlantic         Depression         UNNAMED     5/1981      30     
Atlantic         Storm              UNNAMED    22/1981      60  978
Atlantic         Hurricane          UNNAMED     9/1943      95     
Atlantic         Storm              UNNAMED     7/1859      60     
Atlantic         Storm              UNNAMED     2/1937      55     

Storm                               Name         Date     Wind mbar
-------------------------------------------------------------------
Atlantic         Storm              UNNAMED     2/1931      60 1000
Atlantic         Hurricane          DEBBY       6/1982     115  950
Eastern Pacific  Storm              BORIS       2/2002      50  997
Atlantic         Hurricane          UNNAMED     2/1899      85  979
Eastern Pacific  Hurricane          JIMENA     13/2009     135  931

...

Sort by date:

Storm                               Name         Date     Wind mbar
-------------------------------------------------------------------
Atlantic         Hurricane          UNNAMED     1/1851      80     
Atlantic         Hurricane          UNNAMED     2/1851      80     
Atlantic         Storm              UNNAMED     3/1851      50     
Atlantic         Hurricane          UNNAMED     4/1851     100     
Atlantic         Storm              UNNAMED     5/1851      50     
Atlantic         Storm              UNNAMED     6/1851      60     
Atlantic         Hurricane          UNNAMED     1/1852     100  961
Atlantic         Hurricane          UNNAMED     2/1852      70     
Atlantic         Hurricane          UNNAMED     3/1852      70     
Atlantic         Hurricane          UNNAMED     4/1852      80     
Atlantic         Hurricane          UNNAMED     5/1852      90     
Atlantic         Storm              UNNAMED     1/1853      50     
Atlantic         Storm              UNNAMED     2/1853      40     
Atlantic         Hurricane          UNNAMED     3/1853     130  924
Atlantic         Hurricane          UNNAMED     4/1853     100     
Atlantic         Storm              UNNAMED     5/1853      50     
Atlantic         Hurricane          UNNAMED     6/1853      70     
Atlantic         Storm              UNNAMED     7/1853      50     
Atlantic         Hurricane          UNNAMED     8/1853      90     
Atlantic         Hurricane          UNNAMED     1/1854      70     

Storm                               Name         Date     Wind mbar
-------------------------------------------------------------------
Atlantic         Storm              UNNAMED     2/1854      60     
Atlantic         Hurricane          UNNAMED     3/1854     110  938
Atlantic         Hurricane          UNNAMED     4/1854      90     
Atlantic         Storm              UNNAMED     5/1854      60     
Atlantic         Hurricane          UNNAMED     1/1855      90     
Atlantic         Hurricane          UNNAMED     2/1855      90     
Atlantic         Hurricane          UNNAMED     3/1855      70     
Atlantic         Storm              UNNAMED     4/1855      60  997
Atlantic         Hurricane          UNNAMED     5/1855     110     

...

Sort by wind speed:

Storm                               Name         Date     Wind mbar
-------------------------------------------------------------------
Eastern Pacific  Hurricane          PATRICIA   20/2015     185  872
Atlantic         Hurricane          ALLEN       4/1980     165  899
Atlantic         Hurricane          UNNAMED     3/1935     160  892
Atlantic         Hurricane          GILBERT     8/1988     160  888
Central Pacific  Hurricane          PAKA        5/1997     160     
Eastern Pacific  Hurricane          LINDA      14/1997     160  902
Atlantic         Hurricane          WILMA      25/2005     160  882
Atlantic         Hurricane          MITCH      13/1998     155  905
Atlantic         Hurricane          RITA       18/2005     155  895
Eastern Pacific  Hurricane          RICK       20/2009     155  906
Atlantic         Hurricane          UNNAMED    14/1932     150  918
Atlantic         Hurricane          JANET      10/1955     150  914
Central Pacific  Hurricane          PATSY       2/1959     150     
Atlantic         Hurricane          CARLA       3/1961     150  931
Atlantic         Hurricane          CAMILLE     9/1969     150  900
Atlantic         Hurricane          ANITA       5/1977     150  926
Atlantic         Hurricane          DAVID       9/1979     150  924
Atlantic         Hurricane          ANDREW      4/1992     150  922
Eastern Pacific  Hurricane          JOHN       10/1994     150  929
Atlantic         Hurricane          KATRINA    12/2005     150  902

Storm                               Name         Date     Wind mbar
-------------------------------------------------------------------
Atlantic         Hurricane          DEAN        4/2007     150  905
Atlantic         Hurricane          FELIX       6/2007     150  929
Atlantic         Hurricane          UNNAMED    10/1924     145  910
Eastern Pacific  Hurricane          KENNA      14/2002     145  913
Atlantic         Hurricane          ISABEL     13/2003     145  915
Atlantic         Hurricane          IVAN        9/2004     145  910
Atlantic         Hurricane          UNNAMED     4/1928     140  929
Atlantic         Hurricane          UNNAMED     4/1932     140     
Atlantic         Hurricane          UNNAMED     8/1933     140  940
Atlantic         Hurricane          UNNAMED    14/1933     140  929
Atlantic         Hurricane          UNNAMED     6/1938     140  940
Atlantic         Hurricane          CAROL       4/1953     140  929
Atlantic         Hurricane          HATTIE      9/1961     140  920
Atlantic         Hurricane          BEULAH     13/1967     140  923
Atlantic         Hurricane          EDITH      13/1971     140  943

...

Sort by pressure:

Storm                               Name         Date     Wind mbar
-------------------------------------------------------------------
Eastern Pacific  Hurricane          PATRICIA   20/2015     185  872
Atlantic         Hurricane          WILMA      25/2005     160  882
Atlantic         Hurricane          GILBERT     8/1988     160  888
Atlantic         Hurricane          UNNAMED     3/1935     160  892
Atlantic         Hurricane          RITA       18/2005     155  895
Atlantic         Hurricane          ALLEN       4/1980     165  899
Atlantic         Hurricane          CAMILLE     9/1969     150  900
Central Pacific  Hurricane          IOKE        1/2006     140  900
Eastern Pacific  Hurricane          LINDA      14/1997     160  902
Atlantic         Hurricane          KATRINA    12/2005     150  902
Atlantic         Hurricane          DEAN        4/2007     150  905
Atlantic         Hurricane          MITCH      13/1998     155  905
Eastern Pacific  Hurricane          RICK       20/2009     155  906
Atlantic         Hurricane          UNNAMED    10/1924     145  910
Atlantic         Hurricane          IVAN        9/2004     145  910
Eastern Pacific  Hurricane          KENNA      14/2002     145  913
Atlantic         Hurricane          JANET      10/1955     150  914
Atlantic         Hurricane          ISABEL     13/2003     145  915
Eastern Pacific  Hurricane          AVA         1/1973     140  915
Atlantic         Hurricane          OPAL       17/1995     130  916

Storm                               Name         Date     Wind mbar
-------------------------------------------------------------------
Atlantic         Hurricane          UNNAMED    14/1932     150  918
Atlantic         Hurricane          HUGO       11/1989     140  918
Eastern Pacific  Hurricane          GENEVIEVE   7/2014     140  918
Eastern Pacific  Hurricane          MARIE      13/2014     140  918
Eastern Pacific  Hurricane          ODILE      15/2014     120  918
Eastern Pacific  Hurricane          GUILLERMO   9/1997     140  919
Atlantic         Hurricane          HATTIE      9/1961     140  920
Eastern Pacific  Hurricane          GILMA       7/1994     140  920

...
Implementation Hints

Focus first on getting the data read in, and printed out. Then work on the sorting.
Other Points

You should have a source code file for main() and all the non-member functions. You should have a source code file for the implementation of the Storm class methods. You should have a header file for the the Storm class.
Although they are short, none of your class methods should be inline.
Your header file is required to have header guards.
Use const as appropriate, both on methods and function arguments.
Use references appropriately.
Of course, a Makefile is required for this assignment.
Symbolic constants should be used to avoid magic numbers. You should use const to make your symbolic constants.
The name of your source code file containing main should be assign5.cc.
Function prototypes are required for all functions you write (except main() of course)
Programs that do not compile on turing/hopper automatically receive 0 points.
Submit your program using the electronic submission guidelines.
