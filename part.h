/* 
 * File:   part.h
 * Author: rich
 *
 * Created on December 14, 2014, 9:38 AM
 */

#ifndef PART_H
#define	PART_H

struct Part
{
public:
    int partNum;
    char* partName;
    int qty;
    char* partType;
    double price;
    char* producer;
    char* description;

    Part();
    string toString();
    
};

#endif	/* PART_H */

