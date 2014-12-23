
#include <iostream>
#include <fstream>
#include <string.h>

#include "part.h"
#include "partConverter.h"
#include "chars.h"
#include "max_values.h"

string path;
fstream file;

void openOut() {
    printf("Opening Outfile\n");
    file.open(path.c_str());
}

void closeOut() {
    printf("Closing Outfile\n");
    file.flush();
    file.close();
}

void openIn() {
    printf("Opening Infile\n");
    //inFile.open(file.c_str());
}

void closeIn() {
    printf("Closing Infile\n");
    //inFile.close();
}

int openFile(char* newPath) {
    if (file.is_open()) {
        printf("Closing %s\n", newPath);
        file.close();
    }
    printf("Opening %s\n", newPath);
    path = newPath;
    file.open(path.c_str());
    if (!file) {
        printf("While opening a file an error is encountered\n");
        return 1;
    } else {
        printf("File is successfully opened\n");
        return 0;
    }
}

int closeFile() {
    if (file.is_open()) {
        printf("Closing %s\n", path.c_str());
        file.close();
    }
}

int add(Part part) {
    //openOut();
    string partstring = partToString(part);
    printf("Adding %s\n", partstring.c_str());
    file << partstring + "\n";
    //closeOut();
}

int write(Part* parts) {

}

Part* read() {
    printf("Reading %s\n", path.c_str());
    Part parts[MAX_LINES_PER_FILE];
    //openOut();
    int i = 0;
    while (!file.eof()) {
        string in;
        string tempIn;
        do {
            file >> tempIn;
            in = in + tempIn + " ";
            printf("Length: %d\n", tempIn.length());
            if(tempIn.length() < 1)
                break;
        } while (tempIn.at(tempIn.length() - 1) != RECORD_SEPARATOR);
        printf("Read: %s\n", in.c_str());
        Part tempPart;
        //tempPart = stringToPart(in);
        //parts[i] = tempPart;
        i++;
    }

}