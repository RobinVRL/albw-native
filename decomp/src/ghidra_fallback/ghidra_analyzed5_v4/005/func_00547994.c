#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00110490(undefined4 *param_1,uint param_2);
extern int func_0019B04C(uint param_1);
extern int *DAT_00547a94;
extern uint *DAT_00547a98;

// USA 00547994 <- EU 0054796C (Ghidra, non-matching)
// GLOBAL DAT_00547a94 int *
// GLOBAL DAT_00547a98 uint *

uint * func_00547994(uint *param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  
  iVar8 = *(int *)(*DAT_00547a94 + 0x38);
  piVar7 = (int *)(iVar8 + 0x61c);
  puVar2 = (uint *)0x0;
  if (*piVar7 < *(int *)(iVar8 + 0x620)) {
    puVar2 = *(uint **)(iVar8 + 0x628);
    if (puVar2 != (uint *)0x0) {
      *(uint *)(iVar8 + 0x628) = *puVar2;
      puVar2[7] = 0;
      puVar2[8] = 0;
      puVar2[9] = 0;
      puVar2[0x12] = 0;
      puVar2[0x13] = 0;
      puVar2[0xb0] = 0;
      func_00110490(puVar2,0x2c4);
      puVar1 = DAT_00547a98;
      *(undefined2 *)(puVar2 + 0x15) = 0xffff;
      *(undefined2 *)(puVar2 + 0x14) = 0xffff;
      *(undefined2 *)((int)puVar2 + 0x52) = 0xffff;
      *(undefined2 *)((int)puVar2 + 0x56) = 0xffff;
      uVar4 = *puVar1;
      uVar6 = puVar1[1];
      puVar2[6] = puVar1[2];
      puVar2[4] = uVar4;
      puVar2[5] = uVar6;
    }
    if (*piVar7 < *(int *)(iVar8 + 0x620)) {
      *(uint **)(*(int *)(iVar8 + 0x624) + *piVar7 * 4) = puVar2;
      *piVar7 = *piVar7 + 1;
    }
    func_0010E3C4(puVar2,param_1,0x2c4);
    iVar3 = *(int *)(iVar8 + 0x15b44) + 1;
    *(int *)(iVar8 + 0x15b44) = iVar3;
    iVar5 = *(int *)(iVar8 + 0x15b48) + 1;
    *(int *)(iVar8 + 0x15b48) = iVar5;
    *(short *)((int)puVar2 + 0x56) = (short)iVar3;
    *(short *)(puVar2 + 0x15) = (short)iVar5;
    uVar4 = func_0019B04C(param_2);
    *puVar2 = uVar4;
    if (*(int *)(iVar8 + 0x10) < *(int *)(iVar8 + 0x14)) {
      *(uint **)(*(int *)(iVar8 + 0x18) + *(int *)(iVar8 + 0x10) * 4) = puVar2;
      *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
    }
  }
  return puVar2;
}

