/* 
 * File:   database.h
 * Author: tim
 *
 * Created on December 14, 2014, 8:39 PM
 */

#ifndef DATABASE_H
#define	DATABASE_H

// Add one or more parts to the database file, keeping others there. Returns 1 if successfull, 0 if there was an error
int add(Part);
int add(Part*);

// Write all of these parts to the database file, overwriting others. Returns 1 if successfull, 0 if there was an error
int write(Part*);

// Get array of all parts currently in the database file
Part* read();

// Check if a part exists. 1 = true, 0 = false
int exists(Part);

// Remove a part from the database file. Returns 1 if successfull, 0 if the part was not found
int remove(Part);

// Clear the database file, leaving nothing left
void clear();

// Open the database file to be used. Returns 1 if successfull, 0 if there was an error opening the file.
int openFile(char*);

// Close the database file
int closeFile();

#endif	/* DATABASE_H */

