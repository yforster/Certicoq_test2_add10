#include "/home/yannick/research/certicoq/plugin/runtime/prim_floats.h"
#include "/home/yannick/research/certicoq/plugin/runtime/prim_int63.h"
#include "/home/yannick/research/certicoq/plugin/runtime/coq_c_ffi.h"

struct stack_frame;
struct thread_info;
struct stack_frame {
  unsigned long long *next;
  unsigned long long *root;
  struct stack_frame *prev;
};

struct thread_info {
  unsigned long long *alloc;
  unsigned long long *limit;
  struct heap *heap;
  unsigned long long args[1024];
  struct stack_frame *fp;
  unsigned long long nalloc;
};

extern struct thread_info *make_tinfo(void);
extern unsigned long long *export(struct thread_info *);
extern void ctoydaddn10_wrapper_103(struct thread_info *, unsigned long long, unsigned long long);
extern void add_uncurried_known_102(struct thread_info *, unsigned long long, unsigned long long);
extern void ctoydaddn10_known_101(struct thread_info *, unsigned long long);
extern unsigned long long body(struct thread_info *);
extern void garbage_collect(struct thread_info *);
extern _Bool is_ptr(unsigned long long);
void ctoydaddn10_wrapper_103(struct thread_info *, unsigned long long, unsigned long long);
void add_uncurried_known_102(struct thread_info *, unsigned long long, unsigned long long);
void ctoydaddn10_known_101(struct thread_info *, unsigned long long);
unsigned long long body(struct thread_info *);
unsigned long long const body_info_132[2] = { 3LL, 0LL, };

unsigned long long const ctoydaddn10_known_info_131[3] = { 20LL, 1LL, 0LL, };

unsigned long long const add_uncurried_known_info_130[4] = { 0LL, 2LL, 0LL,
  1LL, };

unsigned long long const ctoydaddn10_wrapper_info_129[4] = { 0LL, 2LL, 0LL,
  1LL, };

void ctoydaddn10_wrapper_103(struct thread_info *$tinfo, unsigned long long $env_124, unsigned long long $n_125)
{
  struct stack_frame frame;
  unsigned long long root[1];
  register unsigned long long *$alloc;
  register unsigned long long *$limit;
  register unsigned long long *$args;
  register _Bool $arg;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  $args = (*$tinfo).args;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  ((void (*)(struct thread_info *, unsigned long long)) ctoydaddn10_known_101)
    ($tinfo, $n_125);
}

