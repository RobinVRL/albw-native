#include "ghidra_types.h"

extern int func_001DD48C(int param_1,int param_2,undefined4 param_3);
extern int func_002D55D0(int param_1,uint param_2);
extern int func_0052E7D8(int param_1,int param_2);
extern int func_0052E8A0(int param_1);
extern int DAT_00290798;

// USA 002906A4 <- EU 002906CC (Ghidra, non-matching)
// GLOBAL DAT_00290798 int

undefined4 func_002906A4(int param_1,int param_2,undefined4 param_3,int param_4,float fparam_0)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  iVar2 = *(int *)(param_1 + 0x14);
  if (((*(char *)(iVar2 + 0xb0) == '\0') && (bVar1 = func_0052E8A0(*(int *)(iVar2 + 0x10)), !bVar1))
     && ((*(uint *)(DAT_00290798 + *(short *)(iVar2 + 0x42) * 0x10 + 4) & 0x100) == 0)) {
    (**(code **)(**(int **)(iVar2 + 0x48) + 0x20))(*(int **)(iVar2 + 0x48));
    iVar3 = func_0052E7D8(*(int *)(iVar2 + 0x10),param_4);
    func_001DD48C(*(int *)(iVar2 + 0x10),iVar3,1);
    if (param_2 == 0) {
      uVar5 = 0x1f;
    }
    else {
      uVar5 = 0x20;
    }
    puVar4 = (undefined4 *)func_002D55D0(*(int *)(iVar2 + 0x48),uVar5);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = param_3;
      puVar4[1] = ALBW_AS_U32(fparam_0);
    }
    return 1;
  }
  return 0;
}

