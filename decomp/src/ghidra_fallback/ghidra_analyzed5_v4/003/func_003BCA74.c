#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00462CB0(undefined4 *param_1);
extern int func_0048E140(int param_1,int *param_2,int param_3);
extern int func_004B9958(int param_1,undefined4 param_2);
extern int DAT_003bcad8;
extern undefined4 DAT_003bcadc;
extern char s_TaskCircleWipe_003bcac8[];

// USA 003BCA74 <- EU 003BCA50 (Ghidra, non-matching)
// GLOBAL DAT_003bcad8 int
// GLOBAL DAT_003bcadc undefined4
// GLOBAL s_TaskCircleWipe_003bcac8 string

undefined4 * func_003BCA74(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define iStack_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  iStack_18 = DAT_003bcad8;
  local_14 = s_TaskCircleWipe_003bcac8;
  (**(code **)(DAT_003bcad8 + 8))(&iStack_18);
  puVar2 = func_0048E140(param_1,param_2,(int)local_14);
  uVar1 = DAT_003bcadc;
  puVar2[0x7b] = 0;
  *puVar2 = uVar1;
  puVar3 = (undefined4 *)func_0010BAB4(0x98);
  piVar4 = (int *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    piVar4 = func_00462CB0(puVar3);
  }
  puVar2[0x7b] = piVar4;
  func_004B9958((int)piVar4,8);
  return puVar2;
}

