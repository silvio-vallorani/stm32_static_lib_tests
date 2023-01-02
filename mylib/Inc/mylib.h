/*
 * mylib.h
 *
 *  Created on: Dec 20, 2022
 *      Author: svallorani
 */

#ifndef MYLIB_H_
#define MYLIB_H_

int __myMul(int, int);
__attribute__ ((section (".mysum_sect"))) int __mySum(int, int);
void *myMemcpy (void *__restrict, const void *__restrict, size_t);
int getLibPlutoValue (void);

extern const char mylongstring[256];
extern int pippo;

extern int lib_pluto;

#endif /* MYLIB_H_ */
