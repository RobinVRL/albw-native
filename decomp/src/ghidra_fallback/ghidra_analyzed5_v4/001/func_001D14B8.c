#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_001D134C(int param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);

// USA 001D14B8 <- EU 001D14B8 (Ghidra, non-matching)

undefined4 func_001D14B8(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint in_fpscr;
  float fparam_0;
  
  if ((*(char *)(param_1 + 0x5df) != '\x02') && (*(char *)(param_1 + 0x5e0) == '\x01')) {
    piVar6 = *(int **)(param_1 + 0x510);
    piVar3 = (int *)(*(int *)(param_1 + 0x518) + *(char *)(param_1 + 0x500) * 8);
    uVar1 = *(uint *)(*(int *)(param_1 + 0x518) + *(char *)(param_1 + 0x500) * 8 + 4);
    if ((uVar1 & 1) != 0) {
      piVar3 = (int *)(*piVar3 + *(int *)((int)piVar6 + ((int)uVar1 >> 1)));
    }
    (*(code *)*piVar3)();
    iVar5 = *(int *)(param_1 + 0x50c);
    iVar2 = *(int *)(param_1 + 0x4fc) + 1;
    *(int *)(param_1 + 0x4fc) = iVar2;
    uVar4 = extraout_r1;
    if (iVar5 != 0) {
      fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
      func_00352210(iVar5,1,fparam_0);
      uVar4 = extraout_r1_00;
    }
    func_00169A80(*(int **)(param_1 + 0x4f8),uVar4,iVar5,piVar6);
    func_00168E9C(*(int **)(param_1 + 0x4f8),*(int *)(param_1 + 0x4f4),(int *)0x0);
    func_001D134C(param_1);
    if ((*(char *)(param_1 + 0x500) == '\b') &&
       (*(uint *)(param_1 + 0x5a0) <= *(uint *)(param_1 + 0x59c))) {
      *(undefined1 *)(param_1 + 0x2d7) = 1;
    }
  }
  return 1;
}

