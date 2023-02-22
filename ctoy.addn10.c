#include "prim_floats.h"
#include "prim_int63.h"
#include "coq_c_ffi.h"

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
extern void ctoydaddn10_wrapper_106(struct thread_info *, unsigned long long, unsigned long long);
extern void ctoydaddn10_known_105(struct thread_info *, unsigned long long, unsigned long long);
extern void f_case_known_104(struct thread_info *, unsigned long long);
extern void CoqdInitdNatdadd_wrapper_103(struct thread_info *, unsigned long long, unsigned long long);
extern void y_wrapper_102(struct thread_info *, unsigned long long, unsigned long long);
extern void add_uncurried_known_101(struct thread_info *, unsigned long long, unsigned long long);
extern unsigned long long body(struct thread_info *);
extern void garbage_collect(struct thread_info *);
extern _Bool is_ptr(unsigned long long);
void ctoydaddn10_wrapper_106(struct thread_info *, unsigned long long, unsigned long long);
void ctoydaddn10_known_105(struct thread_info *, unsigned long long, unsigned long long);
void f_case_known_104(struct thread_info *, unsigned long long);
void CoqdInitdNatdadd_wrapper_103(struct thread_info *, unsigned long long, unsigned long long);
void y_wrapper_102(struct thread_info *, unsigned long long, unsigned long long);
void add_uncurried_known_101(struct thread_info *, unsigned long long, unsigned long long);
unsigned long long body(struct thread_info *);
unsigned long long const body_info_159[2] = { 0LL, 0LL, };

unsigned long long const add_uncurried_known_info_158[4] = { 0LL, 2LL, 0LL,
  1LL, };

unsigned long long const y_wrapper_info_157[4] = { 0LL, 2LL, 0LL, 1LL, };

unsigned long long const CoqdInitdNatdadd_wrapper_info_156[4] = { 5LL, 2LL,
  0LL, 1LL, };

unsigned long long const f_case_known_info_155[3] = { 3LL, 1LL, 0LL, };

unsigned long long const ctoydaddn10_known_info_154[4] = { 0LL, 2LL, 0LL,
  1LL, };

unsigned long long const ctoydaddn10_wrapper_info_153[4] = { 0LL, 2LL, 0LL,
  1LL, };

void ctoydaddn10_wrapper_106(struct thread_info *$tinfo, unsigned long long $env_144, unsigned long long $n_145)
{
  struct stack_frame frame;
  unsigned long long root[2];
  register unsigned long long $mathcompdssreflectdssrnatdaddn_proj_147;
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
  $mathcompdssreflectdssrnatdaddn_proj_147 =
    *((unsigned long long *) $env_144 + 0LLU);
  $args = (*$tinfo).args;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  ((void (*)(struct thread_info *, unsigned long long, unsigned long long)) 
    ctoydaddn10_known_105)
    ($tinfo, $n_145, $mathcompdssreflectdssrnatdaddn_proj_147);
}

