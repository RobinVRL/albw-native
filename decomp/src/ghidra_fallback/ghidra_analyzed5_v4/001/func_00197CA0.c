#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_004356B4(int *param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_00197e98;
extern uint *DAT_00197e9c;
extern undefined4 *DAT_00197ea0;
extern undefined4 DAT_00197ea4;
extern uint *DAT_00197ea8;
extern undefined4 *DAT_00197eac;
extern undefined4 DAT_00197eb0;
extern undefined4 DAT_00197eb4;
extern undefined4 DAT_00197eb8;
extern undefined4 DAT_00197ebc;

// USA 00197CA0 <- EU 00197CA0 (Ghidra, non-matching)
// GLOBAL DAT_00197e98 int *
// GLOBAL DAT_00197e9c uint *
// GLOBAL DAT_00197ea0 undefined4 *
// GLOBAL DAT_00197ea4 undefined4
// GLOBAL DAT_00197ea8 uint *
// GLOBAL DAT_00197eac undefined4 *
// GLOBAL DAT_00197eb0 undefined4
// GLOBAL DAT_00197eb4 undefined4
// GLOBAL DAT_00197eb8 undefined4
// GLOBAL DAT_00197ebc undefined4

void func_00197CA0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(float *)(albw_frame + 0x14))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x1c))
  if ((*(char *)(*(int *)(param_1 + 0x43c) + 0x61) != '\0') &&
     (puVar2 = (undefined4 *)func_0052FBA0(*DAT_00197e98 + 0x3dbbc,*(uint *)(param_1 + 0x50)),
     puVar2 != (undefined4 *)0x0)) {
    if (((*DAT_00197e9c & 1) == 0) && (iVar3 = func_00100174((int *)DAT_00197e9c), iVar3 != 0)) {
      *DAT_00197ea0 = DAT_00197ea4;
    }
    iVar3 = (**(code **)*puVar2)(puVar2,DAT_00197ea0);
    if (iVar3 == 0) {
      puVar2 = (undefined4 *)0x0;
    }
    if (puVar2 != (undefined4 *)0x0) {
      func_00115C70(&local_1c,(float *)(param_1 + 0x3d0),(float *)(puVar2 + 0xf4));
      local_28 = local_1c;
      local_24 = uStack_18;
      local_20 = uStack_14;
      func_00115DC8(&local_28);
      iVar3 = *(int *)(param_1 + 0x43c);
      *(float *)(iVar3 + 0x24) = local_28;
      *(undefined4 *)(iVar3 + 0x28) = local_24;
      *(undefined4 *)(iVar3 + 0x2c) = local_20;
      puVar4 = *(undefined4 **)(param_1 + 0x434);
      if (((*DAT_00197ea8 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_00197ea8), iVar3 != 0)) {
        *DAT_00197eac = DAT_00197eb0;
      }
      if ((puVar4 == (undefined4 *)0x0) ||
         (iVar3 = (**(code **)*puVar4)(puVar4,DAT_00197eac), iVar3 == 0)) {
        puVar4 = (undefined4 *)0x0;
      }
      uVar1 = DAT_00197eb4;
      uVar5 = puVar2[0xf5];
      uVar6 = puVar2[0xf6];
      uVar7 = *(undefined4 *)(param_1 + 0x3d0);
      uVar8 = *(undefined4 *)(param_1 + 0x3d4);
      uVar9 = *(undefined4 *)(param_1 + 0x3d8);
      puVar4[0x19] = puVar2[0xf4];
      puVar4[0x1a] = uVar5;
      puVar4[0x16] = uVar7;
      puVar4[0x17] = uVar8;
      puVar4[0x18] = uVar9;
      puVar4[0x1b] = uVar6;
      puVar4[0x1c] = uVar1;
      func_004356B4(*(int **)(param_1 + 0x434));
    }
  }
  iVar3 = *(int *)(param_1 + 0x430);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(param_1 + 0x3d8);
  func_004356B4(*(int **)(param_1 + 0x430));
  uVar5 = DAT_00197ebc;
  uVar1 = DAT_00197eb8;
  *(undefined4 *)(param_1 + 0x44c) = DAT_00197eb8;
  *(undefined4 *)(param_1 + 0x450) = uVar1;
  *(undefined4 *)(param_1 + 0x454) = uVar1;
  *(undefined4 *)(param_1 + 0x458) = uVar1;
  *(undefined4 *)(param_1 + 0x45c) = uVar5;
  *(undefined4 *)(param_1 + 0x460) = uVar5;
  *(undefined4 *)(param_1 + 0x468) = uVar5;
  *(undefined4 *)(param_1 + 0x46c) = uVar1;
  *(undefined4 *)(param_1 + 0x470) = uVar5;
  *(undefined4 *)(param_1 + 0x478) = uVar5;
  *(undefined4 *)(param_1 + 0x47c) = uVar5;
  *(undefined4 *)(param_1 + 0x480) = uVar1;
  *(undefined4 *)(param_1 + 0x464) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(param_1 + 0x474) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(param_1 + 0x484) = *(undefined4 *)(param_1 + 0x3d8);
  return;
}

