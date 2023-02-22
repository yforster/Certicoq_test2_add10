#include "gc_stack.h"
#include <stdio.h>

int main()
{
  struct thread_info* tinfo = make_tinfo();
  
  
  
  long i = body(tinfo);
  printf("Body: %ld \n",i);
  
  return 0;
}
