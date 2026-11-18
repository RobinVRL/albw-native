#include "ghidra_types.h"

extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_00148c14;

// USA 00148AF0 <- EU 00148AF0 (Ghidra, non-matching)
// GLOBAL DAT_00148c14 int *

undefined4 func_00148AF0(int param_1)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint in_fpscr;
  float fparam_0;
  
  piVar3 = DAT_00148c14;
  uVar5 = 0;
  if (0 < *(short *)(param_1 + 0x72c)) {
    piVar6 = (int *)(param_1 + 0x6ec);
    do {
      piVar2 = piVar6;
      if (uVar5 < 0x10) {
        piVar2 = piVar6 + uVar5;
      }
      if (*piVar2 < 1) {
        puVar1 = (uint *)(param_1 + 0x6ac);
        if (uVar5 < 0x10) {
          puVar1 = (uint *)(param_1 + 0x6ac) + uVar5;
        }
        iVar4 = func_0052FBA0(*piVar3 + 0x3dbbc,*puVar1);
        if (iVar4 == 0) goto joined_r0x00148b80;
      }
      else {
joined_r0x00148b80:
        piVar2 = piVar6;
        if (uVar5 < 0x10) {
          piVar2 = piVar6 + uVar5;
        }
        *piVar2 = *piVar2 + 1;
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (int)*(short *)(param_1 + 0x72c));
  }
  piVar3 = (int *)(*(int *)(param_1 + 0x458) + *(char *)(param_1 + 0x440) * 8);
  uVar5 = *(uint *)(*(int *)(param_1 + 0x458) + *(char *)(param_1 + 0x440) * 8 + 4);
  if ((uVar5 & 1) != 0) {
    piVar3 = (int *)(*piVar3 + *(int *)(*(int *)(param_1 + 0x450) + ((int)uVar5 >> 1)));
  }
  (*(code *)*piVar3)();
  iVar4 = *(int *)(param_1 + 0x43c) + 1;
  *(int *)(param_1 + 0x43c) = iVar4;
  if (*(int *)(param_1 + 0x44c) == 0) {
    return 0;
  }
  fparam_0 = (float)VectorUnsignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
  return func_00352210(*(int *)(param_1 + 0x44c),1,fparam_0);
}

