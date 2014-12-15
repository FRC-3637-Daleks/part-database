/* 
 * File:   main.cpp
 * Author: ekong
 *
 * Created on December 10, 2014, 6:11 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

struct Part
{
public:
    string partNum;
    string partName;
    int qty;
    string partType;
    double price;
    string producer;
    string description;

    Part(string, string, int, string, double, string, string);
    string toString();
    
};

Part::Part(string num, string name, int newQty, string type, double newPrice, string prod, string desc)
{
    partNum = num;
    partName = name;
    qty = newQty;
    partType = type;
    price = newPrice;
    producer = prod;
    description = desc;
}

string Part::toString()
{
    ostringstream oss;
    oss << partNum << " " << partName << " " << qty << " " << partType << " " << price << " " << producer << " " << description;
    return oss.str();
}

// Global Methods
void command(char str[]) //Accepts string that contains command and all information
{
    int size = strlen(str) + 1;         // Makes a copy of the information so that we can modify it
    char text[size];
    for (int i = 0; i < size; i++)
    {
        text[i] = str[i];
    }
    
    switch (text[0])
    {
        case 'A':
        {
            text[0] = '!';
            string info[7];                     // Breaks list of characters into tokens and puts it into an array 
            char * tok;
            tok = strtok (text, "!¥");
            for (int i = 0; tok != NULL; i++)
            {
                info[i] = tok;
                tok = strtok (NULL, "!¥");
            }                                   //
            
            Part part1 (info[0], info[1], atoi(info[2].c_str()), info[3], atof(info[4].c_str()), info[5], info[6]);
            //Creates a new Part
            break;
        }
        case 'M':
        {
            text[0] = '!';
            break;
        }
        case 'D':
        {
            text[0] = '!';
            break;
        }
        case 'G':
        {
            text[0] = '!';
            break;
        }
        case 'S':
        {
            text[0] = '!';
            break;
        }
    }
};
void add(); //Creates a new part
Part get(); //Searches id or name
Part search(); //Should return list of all parts that match arguments, return vector of part pointers

int main(int argc, char** argv)
{
    char str1[] = "A¥123¥Bracket¥10¥Metal¥10.5¥HCRHS¥Testing";
    command(str1);
    return 0;
}

