#include <string.h>
#include <stdio.h>
#include <cstdlib>
#include <stdlib.h>
#include <iostream>

#include "part.h"
#include "chars.h"

using namespace std;

/* String Format:
 * {id}[US]{name}[US]{qty}[US]{parttype}[US]{price}[US]{producer}[US]{description}[RS]
 */

Part stringToPart(string str){
    
    char* partStr = (char*) str.c_str();
    
    int startPos = 0;
    int endPos = 0;
    
//    printf("Calculating Id\n");
    char* id = new char();
    for(startPos = endPos; partStr[endPos] != UNIT_SEPARATOR; endPos++){
        id[endPos - startPos] = partStr[endPos];
    }
//    printf("StartPos: %d\nEndPos: %d\n", startPos, endPos);
//    printf("Id: %s\n", id);
    
//    printf("Calculating Name\n");
    char* name = new char();
    for(startPos = ++endPos; partStr[endPos] != UNIT_SEPARATOR; endPos++){
        name[endPos - startPos] = partStr[endPos];
    }
//    printf("StartPos: %d\nEndPos: %d\n", startPos, endPos);
//    printf("Name: %s\n", name);
    
//    printf("Calculating Qty\n");
    char* qty = new char();
    for(startPos = ++endPos; partStr[endPos] != UNIT_SEPARATOR; endPos++){
        qty[endPos - startPos] = partStr[endPos];
    }
//    printf("StartPos: %d\nEndPos: %d\n", startPos, endPos);
//    printf("Qty: %s\n", qty);
    
//    printf("Calculating Type\n");
    char* type = new char();
    for(startPos = ++endPos; partStr[endPos] != UNIT_SEPARATOR; endPos++){
        type[endPos - startPos] = partStr[endPos];
    }
//    printf("StartPos: %d\nEndPos: %d\n", startPos, endPos);
//    printf("Type: %s\n", type);
    
//    printf("Calculating Price\n");
    char* price = new char();
    for(startPos = ++endPos; partStr[endPos] != UNIT_SEPARATOR; endPos++){
        price[endPos - startPos] = partStr[endPos];
    }
//    printf("StartPos: %d\nEndPos: %d\n", startPos, endPos);
//    printf("Price: %s\n", price);
    
//    printf("Calculating Producer\n");
    char* producer = new char();
    for(startPos = ++endPos; partStr[endPos] != UNIT_SEPARATOR; endPos++){
        producer[endPos - startPos] = partStr[endPos];
    }
//    printf("StartPos: %d\nEndPos: %d\n", startPos, endPos);
//    printf("Producer: %s\n", producer);
    
//    printf("Calculating Description\n");
    char* description = new char();
    for(startPos = ++endPos; partStr[endPos] != RECORD_SEPARATOR; endPos++){
        description[endPos - startPos] = partStr[endPos];
    }
//    printf("StartPos: %d\nEndPos: %d\n", startPos, endPos);
//    printf("Description: %s\n", description);
    
    Part part;
    
//    printf("Setting id\n");
    part.id = string(id);
//    printf("Setting name\n");
    part.partName = string(name);
//    printf("Setting qty\n");
    part.qty = strtol(qty, NULL, 10);
//    printf("Setting type\n");
    part.partType = string(type);
//    printf("Setting price\n");
    part.price = strtol(price, NULL, 10);
//    printf("Setting producer\n");
    part.producer = string(producer);
//    printf("Setting description\n");
    part.description = string(description);
    
//    printf("Finished setting\n");
    
    return part;
}

string partToString(Part part) {
    string str;

    char* id = (char*) part.id.c_str();

    char* name = (char*) part.partName.c_str();

    char qty[100];
    sprintf(qty, "%d", part.qty);

    char* type = (char*) part.partType.c_str();

    char price[100];
    sprintf(price, "%g", part.price);

    char* producer = (char*) part.producer.c_str();

    char* description = (char*) part.description.c_str();

    str = string(id)          + UNIT_SEPARATOR + 
          string(name)        + UNIT_SEPARATOR + 
          string(qty)         + UNIT_SEPARATOR + 
          string(type)        + UNIT_SEPARATOR + 
          string(price)       + UNIT_SEPARATOR + 
          string(producer)    + UNIT_SEPARATOR + 
          string(description) + RECORD_SEPARATOR;

    return str;
}