#include "ghidra_types.h"

extern int func_0065EDC8(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00231e4c;

// USA 00231CE4 <- EU 00231CE4 (Ghidra, non-matching)
// GLOBAL DAT_00231e4c int *

undefined4 func_00231CE4(int param_1,uint param_2,int param_3,float fparam_0)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint in_r12;
  uint uVar8;
  bool bVar9;
  uint uVar10;
  
  *(char *)(param_1 + 0x80) = (char)param_3;
  *(undefined1 *)(param_1 + 0x81) = 0;
  piVar1 = DAT_00231e4c;
  puVar4 = *(uint **)(param_1 + 0x70);
  uVar8 = *puVar4 & 0xffff | puVar4[1] << 0x10;
  uVar6 = (uint)(param_3 != 0) << 0x10;
  if (param_3 == 1) {
    fparam_0 = ALBW_AS_F32(puVar4[2]);
    uVar10 = *(uint *)(*(int *)(param_1 + 0x74) + 8);
  }
  else {
    uVar10 = puVar4[2];
  }
  iVar2 = *DAT_00231e4c;
  iVar5 = *(int *)(iVar2 + 0x1d0);
  iVar7 = *(int *)(iVar2 + 0x1c8);
  if (iVar5 < iVar7) {
    *(int *)(iVar2 + 0x1d0) = iVar5 + 1;
    iVar5 = iVar5 + *(int *)(iVar2 + 0x1cc);
    if (iVar7 <= iVar5) {
      iVar5 = iVar5 - iVar7;
    }
    puVar4 = (uint *)(*(int *)(iVar2 + 0x1c4) + iVar5 * 0x14);
    *puVar4 = uVar10;
    puVar4[1] = (uint)ALBW_AS_U32(fparam_0);
    puVar4[2] = uVar8;
    puVar4[3] = param_2 & 0xff | in_r12 & 0xff000000 | uVar6;
    puVar4[4] = param_1 + 0x81U;
  }
  piVar3 = (int *)(param_1 + 0x78);
  bVar9 = param_3 == 1;
  if (!bVar9) {
    piVar3 = (int *)*piVar3;
  }
  if (!bVar9) {
    uVar10 = piVar3[2];
  }
  if (bVar9) {
    uVar10 = *(uint *)(piVar3[1] + 8);
    fparam_0 = *(float *)(*piVar3 + 8);
  }
  iVar2 = *piVar1;
  iVar5 = *(int *)(iVar2 + 0x1d0);
  iVar7 = *(int *)(iVar2 + 0x1c8);
  if (iVar5 < iVar7) {
    *(int *)(iVar2 + 0x1d0) = iVar5 + 1;
    iVar5 = iVar5 + *(int *)(iVar2 + 0x1cc);
    if (iVar7 <= iVar5) {
      iVar5 = iVar5 - iVar7;
    }
    puVar4 = (uint *)(*(int *)(iVar2 + 0x1c4) + iVar5 * 0x14);
    *puVar4 = uVar10;
    puVar4[1] = (uint)ALBW_AS_U32(fparam_0);
    puVar4[2] = uVar8;
    puVar4[3] = param_2 & 0xff | in_r12 & 0xff000000 | uVar6 | 0x100;
    puVar4[4] = param_1 + 0x81U;
  }
  return func_0065EDC8((undefined4 *)(param_1 + 0x4c),1);
}

