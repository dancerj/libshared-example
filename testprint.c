/* 
 * test program to test basic shared library functionality
 */
#include <stdio.h>
#include <assert.h>
#include "shared.h"

int main(int argc, char **argv)
{
  shareddata* dat;
  
  shared_version();
  dat = shared_new();  
  assert (dat);
  dat->flag1=10;
  dat->flag2=20;
  shared_print(dat);
  if(shared_free(dat))
    exit (1);
  exit (0);
}
