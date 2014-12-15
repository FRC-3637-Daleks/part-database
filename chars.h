/* 
 * File:   chars.h
 * Author: tim
 *
 * Created on December 14, 2014, 10:05 AM
 */

#ifndef CHARS_H
#define	CHARS_H

//Uncomment for the printable separators
#define DEBUG

#ifdef DEBUG

#define UNIT_SEPARATOR '|'
#define GROUP_SEPARATOR '#'
#define RECORD_SEPARATOR '$'

#else

#define UNIT_SEPARATOR '\037'
#define GROUP_SEPARATOR '\035'
#define RECORD_SEPARATOR '\036'

#endif

#endif	/* CHARS_H */

