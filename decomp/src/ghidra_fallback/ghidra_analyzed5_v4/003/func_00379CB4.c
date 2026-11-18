#include "ghidra_types.h"

extern int func_0051D530(int param_1,undefined4 *param_2);
extern int *DAT_00379dc4;
extern int DAT_00379dc8;

// USA 00379CB4 <- EU 00379C90 (Ghidra, non-matching)
// GLOBAL DAT_00379dc4 int *
// GLOBAL DAT_00379dc8 int

void func_00379CB4(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined4 *)(albw_frame + 0x0))
  #define local_1c (*(float *)(albw_frame + 0x4))
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  if (*(char *)(param_1 + 0x4a1) != '\0') {
    local_18 = *(undefined4 *)(param_1 + 0x3d8);
    local_20 = *(undefined4 *)(param_1 + 0x3d0);
    local_1c = *(float *)(param_1 + 0x3d4);
    iVar2 = *(int *)(*DAT_00379dc4 + 0x18);
    if ((int)*(short *)(param_1 + 0x2c) == 0) {
      func_0051D530(iVar2,(undefined4 *)(param_1 + 0x4c0));
      *(undefined2 *)(param_1 + 0x4e8) = 0x1e;
      *(undefined2 *)(param_1 + 0x4ea) = 0x1e;
      local_20 = *(undefined4 *)(iVar2 + 0x1bc);
      local_1c = *(float *)(iVar2 + 0x1c0);
      local_18 = *(undefined4 *)(iVar2 + 0x1c4);
    }
    else {
      puVar1 = (undefined4 *)(DAT_00379dc8 + ((int)*(short *)(param_1 + 0x2c) & 0xffU) * 0x2c);
      *(undefined4 *)(param_1 + 0x4c0) = *puVar1;
      *(undefined4 *)(param_1 + 0x4c4) = puVar1[1];
      *(undefined4 *)(param_1 + 0x4c8) = puVar1[2];
      *(undefined4 *)(param_1 + 0x4cc) = puVar1[3];
      uVar3 = puVar1[5];
      uVar4 = puVar1[6];
      *(undefined4 *)(param_1 + 0x4d0) = puVar1[4];
      *(undefined4 *)(param_1 + 0x4d4) = uVar3;
      *(undefined4 *)(param_1 + 0x4d8) = uVar4;
      *(undefined4 *)(param_1 + 0x4dc) = puVar1[7];
      *(undefined4 *)(param_1 + 0x4e0) = puVar1[8];
      *(undefined4 *)(param_1 + 0x4e4) = puVar1[9];
      *(undefined2 *)(param_1 + 0x4e8) = *(undefined2 *)(puVar1 + 10);
      *(undefined2 *)(param_1 + 0x4ea) = *(undefined2 *)((int)puVar1 + 0x2a);
      local_1c = local_1c + *(float *)(param_1 + 0x4e0);
      *(undefined4 *)(param_1 + 0x4c8) = *(undefined4 *)(iVar2 + 0x1a8);
    }
    (**(code **)(**(int **)(param_1 + 0x4a8) + 0x34))
              (*(int **)(param_1 + 0x4a8),&local_20,param_1 + 0x4c0,0);
    *(int *)(param_1 + 0x4bc) = (int)*(short *)(param_1 + 0x2e);
    *(undefined1 *)(param_1 + 0x4a1) = 0;
  }
  return;
}

