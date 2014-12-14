/* 
 * File:   main.cpp
 * Author: ekong
 *
 * Created on December 10, 2014, 6:11 PM
 */

#include <cstdlib>
#include <iostream>
#include <stdio.h>

#include "part.h"
#include "partConverter.h"

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
    
    // Testing for partToString()
    
    Part testPart;
    testPart.description = "TestDescription";
    testPart.id = "ABC123";
    testPart.partName = "TestPart";
    testPart.partType = "Test";
    testPart.price = 100;
    testPart.producer = "TestPartsUSA";
    testPart.qty = 5;
    
    string partStr;
    
    partStr = partToString(testPart);
    
    printf("%s", partStr.c_str());
    
    return 0;
}

