#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_003753f0;
extern undefined4 DAT_003753f4;
extern int DAT_003753f8;
extern int *DAT_003753fc;
extern uint *DAT_00375400;
extern undefined4 *DAT_00375404;
extern undefined4 DAT_00375408;

// USA 00375314 <- EU 003752F0 (Ghidra, non-matching)
// GLOBAL DAT_003753f0 int *
// GLOBAL DAT_003753f4 undefined4
// GLOBAL DAT_003753f8 int
// GLOBAL DAT_003753fc int *
// GLOBAL DAT_00375400 uint *
// GLOBAL DAT_00375404 undefined4 *
// GLOBAL DAT_00375408 undefined4

void func_00375314(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(undefined4 *)(albw_frame + 0x4))
  param_1[0x11b] = param_1[0xf4];
  param_1[0x11c] = param_1[0xf5];
  param_1[0x11d] = param_1[0xf6];
  piVar2 = *(int **)(*DAT_003753f0 + 0x1c);
  iVar3 = *piVar2;
  iVar4 = piVar2[1];
  param_1[0x11a] = piVar2[2];
  param_1[0x118] = iVar3;
  param_1[0x119] = iVar4;
  local_10 = DAT_003753f8;
  param_1[0x119] = param_1[0xf5];
  param_1[0x11c] = param_1[0xf5];
  local_c = DAT_003753f4;
  func_00150A84(param_1,&local_10,0);
  puVar1 = (undefined4 *)func_0052FBA0(*DAT_003753fc + 0x3dbbc,param_1[0x14]);
  if (((*DAT_00375400 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_00375400), iVar3 != 0)) {
    *DAT_00375404 = DAT_00375408;
  }
  if ((puVar1 == (undefined4 *)0x0) ||
     (iVar3 = (**(code **)*puVar1)(puVar1,DAT_00375404), iVar3 == 0)) {
    puVar1 = (undefined4 *)0x0;
  }
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[0x31d] = puVar1[0x31d] + 1;
  }
  return;
}

