#include "gc_stack.h"
#include <stdio.h>


/*In this program we will try to add 10 to one number. 
 * Example: n = n + 10 */
int main()
{
  struct thread_info* tinfo = make_tinfo();
  
  /*We don't really know how to use the certicoq converted functions 
   * to implement this add 10 program.*/
  
  long i = body(tinfo);
  printf("Body: %ld \n",i);
  
  return 0;
}
