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