#include "ghidra_types.h"

extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_00558FDC(int param_1);

// USA 0047F04C <- EU 0047F024 (Ghidra, non-matching)

undefined4 func_0047F04C(int param_1)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  int *piVar4;
  int iVar5;
  uint in_fpscr;
  float fparam_0;
  
  iVar5 = *(int *)(*(int *)(param_1 + 0x110) + 0x14);
  iVar1 = func_00558FDC(*(int *)(param_1 + 0x114));
  uVar3 = *(ushort *)(iVar5 + 0x16);
  if (iVar1 == 0) {
    uVar3 = uVar3 & 0xfffe;
  }
  else {
    uVar3 = uVar3 | 1;
  }
  *(ushort *)(iVar5 + 0x16) = uVar3;
  iVar5 = *(int *)(*(int *)(param_1 + 0x114) + 0x14);
  iVar1 = func_00558FDC(*(int *)(param_1 + 0x110));
  uVar3 = *(ushort *)(iVar5 + 0x16);
  if (iVar1 == 0) {
    uVar3 = uVar3 & 0xfffe;
  }
  else {
    uVar3 = uVar3 | 1;
  }
  *(ushort *)(iVar5 + 0x16) = uVar3;
  uVar2 = *(uint *)(*(int *)(param_1 + 0x90) + *(char *)(param_1 + 0x78) * 8 + 4);
  piVar4 = (int *)(*(int *)(param_1 + 0x90) + *(char *)(param_1 + 0x78) * 8);
  if ((uVar2 & 1) != 0) {
    piVar4 = (int *)(*piVar4 + *(int *)(*(int *)(param_1 + 0x88) + ((int)uVar2 >> 1)));
  }
  (*(code *)*piVar4)();
  iVar1 = *(int *)(param_1 + 0x74) + 1;
  *(int *)(param_1 + 0x74) = iVar1;
  if (*(int *)(param_1 + 0x84) == 0) {
    return 0;
  }
  fparam_0 = (float)VectorUnsignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
  return func_00352210(*(int *)(param_1 + 0x84),1,fparam_0);
}

