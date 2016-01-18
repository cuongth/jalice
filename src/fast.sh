#!/bin/sh
echo "This is a cool little script to compile j-alice ULTRA fast"
rm -vf fast.cpp
( for file in *.cpp ; do echo -e '/*** '$file" ***/\n" ; cat $file ; echo -e "\n" ; done ) > fast.txt 
mv fast.txt -v fast.cpp
time g++ $CXXFLAGS fast.cpp

