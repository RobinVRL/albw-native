#include "ghidra_types.h"

extern void func_001DF690(int param_1,float fparam_0);
extern int func_0052F210(int param_1);
extern int func_00588224(int param_1,uint param_2,uint param_3);
extern int *DAT_0019a010;

// USA 00199F84 <- EU 00199F84 (Ghidra, non-matching)
// GLOBAL DAT_0019a010 int *

void func_00199F84(int param_1,float fparam_0)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  
  piVar1 = DAT_0019a010;
  uVar6 = (ulonglong)(uint)ALBW_AS_U32(fparam_0);
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar5 = *(int *)(param_1 + 0x34);
    for (iVar4 = *(int *)(param_1 + 0x2c) - iVar5; iVar4 != (param_1 + 0x28) - iVar5;
        iVar4 = *(int *)(iVar4 + iVar5 + 4) - iVar5) {
      uVar2 = func_0052F210(iVar4);
      iVar3 = func_00588224(*piVar1,uVar2,0x40000000);
      if (iVar3 == 0) {
        func_001DF690(iVar4,ALBW_AS_F32(uVar6));
      }
      fparam_0 = ALBW_AS_F32(uVar6);
    }
  }
  *(float *)(param_1 + 0x40) = fparam_0;
  return;
}

