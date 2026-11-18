#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern undefined4 DAT_004fa4fc;

// USA 004FA420 <- EU 004FA3F8 (Ghidra, non-matching)
// GLOBAL DAT_004fa4fc undefined4

void func_004FA420(void)

{
  _Alignas(8) unsigned char albw_frame[0x50]; /* entry_sp - 0x0 .. entry_sp + 0x50 */
#define stack0x00000000 (*(undefined4 *)(albw_frame + 0x0))
#define stack0x00000010 (*(undefined4 *)(albw_frame + 0x10))
  float *unaff_r4;
  float *unaff_r5;
  #define in_stack_00000000 (*(float *)(albw_frame + 0x0)) /* V4: frame slot (callee-filled) */
  undefined4 in_stack_00000008;
  float fStack00000010;
  undefined4 uStack00000014;
  undefined4 uStack00000018;
  
  func_00115C70(&stack0x00000000,unaff_r4,unaff_r5);
  fStack00000010 = in_stack_00000000;
  uStack00000018 = in_stack_00000008;
  uStack00000014 = DAT_004fa4fc;
  func_00115DC8(&stack0x00000010);
  return;
}

