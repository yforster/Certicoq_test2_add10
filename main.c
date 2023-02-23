#include "gc_stack.h"
#include <stdio.h>

extern value make_Coq_Init_Datatypes_nat_O (void);
extern void* call(struct thread_info *tinfo, unsigned long long clos, unsigned long long arg0);
extern void print_Coq_Init_Datatypes_nat(unsigned long long);

_Bool is_ptr(value s) {
  return (_Bool) Is_block(s);
}

/*In this program we will try to add 10 to one number. 
 * Example: n = n + 10 */
int main()
{
  struct thread_info* tinfo = make_tinfo();

  value zero = make_Coq_Init_Datatypes_nat_O();

  /*We don't really know how to use the certicoq converted functions 
   * to implement this add 10 program.*/
  
  long i = body(tinfo);

  value add = tinfo -> args [1];

  value v = call(tinfo,add,zero);

  print_Coq_Init_Datatypes_nat(v);
  
  return 0;
}
