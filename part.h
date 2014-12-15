/* 
 * File:   part.h
 * Author: tim
 *
 * Created on December 14, 2014, 9:38 AM
 */

#ifndef PART_H
#define	PART_H

using namespace std;

struct Part
{
public:
    string id;
    string partName;
    int qty;
    string partType;
    double price;
    string producer;
    string description;

    //Part();
    string toString();
    
};

#endif	/* PART_H */

