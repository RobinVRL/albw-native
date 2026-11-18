#include "ghidra_types.h"

extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00687DB0(undefined4 *param_1);
extern int *DAT_002b853c;
extern undefined4 DAT_002b8540;

// USA 002B841C <- EU 002B83F8 (Ghidra, non-matching)
// GLOBAL DAT_002b853c int *
// GLOBAL DAT_002b8540 undefined4

undefined4 * func_002B841C(int param_1)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  
  if ((*(int *)(param_1 + 0xb1c) == 0) && (0 < *(int *)(param_1 + 0x14b4))) {
    iVar5 = *(int *)(param_1 + 0x14b0);
    iVar3 = iVar5;
    if (*(int *)(param_1 + 0x14ac) <= iVar5) {
      iVar3 = iVar5 - *(int *)(param_1 + 0x14ac);
    }
    uVar6 = *(uint *)(*(int *)(param_1 + 0x14a8) + iVar3 * 4);
    *(int *)(param_1 + 0x14b0) = iVar5 + 1;
    if (*(int *)(param_1 + 0x14ac) <= iVar5 + 1) {
      *(undefined4 *)(param_1 + 0x14b0) = 0;
    }
    piVar1 = DAT_002b853c;
    *(int *)(param_1 + 0x14b4) = *(int *)(param_1 + 0x14b4) + -1;
    puVar4 = (undefined4 *)func_0052FBA0(*piVar1 + 0x3dbbc,uVar6);
    puVar4 = func_00687DB0(puVar4);
    if (puVar4 != (undefined4 *)0x0) {
      fVar7 = ALBW_AS_F32(puVar4[0xf4]) - *(float *)(param_1 + 0x3d0);
      fVar8 = ALBW_AS_F32(puVar4[0xf6]) - *(float *)(param_1 + 0x3d8);
      fVar7 = fVar7 * fVar7 + fVar8 * fVar8;
      if (fVar7 < *(float *)(param_1 + 0xa68)) {
        *(float *)(param_1 + 0xa68) = fVar7;
        *(uint *)(param_1 + 0xb24) = uVar6;
      }
      iVar3 = *(int *)(param_1 + 0x14b4);
      if (iVar3 < *(int *)(param_1 + 0x14ac)) {
        *(int *)(param_1 + 0x14b4) = iVar3 + 1;
        iVar3 = iVar3 + *(int *)(param_1 + 0x14b0);
        if (*(int *)(param_1 + 0x14ac) <= iVar3) {
          iVar3 = iVar3 - *(int *)(param_1 + 0x14ac);
        }
        *(uint *)(*(int *)(param_1 + 0x14a8) + iVar3 * 4) = uVar6;
      }
    }
    bVar2 = *(char *)(param_1 + 0xb09) + 1;
    *(byte *)(param_1 + 0xb09) = bVar2;
    if (*(int *)(param_1 + 0x14b4) <= (int)(uint)bVar2) {
      *(undefined4 *)(param_1 + 0xa68) = DAT_002b8540;
      *(undefined1 *)(param_1 + 0xb09) = 0;
      *(undefined4 *)(param_1 + 0xb1c) = *(undefined4 *)(param_1 + 0xb24);
      return puVar4;
    }
  }
  return (undefined4 *)0x0;
}

