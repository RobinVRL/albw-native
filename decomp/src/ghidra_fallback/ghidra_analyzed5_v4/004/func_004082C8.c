#include "ghidra_types.h"

extern int func_00412A3C(int *param_1,uint param_2);
extern int func_00412BB4(void);
extern int func_00412C68(int param_1,undefined4 *param_2);
extern int DAT_00408344;

// USA 004082C8 <- EU 004082A8 (Ghidra, non-matching)
// GLOBAL DAT_00408344 int

undefined4 func_004082C8(int param_1,undefined4 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if (*(char *)(DAT_00408344 + param_1 * 0x10 + 0x29c) == '\0') {
    piVar2 = (int *)func_00412BB4();
    puVar3 = (undefined4 *)func_00412A3C(piVar2,0x12);
    puVar3[3] = piVar2[0x61];
    *(undefined1 *)(puVar3 + 1) = 0x35;
    *(char *)(puVar3 + 4) = (char)param_1;
    puVar3[5] = param_2;
    uVar1 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar7 = param_3[4];
    uVar8 = param_3[5];
    uVar9 = param_3[6];
    uVar10 = param_3[7];
    puVar3[6] = *param_3;
    puVar3[7] = uVar1;
    puVar3[8] = uVar5;
    puVar3[9] = uVar6;
    puVar3[10] = uVar7;
    puVar3[0xb] = uVar8;
    puVar3[0xc] = uVar9;
    puVar3[0xd] = uVar10;
    puVar3[0xe] = param_3[8];
    puVar4 = (undefined4 *)param_3[5];
    if (puVar4 != (undefined4 *)0x0) {
      uVar1 = *puVar4;
      uVar5 = puVar4[1];
      puVar3[0x11] = puVar4[2];
      puVar3[0xb] = puVar3 + 0xf;
      puVar3[0xf] = uVar1;
      puVar3[0x10] = uVar5;
    }
    func_00412C68((int)piVar2,puVar3);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

