/*
 * Example shared library source code. 
 */


#include <stdio.h>
#include <assert.h>
#include "shared.h"

void shared_version(void)
{
  printf ("%s %s\n", PACKAGE, VERSION);
  
}

void shared_print(shareddata*s)
{
  assert(s);
  printf("%i\n%i\n%s\n", 
	 s->flag1,
	 s->flag2,
	 s?s->info:"(NULL)");
}

shareddata* shared_new(void)
{
  shareddata* s = (shareddata*)malloc(sizeof(shareddata));
  if (s)
    {
      s->flag1=0;
      s->flag2=0;
      s->info=NULL;
    }
  return s;
}

int shared_free(shareddata* s)
{
  if (!s) 
    return 1;
  free(s);
  return 0;
}
