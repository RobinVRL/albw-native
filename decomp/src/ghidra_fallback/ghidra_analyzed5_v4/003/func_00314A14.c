#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_004BCBE0(int param_1,int *param_2,undefined4 param_3);
extern int *DAT_00314a70;

// USA 00314A14 <- EU 003149F0 (Ghidra, non-matching)
// GLOBAL DAT_00314a70 int *

undefined4 func_00314A14(int param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  
  uVar1 = func_004BCBE0(param_1,param_2,param_3);
  if (*(char *)(param_1 + 0x852) == '\x05') {
    fVar4 = *(float *)(*(int *)(*(int *)(param_1 + 0x7ac) + 0x14) + 0x14);
    uVar2 = func_00111A64((uint *)(*DAT_00314a70 + 0x660));
    iVar3 = *(int *)(*(int *)(param_1 + 0x7ac) + 0x14);
    fVar4 = (float)VectorSignedToFloat((int)((ulonglong)(uint)(int)fVar4 * (ulonglong)uVar2 >> 0x20)
                                       ,(byte)(in_fpscr >> 0x15) & 3);
    if (*(float *)(iVar3 + 8) != fVar4) {
      *(float *)(iVar3 + 8) = fVar4;
      *(undefined1 *)(iVar3 + 0x26) = 1;
    }
  }
  return uVar1;
}

