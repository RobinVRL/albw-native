#include "ghidra_types.h"

extern int func_00489F28(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
extern int func_0057E2F8(int param_1,int *param_2,int *param_3);
extern int DAT_0048e5f4;

// USA 0048E59C <- EU 0048E574 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4
// GLOBAL DAT_0048e5f4 int

undefined4 func_0048E59C(int param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  undefined4 uVar2;
  _Alignas(8) unsigned char albw_frame[0x130];
  #define local_124 (*(int *)(albw_frame + 0xc))
  #define local_120 (*(undefined1 * *)(albw_frame + 0x10))
  #define uStack_11c (*(undefined4 *)(albw_frame + 0x14))
  #define local_118 ((undefined1 *)(albw_frame + 0x18))
  #define uStack_19 (*(undefined1 *)(albw_frame + 0x117))
  local_120 = local_118;
  uStack_11c = 0x100;
  uStack_19 = 0;
  local_118[0] = 0;
  local_124 = DAT_0048e5f4;
  piVar1 = (int *)func_0057E2F8(param_1,param_3,&local_124);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = func_00489F28(piVar1,param_2,&local_124,param_4,param_5);
  }
  return uVar2;
}

