CC=g++  -std=c++11
assign5:        assign5.o       storm.o printhead.o     iterprint.o     windsort.o      airsort.o       datesort.o
        $(CC)   -Wall   -g      assign5.o       storm.o printhead.o     iterprint.o     windsort.o      airsort.o       datesort.o      -o      main
assign5.o:      assign5.cc      assign5.h       printhead.h     iterprint.h
        $(CC)   -Wall   -c      assign5.cc
storm.o:        storm.cc        storm.h
        $(CC)   -Wall   -c      storm.cc
printhead.o:    printhead.cc    printhead.h
        $(CC)   -Wall   -c      printhead.cc
iterprint.o:    iterprint.cc    iterprint.h     printhead.h
        $(CC)   -Wall   -c      iterprint.cc
windsort.o:     windsort.cc     windsort.h      storm.h
        $(CC)   -Wall   -c      windsort.cc
airsort.o:      airsort.cc      airsort.h       storm.h
        $(CC)   -Wall   -c      airsort.cc
datesort.i:     datesort.cc     datesort.h      storm.h
        $(CC)   -Wall   -c      datesort.cc
clean:
        rm      *.o
