#include "ghidra_types.h"

extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_00368CEC(int param_1);
extern int func_00520E60(int param_1);
extern int *DAT_0046fb7c;
extern int *DAT_0046fb80;

// USA 0046FA00 <- EU 0046F9D8 (Ghidra, non-matching)
// GLOBAL DAT_0046fb7c int *
// GLOBAL DAT_0046fb80 int *

void func_0046FA00(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint in_fpscr;
  float fparam_0;
  
  iVar1 = func_00520E60(*(int *)(*DAT_0046fb7c + 300));
  if (iVar1 != 0) {
    func_00368CEC(*(int *)(param_1 + 0xe0));
    uVar2 = *(uint *)(*(int *)(param_1 + 0x90) + *(char *)(param_1 + 0x78) * 8 + 4);
    piVar3 = (int *)(*(int *)(param_1 + 0x90) + *(char *)(param_1 + 0x78) * 8);
    if ((uVar2 & 1) != 0) {
      piVar3 = (int *)(*piVar3 + *(int *)(*(int *)(param_1 + 0x88) + ((int)uVar2 >> 1)));
    }
    (*(code *)*piVar3)();
    iVar1 = *(int *)(param_1 + 0x74) + 1;
    *(int *)(param_1 + 0x74) = iVar1;
    if (*(int *)(param_1 + 0x84) != 0) {
      fparam_0 = (float)VectorUnsignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
      func_00352210(*(int *)(param_1 + 0x84),1,fparam_0);
    }
  }
  uVar2 = *(uint *)(*DAT_0046fb80 + (uint)*(byte *)(param_1 + 0x70) * 400 + 300);
  if ((~uVar2 & 0x6000) != 0) {
    if ((uVar2 & 0x2000) == 0) {
      if ((uVar2 & 0x4000) != 0) {
        iVar1 = *(int *)(param_1 + 0xf0) + 0x2000000;
        *(int *)(param_1 + 0xf0) = iVar1;
        iVar4 = *(int *)(param_1 + 0x98);
        *(int *)(iVar4 + 0x7c) = iVar1;
        *(byte *)(iVar4 + 0x81) = *(byte *)(iVar4 + 0x81) | 3;
        return;
      }
    }
    else {
      iVar1 = *(int *)(param_1 + 0xf0) + -0x2000000;
      *(int *)(param_1 + 0xf0) = iVar1;
      iVar4 = *(int *)(param_1 + 0x98);
      *(int *)(iVar4 + 0x7c) = iVar1;
      *(byte *)(iVar4 + 0x81) = *(byte *)(iVar4 + 0x81) | 3;
    }
    return;
  }
  uVar2 = *(uint *)(param_1 + 0xf0);
  if (uVar2 < 0x80000000) {
    iVar1 = -0x4000000;
    iVar4 = -1;
  }
  else {
    iVar1 = 0x4000000;
    iVar4 = 0;
  }
  uVar5 = uVar2 + iVar1;
  if ((int)-(iVar4 + (uint)(iVar1 != 0)) < 0 ==
      (SBORROW4(0,iVar4) != SBORROW4(-iVar4,(uint)(iVar1 != 0)))) {
    if (-1 < iVar4) goto LAB_0046fb24;
    bVar8 = uVar5 <= uVar2;
    bVar7 = uVar2 == uVar5;
    bVar6 = bVar7;
    if (bVar8 && !bVar7) {
      bVar6 = uVar5 == 0;
    }
    if ((!bVar8 || bVar7) && !bVar8 || bVar6) goto LAB_0046fb18;
  }
  else {
    bVar6 = uVar5 == uVar2;
    if (uVar2 < uVar5) {
      bVar6 = uVar2 == 0;
    }
    if (uVar5 <= uVar2 && uVar5 < uVar2 || bVar6) {
LAB_0046fb18:
      *(undefined4 *)(param_1 + 0xf0) = 0;
      goto LAB_0046fb24;
    }
  }
  *(uint *)(param_1 + 0xf0) = uVar5;
LAB_0046fb24:
  iVar1 = *(int *)(param_1 + 0x98);
  *(undefined4 *)(iVar1 + 0x7c) = *(undefined4 *)(param_1 + 0xf0);
  *(byte *)(iVar1 + 0x81) = *(byte *)(iVar1 + 0x81) | 3;
  return;
}

