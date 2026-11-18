#include "ghidra_types.h"

extern undefined4 func_00151148(int param_1,int param_2);
extern int func_004A8304(undefined4 param_1,int param_2);
extern int func_004A9120(undefined4 param_1,int param_2);
extern int func_004CF478(int param_1,int param_2);
extern int func_00547B6C(uint *param_1,uint param_2);
extern undefined4 *puRam004ba3b0;
extern int *DAT_004ba3ac;

// USA 004BA260 <- EU 004BA238 (Ghidra, non-matching)
// GLOBAL DAT_004ba3ac int *
// GLOBAL UNK_004ba3b0 undefined4 *

void func_004BA260(int param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined2 uVar3;
  int iVar4;
  undefined1 *puVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  
  uVar7 = 0;
  piVar6 = *(int **)(param_1 + 0x480);
  iVar4 = *(int *)(*DAT_004ba3ac + 0x3dbe4);
  piVar8 = piVar6 + *(int *)(param_1 + 0x478);
  for (; piVar6 != piVar8; piVar6 = piVar6 + 1) {
    if (uVar7 < *(uint *)(param_1 + 0x620)) {
      puVar5 = (undefined1 *)(*(int *)(param_1 + 0x624) + uVar7 * 0x104);
    }
    else {
      puVar5 = *(undefined1 **)(param_1 + 0x624);
    }
    uVar3 = 2;
    switch(*(undefined2 *)(*piVar6 + 0x2a)) {
    case 1:
      uVar3 = 0;
      break;
    case 2:
      uVar3 = 1;
      break;
    case 4:
      uVar3 = 3;
      break;
    case 5:
      uVar3 = 4;
      break;
    case 6:
      uVar3 = 5;
      break;
    case 7:
      uVar3 = 7;
      break;
    case 8:
      uVar3 = 8;
      break;
    case 9:
      uVar3 = 9;
      break;
    case 10:
      uVar3 = 10;
      break;
    case 0xb:
      uVar3 = 0xf;
    }
    *(undefined2 *)(puVar5 + 0x100) = uVar3;
    bVar2 = func_00547B6C((uint *)(iVar4 + 0xc),uVar7);
    if (bVar2) {
      func_004CF478(*(int *)(puVar5 + 8),0);
      func_00151148(*(int *)(puVar5 + 0xe4),0);
      *puVar5 = 4;
      puVar1 = puRam004ba3b0;
      if (puVar5[0x102] == '\x01') {
        puVar5[0x102] = 0;
        func_004A9120(*puVar1,(int)(puVar5 + 0x14));
        func_004A8304(*puVar1,(int)(puVar5 + 0x78));
      }
      *puVar5 = 4;
    }
    uVar7 = uVar7 + 1;
  }
  return;
}