void add_uncurried_known_102(struct thread_info *$tinfo, unsigned long long $m_119, unsigned long long $n_120)
{
  struct stack_frame frame;
  unsigned long long root[2];
  register unsigned long long $p_121;
  register unsigned long long $y_122;
  register unsigned long long $y_123;
  register unsigned long long *$alloc;
  register unsigned long long *$limit;
  register unsigned long long *$args;
  register _Bool $arg;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (($n_120 & 1) == 0) {
    switch (*((unsigned long long *) $n_120 + 18446744073709551615LLU)
              & 255LLU) {
      default:
        $p_121 = *((unsigned long long *) $n_120 + 0LLU);
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        /*skip*/;
        ((void (*)(struct thread_info *, unsigned long long, unsigned long long)) 
          add_uncurried_known_102)
          ($tinfo, $m_119, $p_121);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        $y_122 = *((unsigned long long *) $args + 1LLU);
        if (!(2LLU <= $limit - $alloc)) {
          *(root + 0LLU) = $y_122;
          frame.next = root + 1LLU;
          (*$tinfo).fp = &frame;
          (*$tinfo).nalloc = 2LLU;
          garbage_collect($tinfo);
          $y_122 = *(root + 0LLU);
          (*$tinfo).fp = frame.prev;
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        /*skip*/;
        $y_123 = (unsigned long long) ($alloc + 1LLU);
        $alloc = $alloc + 2LLU;
        *((unsigned long long *) $y_123 + 18446744073709551615LLU) = 1024LLU;
        *((unsigned long long *) $y_123 + 0LLU) = $y_122;
        *($args + 1LLU) = $y_123;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        break;
      
    }
  } else {
    switch ($n_120 >> 1LLU) {
      default:
        *($args + 1LLU) = $m_119;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        break;
      
    }
  }
}

void ctoydaddn10_known_101(struct thread_info *$tinfo, unsigned long long $n_105)
{
  struct stack_frame frame;
  unsigned long long root[1];
  register unsigned long long $y_107;
  register unsigned long long $y_108;
  register unsigned long long $y_109;
  register unsigned long long $y_110;
  register unsigned long long $y_111;
  register unsigned long long $y_112;
  register unsigned long long $y_113;
  register unsigned long long $y_114;
  register unsigned long long $y_115;
  register unsigned long long $y_116;
  register unsigned long long $y_117;
  register unsigned long long *$alloc;
  register unsigned long long *$limit;
  register unsigned long long *$args;
  register _Bool $arg;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (!(20LLU <= $limit - $alloc)) {
    *(root + 0LLU) = $n_105;
    frame.next = root + 1LLU;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 20LLU;
    garbage_collect($tinfo);
    $n_105 = *(root + 0LLU);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  $y_107 = 1LLU;
  $y_108 = (unsigned long long) ($alloc + 1LLU);
  $alloc = $alloc + 2LLU;
  *((unsigned long long *) $y_108 + 18446744073709551615LLU) = 1024LLU;
  *((unsigned long long *) $y_108 + 0LLU) = $y_107;
  $y_109 = (unsigned long long) ($alloc + 1LLU);
  $alloc = $alloc + 2LLU;
  *((unsigned long long *) $y_109 + 18446744073709551615LLU) = 1024LLU;
  *((unsigned long long *) $y_109 + 0LLU) = $y_108;
  $y_110 = (unsigned long long) ($alloc + 1LLU);
  $alloc = $alloc + 2LLU;
  *((unsigned long long *) $y_110 + 18446744073709551615LLU) = 1024LLU;
  *((unsigned long long *) $y_110 + 0LLU) = $y_109;
  $y_111 = (unsigned long long) ($alloc + 1LLU);
  $alloc = $alloc + 2LLU;
  *((unsigned long long *) $y_111 + 18446744073709551615LLU) = 1024LLU;
  *((unsigned long long *) $y_111 + 0LLU) = $y_110;
  $y_112 = (unsigned long long) ($alloc + 1LLU);
  $alloc = $alloc + 2LLU;
  *((unsigned long long *) $y_112 + 18446744073709551615LLU) = 1024LLU;
  *((unsigned long long *) $y_112 + 0LLU) = $y_111;
  $y_113 = (unsigned long long) ($alloc + 1LLU);
  $alloc = $alloc + 2LLU;
  *((unsigned long long *) $y_113 + 18446744073709551615LLU) = 1024LLU;
  *((unsigned long long *) $y_113 + 0LLU) = $y_112;
  $y_114 = (unsigned long long) ($alloc + 1LLU);
  $alloc = $alloc + 2LLU;
  *((unsigned long long *) $y_114 + 18446744073709551615LLU) = 1024LLU;
  *((unsigned long long *) $y_114 + 0LLU) = $y_113;
  $y_115 = (unsigned long long) ($alloc + 1LLU);
  $alloc = $alloc + 2LLU;
  *((unsigned long long *) $y_115 + 18446744073709551615LLU) = 1024LLU;
  *((unsigned long long *) $y_115 + 0LLU) = $y_114;
  $y_116 = (unsigned long long) ($alloc + 1LLU);
  $alloc = $alloc + 2LLU;
  *((unsigned long long *) $y_116 + 18446744073709551615LLU) = 1024LLU;
  *((unsigned long long *) $y_116 + 0LLU) = $y_115;
  $y_117 = (unsigned long long) ($alloc + 1LLU);
  $alloc = $alloc + 2LLU;
  *((unsigned long long *) $y_117 + 18446744073709551615LLU) = 1024LLU;
  *((unsigned long long *) $y_117 + 0LLU) = $y_116;
  $args = (*$tinfo).args;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  ((void (*)(struct thread_info *, unsigned long long, unsigned long long)) 
    add_uncurried_known_102)
    ($tinfo, $y_117, $n_105);
}

unsigned long long body(struct thread_info *$tinfo)
{
  struct stack_frame frame;
  unsigned long long root[0];
  register unsigned long long $env_127;
  register unsigned long long $ctoydaddn10_wrapper_clo_128;
  register unsigned long long *$alloc;
  register unsigned long long *$limit;
  register unsigned long long *$args;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (!(3LLU <= $limit - $alloc)) {
    /*skip*/;
    (*$tinfo).nalloc = 3LLU;
    garbage_collect($tinfo);
    /*skip*/;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  $env_127 = 1LLU;
  $ctoydaddn10_wrapper_clo_128 = (unsigned long long) ($alloc + 1LLU);
  $alloc = $alloc + 3LLU;
  *((unsigned long long *) $ctoydaddn10_wrapper_clo_128
     + 18446744073709551615LLU) =
    2048LLU;
  *((unsigned long long *) $ctoydaddn10_wrapper_clo_128 + 0LLU) =
    ctoydaddn10_wrapper_103;
  *((unsigned long long *) $ctoydaddn10_wrapper_clo_128 + 1LLU) = $env_127;
  *($args + 1LLU) = $ctoydaddn10_wrapper_clo_128;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  return *((unsigned long long *) (*$tinfo).args + 1LLU);
}


