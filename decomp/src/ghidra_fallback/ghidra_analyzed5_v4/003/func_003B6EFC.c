#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00370608(int param_1,uint *param_2);
extern int func_003706B0(int param_1,uint *param_2);
extern int func_004F01F4(undefined4 param_1);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern int *DAT_003b710c;
extern int DAT_003b7110;
extern int *DAT_003b7114;
extern int *DAT_003b7118;
extern int *DAT_003b711c;

// USA 003B6EFC <- EU 003B6ED8 (Ghidra, non-matching)
// GLOBAL DAT_003b710c int *
// GLOBAL DAT_003b7110 int
// GLOBAL DAT_003b7114 int *
// GLOBAL DAT_003b7118 int *
// GLOBAL DAT_003b711c int *

void func_003B6EFC(undefined4 *param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(uint * *)(albw_frame + 0x0))
  #define local_3c (*(int *)(albw_frame + 0x4))
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(uint *)(albw_frame + 0xc))
  #define local_30 ((uint *)(albw_frame + 0x10))
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  *(undefined1 *)((int)param_1 + 0xd) = 1;
  *(undefined1 *)((int)param_1 + 0xe) = 0;
  *(undefined1 *)((int)param_1 + 0xf) = 0;
  *(undefined1 *)param_1 = 1;
  *(undefined1 *)((int)param_1 + 1) = 1;
  *(undefined1 *)((int)param_1 + 2) = 1;
  *(undefined1 *)((int)param_1 + 3) = 1;
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined1 *)((int)param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 6) = 0x19;
  *(undefined1 *)((int)param_1 + 7) = 0x32;
  *(undefined1 *)(param_1 + 2) = 0x50;
  iVar6 = DAT_003b7110;
  piVar2 = DAT_003b710c;
  *(undefined1 *)((int)param_1 + 9) = 3;
  *(undefined1 *)((int)param_1 + 10) = 2;
  *(undefined1 *)((int)param_1 + 0xb) = 2;
  if (param_2 == 2) {
    *(undefined1 *)((int)param_1 + 0xe) = 5;
    *(undefined1 *)(param_1 + 3) = 2;
  }
  else {
    uVar3 = func_00111A64((uint *)(*piVar2 + 0x660));
    bVar1 = *(byte *)(iVar6 + (int)((ulonglong)uVar3 * 0xc >> 0x20));
    *(byte *)((int)param_1 + 0xe) = bVar1;
    iVar4 = func_004F01F4((uint)bVar1);
    if (iVar4 == 0) {
      *(undefined1 *)(param_1 + 3) = 2;
    }
    else {
      *(undefined1 *)(param_1 + 3) = 1;
    }
  }
  local_40 = local_30;
  local_3c = 0xc;
  iVar4 = 0;
  local_38 = 0;
  local_34 = 0;
  do {
    bVar1 = *(byte *)(iVar6 + iVar4);
    if ((bVar1 != *(byte *)((int)param_1 + 0xe)) && ((int)local_34 < 0xc)) {
      uVar3 = local_34 + 1;
      if (0xb < (int)local_34) {
        local_34 = local_34 - 0xc;
      }
      *(byte *)((int)local_40 + local_34) = bVar1;
      local_34 = uVar3;
    }
    uVar3 = local_34;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0xc);
  uVar5 = func_00111A64((uint *)(*piVar2 + 0x660));
  uVar3 = (uint)((ulonglong)uVar3 * (ulonglong)uVar5 >> 0x20);
  puVar7 = local_40;
  if (uVar3 < local_34) {
    iVar6 = uVar3 + local_38;
    if (local_3c <= iVar6) {
      iVar6 = iVar6 - local_3c;
    }
    puVar7 = (uint *)((int)local_40 + iVar6);
  }
  uVar3 = *puVar7;
  *(byte *)((int)param_1 + 0xf) = (byte)uVar3;
  iVar6 = func_004F01F4((uint)(byte)uVar3);
  piVar2 = DAT_003b7114;
  if (iVar6 == 0) {
    *(undefined1 *)((int)param_1 + 0xd) = 2;
  }
  else {
    *(undefined1 *)((int)param_1 + 0xd) = 1;
  }
  iVar6 = *piVar2;
  if (iVar6 != 0) {
    local_40 = (uint *)0x0;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0xffffffff;
    iVar6 = func_005826A4(iVar6,(int *)&local_40,DAT_003b7118 + -2,DAT_003b7118);
    if (iVar6 != 0) {
      func_003706B0((int)param_1,local_40);
    }
    iVar6 = func_005826A4(*piVar2,(int *)&local_40,DAT_003b711c + -4,DAT_003b711c);
    if (iVar6 != 0) {
      func_00370608((int)param_1,local_40);
    }
  }
  return;
}

