/* 
 * File:   main.cpp
 * Author: ekong
 *
 * Created on December 10, 2014, 6:11 PM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <stdio.h>

#include "part.h"
#include "partConverter.h"
#include "database.h"

using namespace std;

//struct Part
//{
//public:
//    int partNum;
//    string partName;
//    int qty;
//    string partType;
//    double price;
//    string producer;
//    string description;
//
//    Part();
//    string toString();
//    
//};

// Global Methods
void add();
Part get();
string search();

int main(int argc, char** argv) {

    Part testPart;
    testPart.description = "A Part for testing";
    testPart.id = "123ABC";
    testPart.partName = "Test Part";
    testPart.partType = "Testing";
    testPart.price = 5;
    testPart.producer = "Test Parts USA";
    testPart.qty = 10;

    Part testPart2;
    testPart2.description = "A Part for testing";
    testPart2.id = "456DEF";
    testPart2.partName = "Test Part 2";
    testPart2.partType = "Testing";
    testPart2.price = 6;
    testPart2.producer = "Test Parts USA";
    testPart2.qty = 2;
    
    openFile("Test.txt");
    //add(testPart);
    //add(testPart2);
    read();

    return 0;
}

