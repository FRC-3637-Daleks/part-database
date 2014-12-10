/* 
 * File:   main.cpp
 * Author: ekong
 *
 * Created on December 10, 2014, 6:11 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

struct Part
{
public:
    int partNum;
    string partName;
    int qty;
    string partType;
    double price;
    string producer;
    string description;

    Part();
    string toString();
    
};

// Global Methods
void add();
Part get();
string search();

int main(int argc, char** argv) {

    return 0;
}

