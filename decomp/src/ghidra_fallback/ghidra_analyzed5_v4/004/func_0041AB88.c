#include "ghidra_types.h"

extern int func_001080CC(int param_1);
extern int func_004196AC(int *param_1,int param_2);
extern int func_004196EC(int *param_1);

// USA 0041AB88 <- EU 0041AB68 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:1 undefined1
// PARAM param_7 Stack[0x8]:1 undefined1
// PARAM param_8 Stack[0xc]:4 undefined4
// PARAM param_9 Stack[0x10]:4 undefined4
// PARAM param_10 Stack[0x14]:1 undefined1
// PARAM param_11 Stack[0x18]:4 undefined1 *

undefined4
func_0041AB88(int param_1,undefined4 param_2,uint param_3,uint param_4,int param_5,
             undefined1 param_6,undefined1 param_7,undefined4 param_8,undefined4 param_9,
             undefined1 param_10,undefined1 *param_11,float fparam_0)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  if (8 < param_3) {
    param_3 = 8;
  }
  *(uint *)(param_1 + 0xfc) = param_3;
  *(undefined1 *)(param_1 + 0xe8) = param_6;
  *(undefined1 *)(param_1 + 0xe9) = param_7;
  *(undefined4 *)(param_1 + 0xec) = param_8;
  *(undefined4 *)(param_1 + 0xf0) = param_9;
  *(float *)(param_1 + 0xf4) = fparam_0;
  *(undefined1 *)(param_1 + 0xf8) = param_10;
  *(undefined1 *)(param_1 + 0xf9) = *param_11;
  *(undefined1 *)(param_1 + 0xfa) = param_11[1];
  uVar1 = 0;
  for (; param_4 != 0; param_4 = param_4 >> 1) {
    if ((param_4 & 1) != 0) {
      if (3 < uVar1) break;
      *(undefined1 *)(param_1 + uVar1 * 0x24 + 0x1b04) = 1;
    }
    uVar1 = uVar1 + 1;
  }
  if (4 < uVar1) {
    uVar1 = 4;
  }
  *(uint *)(param_1 + 0x100) = uVar1;
  if (uVar1 == 0) {
    uVar2 = 2;
  }
  else {
    *(undefined4 *)(param_1 + 100) = param_2;
    uVar1 = 0;
    if (*(int *)(param_1 + 0xfc) != 0) {
      do {
        iVar3 = func_004196EC(*(int **)(param_1 + 100));
        if (iVar3 == 0) {
          uVar5 = 0;
          if (uVar1 != 0) {
            do {
              iVar3 = param_1 + uVar5 * 0x340;
              func_004196AC(*(int **)(param_1 + 100),*(int *)(iVar3 + 0x104));
              uVar5 = uVar5 + 1;
              *(undefined4 *)(iVar3 + 0x104) = 0;
            } while (uVar5 < uVar1);
          }
          func_001080CC(param_1);
          *(undefined1 *)(param_1 + 0x10) = 1;
          return 1;
        }
        uVar5 = uVar1 + 1;
        *(int *)(param_1 + uVar1 * 0x340 + 0x104) = iVar3;
        uVar1 = uVar5;
      } while (uVar5 < *(uint *)(param_1 + 0xfc));
    }
    uVar1 = 0;
    do {
      puVar4 = (undefined4 *)(uVar1 * 0xd + param_5);
      iVar3 = uVar1 * 0xd + param_1;
      uVar1 = uVar1 + 1;
      *(undefined4 *)(iVar3 + 0xb4) = *puVar4;
      *(undefined4 *)(iVar3 + 0xb8) = puVar4[1];
      *(undefined4 *)(iVar3 + 0xbc) = puVar4[2];
      *(undefined1 *)(iVar3 + 0xc0) = *(undefined1 *)(puVar4 + 3);
    } while (uVar1 < 4);
    uVar2 = 0;
    *(undefined1 *)(param_1 + 0x50) = 1;
  }
  return uVar2;
}

