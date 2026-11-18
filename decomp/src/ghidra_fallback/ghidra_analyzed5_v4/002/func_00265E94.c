#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_004D80EC(float *param_1,float *param_2,int param_3);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_00265f8c;
extern uint *DAT_00265f90;
extern undefined4 *DAT_00265f94;
extern undefined4 DAT_00265f98;

// USA 00265E94 <- EU 00265EBC (Ghidra, non-matching)
// GLOBAL DAT_00265f8c int *
// GLOBAL DAT_00265f90 uint *
// GLOBAL DAT_00265f94 undefined4 *
// GLOBAL DAT_00265f98 undefined4

undefined4 func_00265E94(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)func_0052FBA0(*DAT_00265f8c + 0x3dbbc,*(uint *)(param_2 + 0x28));
  if (puVar1 != (undefined4 *)0x0) {
    if (((*DAT_00265f90 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_00265f90), iVar2 != 0)) {
      *DAT_00265f94 = DAT_00265f98;
    }
    iVar2 = (**(code **)*puVar1)(puVar1,DAT_00265f94);
    if (iVar2 == 0) {
      puVar1 = (undefined4 *)0x0;
    }
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = func_004D80EC((float *)(puVar1 + 0xf4),(float *)(param_1 + 0x3d0),0);
      iVar2 = iVar2 - (*(int *)(param_1 + 1000) + -0x80000000);
      if (iVar2 + 0x3fffffffU < 0x7fffffff) {
        *(undefined1 *)(param_1 + 0x93c) = 1;
        *(int *)(param_1 + 0x908) = iVar2 * 2 + *(int *)(param_1 + 1000) + -0x80000000;
      }
    }
  }
  return 1;
}

