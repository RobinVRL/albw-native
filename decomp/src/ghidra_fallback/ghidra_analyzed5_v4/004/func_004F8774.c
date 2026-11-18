#include "ghidra_types.h"

extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_004FC798(int param_1,int param_2,undefined1 *param_3,float fparam_0);
extern float DAT_004f87cc;

// USA 004F8774 <- EU 004F874C (Ghidra, non-matching)
// GLOBAL DAT_004f87cc float

/* WARNING: Variable defined which should be unmapped: objStack_20 */

void func_004F8774(int param_1,uint param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined1 in_stack_00000000;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define objStack_20 ((uint *)(albw_frame + 0x0))
  *(undefined4 *)(param_1 + 0x4e0) =
       *(undefined4 *)(*(int *)(param_1 + 0x2d0) + 0x1c8 + param_3 * 4);
  objStack_20[1] = 0;
  objStack_20[2] = 0;
  objStack_20[0] = 1;
  iVar1 = func_0014E428(param_1,param_2 | 1,param_3,param_4,1,0,0);
  *(int *)(param_1 + 0x40c) = iVar1;
  objStack_20[0] = CONCAT31((*(undefined4 *)((char *)&objStack_20[0] + 1) & 0xFFFFFF),in_stack_00000000) | 4;
  func_004FC798(param_1 + 0x5a8,iVar1,(undefined1 *)objStack_20,DAT_004f87cc);
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x400;
  return;
}