void ctoydaddn10_known_105(struct thread_info *$tinfo, unsigned long long $n_126, unsigned long long $mathcompdssreflectdssrnatdaddn_127)
{
  struct stack_frame frame;
  unsigned long long root[2];
  register unsigned long long $mathcompdssreflectdssrnatdaddn_code_128;
  register unsigned long long $mathcompdssreflectdssrnatdaddn_env_129;
  register unsigned long long $y_130;
  register unsigned long long $y_131;
  register unsigned long long $y_132;
  register unsigned long long $y_133;
  register unsigned long long $y_134;
  register unsigned long long $y_135;
  register unsigned long long $y_136;
  register unsigned long long $y_137;
  register unsigned long long $y_138;
  register unsigned long long $y_139;
  register unsigned long long $y_140;
  register unsigned long long $y_141;
  register unsigned long long $y_code_142;
  register unsigned long long $y_env_143;
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
  $mathcompdssreflectdssrnatdaddn_code_128 =
    *((unsigned long long *) $mathcompdssreflectdssrnatdaddn_127 + 0LLU);
  $mathcompdssreflectdssrnatdaddn_env_129 =
    *((unsigned long long *) $mathcompdssreflectdssrnatdaddn_127 + 1LLU);
  $args = (*$tinfo).args;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  /*skip*/;
  ((void (*)(struct thread_info *, unsigned long long, unsigned long long)) 
    $mathcompdssreflectdssrnatdaddn_code_128)
    ($tinfo, $mathcompdssreflectdssrnatdaddn_env_129, $n_126);
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $y_130 = *((unsigned long long *) $args + 1LLU);
  if (!(20LLU <= $limit - $alloc)) {
    *(root + 0LLU) = $y_130;
    frame.next = root + 1LLU;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 20LLU;
    garbage_collect($tinfo);
    $y_130 = *(root + 0LLU);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  /*skip*/;
  $y_131 = 1LLU;
  $y_132 = (unsigned long long) ($alloc + 1LLU);
  $alloc = $alloc + 2LLU;
  *((unsigned long long *) $y_132 + 18446744073709551615LLU) = 1024LLU;
  *((unsigned long long *) $y_132 + 0LLU) = $y_131;
  $y_133 = (unsigned long long) ($alloc + 1LLU);
  $alloc = $alloc + 2LLU;
  *((unsigned long long *) $y_133 + 18446744073709551615LLU) = 1024LLU;
  *((unsigned long long *) $y_133 + 0LLU) = $y_132;
  $y_134 = (unsigned long long) ($alloc + 1LLU);
  $alloc = $alloc + 2LLU;
  *((unsigned long long *) $y_134 + 18446744073709551615LLU) = 1024LLU;
  *((unsigned long long *) $y_134 + 0LLU) = $y_133;
  $y_135 = (unsigned long long) ($alloc + 1LLU);
  $alloc = $alloc + 2LLU;
  *((unsigned long long *) $y_135 + 18446744073709551615LLU) = 1024LLU;
  *((unsigned long long *) $y_135 + 0LLU) = $y_134;
  $y_136 = (unsigned long long) ($alloc + 1LLU);
  $alloc = $alloc + 2LLU;
  *((unsigned long long *) $y_136 + 18446744073709551615LLU) = 1024LLU;
  *((unsigned long long *) $y_136 + 0LLU) = $y_135;
  $y_137 = (unsigned long long) ($alloc + 1LLU);
  $alloc = $alloc + 2LLU;
  *((unsigned long long *) $y_137 + 18446744073709551615LLU) = 1024LLU;
  *((unsigned long long *) $y_137 + 0LLU) = $y_136;
  $y_138 = (unsigned long long) ($alloc + 1LLU);
  $alloc = $alloc + 2LLU;
  *((unsigned long long *) $y_138 + 18446744073709551615LLU) = 1024LLU;
  *((unsigned long long *) $y_138 + 0LLU) = $y_137;
  $y_139 = (unsigned long long) ($alloc + 1LLU);
  $alloc = $alloc + 2LLU;
  *((unsigned long long *) $y_139 + 18446744073709551615LLU) = 1024LLU;
  *((unsigned long long *) $y_139 + 0LLU) = $y_138;
  $y_140 = (unsigned long long) ($alloc + 1LLU);
  $alloc = $alloc + 2LLU;
  *((unsigned long long *) $y_140 + 18446744073709551615LLU) = 1024LLU;
  *((unsigned long long *) $y_140 + 0LLU) = $y_139;
  $y_141 = (unsigned long long) ($alloc + 1LLU);
  $alloc = $alloc + 2LLU;
  *((unsigned long long *) $y_141 + 18446744073709551615LLU) = 1024LLU;
  *((unsigned long long *) $y_141 + 0LLU) = $y_140;
  $y_code_142 = *((unsigned long long *) $y_130 + 0LLU);
  $y_env_143 = *((unsigned long long *) $y_130 + 1LLU);
  $args = (*$tinfo).args;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  ((void (*)(struct thread_info *, unsigned long long, unsigned long long)) 
    $y_code_142)
    ($tinfo, $y_env_143, $y_141);
}

void f_case_known_104(struct thread_info *$tinfo, unsigned long long $s_122)
{
  struct stack_frame frame;
  unsigned long long root[1];
  register unsigned long long $CoqdInitdNatdadd_wrapperbogus_env_123;
  register unsigned long long $CoqdInitdNatdadd_wrapper_clo_124;
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
  if (!(3LLU <= $limit - $alloc)) {
    *(root + 0LLU) = $s_122;
    frame.next = root + 1LLU;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 3LLU;
    garbage_collect($tinfo);
    $s_122 = *(root + 0LLU);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  if (($s_122 & 1) == 0) {
    switch (*((unsigned long long *) $s_122 + 18446744073709551615LLU)
              & 255LLU) {
      
    }
  } else {
    switch ($s_122 >> 1LLU) {
      default:
        $CoqdInitdNatdadd_wrapperbogus_env_123 = 1LLU;
        $CoqdInitdNatdadd_wrapper_clo_124 =
          (unsigned long long) ($alloc + 1LLU);
        $alloc = $alloc + 3LLU;
        *((unsigned long long *) $CoqdInitdNatdadd_wrapper_clo_124
           + 18446744073709551615LLU) =
          2048LLU;
        *((unsigned long long *) $CoqdInitdNatdadd_wrapper_clo_124 + 0LLU) =
          CoqdInitdNatdadd_wrapper_103;
        *((unsigned long long *) $CoqdInitdNatdadd_wrapper_clo_124 + 1LLU) =
          $CoqdInitdNatdadd_wrapperbogus_env_123;
        *($args + 1LLU) = $CoqdInitdNatdadd_wrapper_clo_124;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        break;
      
    }
  }
}

void CoqdInitdNatdadd_wrapper_103(struct thread_info *$tinfo, unsigned long long $env_117, unsigned long long $n_118)
{
  struct stack_frame frame;
  unsigned long long root[1];
  register unsigned long long $env_119;
  register unsigned long long $y_wrapper_clo_120;
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
  if (!(5LLU <= $limit - $alloc)) {
    *(root + 0LLU) = $n_118;
    frame.next = root + 1LLU;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 5LLU;
    garbage_collect($tinfo);
    $n_118 = *(root + 0LLU);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  $env_119 = (unsigned long long) ($alloc + 1LLU);
  $alloc = $alloc + 2LLU;
  *((unsigned long long *) $env_119 + 18446744073709551615LLU) = 1024LLU;
  *((unsigned long long *) $env_119 + 0LLU) = $n_118;
  $y_wrapper_clo_120 = (unsigned long long) ($alloc + 1LLU);
  $alloc = $alloc + 3LLU;
  *((unsigned long long *) $y_wrapper_clo_120 + 18446744073709551615LLU) =
    2048LLU;
  *((unsigned long long *) $y_wrapper_clo_120 + 0LLU) = y_wrapper_102;
  *((unsigned long long *) $y_wrapper_clo_120 + 1LLU) = $env_119;
  *($args + 1LLU) = $y_wrapper_clo_120;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
}

void y_wrapper_102(struct thread_info *$tinfo, unsigned long long $env_113, unsigned long long $m_114)
{
  struct stack_frame frame;
  unsigned long long root[2];
  register unsigned long long $n_proj_115;
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
  $n_proj_115 = *((unsigned long long *) $env_113 + 0LLU);
  $args = (*$tinfo).args;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  ((void (*)(struct thread_info *, unsigned long long, unsigned long long)) 
    add_uncurried_known_101)
    ($tinfo, $m_114, $n_proj_115);
}

void add_uncurried_known_101(struct thread_info *$tinfo, unsigned long long $m_108, unsigned long long $n_109)
{
  struct stack_frame frame;
  unsigned long long root[2];
  register unsigned long long $p_110;
  register unsigned long long $y_111;
  register unsigned long long $y_112;
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
  if (($n_109 & 1) == 0) {
    switch (*((unsigned long long *) $n_109 + 18446744073709551615LLU)
              & 255LLU) {
      default:
        $p_110 = *((unsigned long long *) $n_109 + 0LLU);
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        /*skip*/;
        ((void (*)(struct thread_info *, unsigned long long, unsigned long long)) 
          add_uncurried_known_101)
          ($tinfo, $m_108, $p_110);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        $y_111 = *((unsigned long long *) $args + 1LLU);
        if (!(2LLU <= $limit - $alloc)) {
          *(root + 0LLU) = $y_111;
          frame.next = root + 1LLU;
          (*$tinfo).fp = &frame;
          (*$tinfo).nalloc = 2LLU;
          garbage_collect($tinfo);
          $y_111 = *(root + 0LLU);
          (*$tinfo).fp = frame.prev;
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        /*skip*/;
        $y_112 = (unsigned long long) ($alloc + 1LLU);
        $alloc = $alloc + 2LLU;
        *((unsigned long long *) $y_112 + 18446744073709551615LLU) = 1024LLU;
        *((unsigned long long *) $y_112 + 0LLU) = $y_111;
        *($args + 1LLU) = $y_112;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        break;
      
    }
  } else {
    switch ($n_109 >> 1LLU) {
      default:
        *($args + 1LLU) = $m_108;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        break;
      
    }
  }
}

unsigned long long body(struct thread_info *$tinfo)
{
  struct stack_frame frame;
  unsigned long long root[1];
  register unsigned long long $y_149;
  register unsigned long long $mathcompdssreflectdssrnatdaddn_150;
  register unsigned long long $env_151;
  register unsigned long long $ctoydaddn10_wrapper_clo_152;
  register unsigned long long *$alloc;
  register unsigned long long *$limit;
  register unsigned long long *$args;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  $y_149 = 1LLU;
  $args = (*$tinfo).args;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  /*skip*/;
  ((void (*)(struct thread_info *, unsigned long long)) f_case_known_104)
    ($tinfo, $y_149);
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $mathcompdssreflectdssrnatdaddn_150 =
    *((unsigned long long *) $args + 1LLU);
  if (!(5LLU <= $limit - $alloc)) {
    *(root + 0LLU) = $mathcompdssreflectdssrnatdaddn_150;
    frame.next = root + 1LLU;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 5LLU;
    garbage_collect($tinfo);
    $mathcompdssreflectdssrnatdaddn_150 = *(root + 0LLU);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  /*skip*/;
  $env_151 = (unsigned long long) ($alloc + 1LLU);
  $alloc = $alloc + 2LLU;
  *((unsigned long long *) $env_151 + 18446744073709551615LLU) = 1024LLU;
  *((unsigned long long *) $env_151 + 0LLU) =
    $mathcompdssreflectdssrnatdaddn_150;
  $ctoydaddn10_wrapper_clo_152 = (unsigned long long) ($alloc + 1LLU);
  $alloc = $alloc + 3LLU;
  *((unsigned long long *) $ctoydaddn10_wrapper_clo_152
     + 18446744073709551615LLU) =
    2048LLU;
  *((unsigned long long *) $ctoydaddn10_wrapper_clo_152 + 0LLU) =
    ctoydaddn10_wrapper_106;
  *((unsigned long long *) $ctoydaddn10_wrapper_clo_152 + 1LLU) = $env_151;
  *($args + 1LLU) = $ctoydaddn10_wrapper_clo_152;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  return *((unsigned long long *) (*$tinfo).args + 1LLU);
}


