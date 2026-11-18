#include "ghidra_types.h"

extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FB4E0(int param_1,float fparam_0);
extern int func_0054DDF4(int param_1,uint param_2);
extern undefined4 uRam00263140;
extern undefined4 uRam00263144;
extern undefined4 uRam00263148;
extern float DAT_00263134;
extern float DAT_00263138;
extern float DAT_0026313c;

// USA 00262FF8 <- EU 00263020 (Ghidra, non-matching)
// GLOBAL DAT_00263134 float
// GLOBAL DAT_00263138 float
// GLOBAL DAT_0026313c float
// GLOBAL UNK_00263140 undefined4
// GLOBAL UNK_00263144 undefined4
// GLOBAL UNK_00263148 undefined4

void func_00262FF8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  short *psVar4;
  int iVar5;
  undefined4 *puVar6;
  short sVar7;
  uint uVar8;
  float fVar9;
  
  if (*(char *)(param_1 + 0xa48) == '\0') {
    *(undefined1 *)(*(int *)(param_1 + 0x420) + 0x22) = 0;
    psVar4 = (short *)func_0054DDF4(param_1,0);
    sVar7 = *psVar4;
    iVar5 = *(int *)(param_1 + 0x420);
  }
  else {
    *(undefined1 *)(*(int *)(param_1 + 0x420) + 0x22) = 2;
    psVar4 = (short *)func_0054DDF4(param_1,0);
    iVar5 = *(int *)(param_1 + 0x420);
    sVar7 = *psVar4 << 1;
  }
  fVar9 = DAT_00263134;
  *(short *)(iVar5 + 0x30) = sVar7;
  uVar8 = *(uint *)(param_1 + 0xa10);
  func_004D80A4((float *)(param_1 + 0xa4c),uVar8,fVar9);
  func_004D80A4((float *)(param_1 + 0x3dc),uVar8,DAT_00263138);
  fVar9 = DAT_0026313c;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x80;
  func_004FABDC(param_1,*(undefined4 *)(param_1 + 0xa24),0xffffffff,0);
  func_004FB4E0(param_1,fVar9);
  uVar3 = uRam00263148;
  uVar2 = uRam00263144;
  *(undefined4 *)(param_1 + 0xa2c) = *(undefined4 *)(param_1 + 0x3d0);
  uVar1 = uRam00263140;
  *(undefined4 *)(param_1 + 0xa30) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(param_1 + 0xa34) = *(undefined4 *)(param_1 + 0x3d8);
  puVar6 = *(undefined4 **)(param_1 + 0xa14);
  *puVar6 = uVar3;
  puVar6[1] = ALBW_AS_U32(fVar9);
  puVar6[2] = uVar2;
  puVar6[4] = uVar3;
  puVar6[3] = uVar1;
  puVar6 = *(undefined4 **)(param_1 + 0xa14);
  puVar6[4] = *puVar6;
  puVar6[3] = uVar1;
  return;
}

