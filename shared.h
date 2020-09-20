/*
 * Example shared library header file
 */

#ifndef __SHARED_H_
#define __SHARED_H_
typedef struct shareddata 
{
  int flag1;
  int flag2;
  char* info;
} shareddata;


typedef shareddata* shareddatap;

shareddata* shared_new ();

/* This function will return 0 if successful to free the data */
int shared_free (shareddata*);

/* prints out the data structure as debug */
void shared_print(shareddata*);


/* function to print out the shared library version */
void shared_version(void);

#endif 
