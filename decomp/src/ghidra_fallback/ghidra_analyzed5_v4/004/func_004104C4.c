#include "ghidra_types.h"

extern int func_00412A3C(int *param_1,uint param_2);
extern int func_00412BB4(void);
extern int func_00412C68(int param_1,undefined4 *param_2);

// USA 004104C4 <- EU 004104A4 (Ghidra, non-matching)

void func_004104C4(int param_1,undefined4 *param_2,undefined4 *param_3,int *param_4)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  piVar2 = (int *)func_00412BB4();
  puVar3 = (undefined4 *)func_00412A3C(piVar2,0x10);
  puVar3[3] = piVar2[0x61];
  *(undefined1 *)(puVar3 + 1) = 0xf;
  puVar3[4] = param_1 + 0x124;
  uVar1 = param_2[9];
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  uVar8 = param_2[4];
  uVar9 = param_2[5];
  uVar10 = param_2[6];
  uVar11 = param_2[7];
  uVar12 = param_2[8];
  uVar13 = *param_3;
  puVar3[5] = *param_2;
  puVar3[6] = uVar5;
  puVar3[7] = uVar6;
  puVar3[8] = uVar7;
  puVar3[9] = uVar8;
  puVar3[10] = uVar9;
  puVar3[0xb] = uVar10;
  puVar3[0xc] = uVar11;
  puVar3[0xd] = uVar12;
  puVar3[0xe] = uVar1;
  puVar3[0xf] = uVar13;
  func_00412C68((int)piVar2,puVar3);
  iVar4 = param_3[2];
  if (0 < iVar4) {
    *(undefined1 *)(param_1 + 0x11f) = *(undefined1 *)(param_3 + 1);
    *(int *)(param_1 + 0x120) = iVar4;
    *(undefined1 *)(param_1 + 0x11e) = 1;
  }
  *(undefined1 *)(param_1 + 0x11d) = 1;
  return;
}

