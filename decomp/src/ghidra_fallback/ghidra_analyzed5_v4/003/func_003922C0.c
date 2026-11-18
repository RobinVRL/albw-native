#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int DAT_003923e8;
extern undefined4 DAT_003923ec;
extern undefined4 DAT_003923f0;
extern int DAT_003923f4;
extern undefined *DAT_003923f8;
extern undefined *DAT_003923fc;
extern char s_TagSwitchSoundPlayer__d_00392400[];
extern char s_cf_00392400[];

// USA 003922C0 <- EU 0039229C (Ghidra, non-matching)
// GLOBAL DAT_003923e8 int
// GLOBAL DAT_003923ec undefined4
// GLOBAL DAT_003923f0 undefined4
// GLOBAL DAT_003923f4 int
// GLOBAL DAT_003923f8 undefined *
// GLOBAL DAT_003923fc undefined *
// GLOBAL s_cf_00392400 string

int func_003922C0(undefined4 *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  
  piVar1 = func_00150E40(param_1,param_2);
  iVar2 = DAT_003923e8 + 0x54;
  *piVar1 = DAT_003923e8;
  piVar1[200] = iVar2;
  piVar1[0x104] = (int)(piVar1 + 0x106);
  piVar1[0x105] = 0x20;
  *(undefined1 *)(piVar1[0x104] + 0x1f) = 0;
  *(undefined1 *)piVar1[0x104] = 0;
  piVar1[0x103] = DAT_003923f4;
  piVar1[0x10e] = 0;
  iVar2 = func_00100118((int)(piVar1 + 0x10f),DAT_003923f8,0x14,2);
  uVar3 = 2;
  iVar2 = func_00100118(iVar2 + 0x30,DAT_003923fc,0x60,2);
  *(undefined1 *)(iVar2 + 0xc4) = 0;
  *(bool *)(iVar2 + 0xc5) = *(short *)((int)param_2 + 0x2a) == 2;
  *(bool *)(iVar2 + 0xc6) = *(short *)((int)param_2 + 0x2a) == 1;
  *(bool *)(iVar2 + 199) = (short)param_2[0xb] == 1;
  *(bool *)(iVar2 + 200) = *(short *)((int)param_2 + 0x2e) == 1;
  *(undefined1 *)(iVar2 + 0xc9) = 0;
  func_004994B0(iVar2 + -0x60,s_TagSwitchSoundPlayer__d_00392400,(int)(short)param_2[10],uVar3);
  *(undefined4 *)(iVar2 + -8) = 0xffffffff;
  bVar4 = *(short *)((int)param_2 + 0x32) != 0;
  *(bool *)(iVar2 + 0xc0) = bVar4;
  *(undefined1 *)(iVar2 + 0xc2) = 0;
  *(undefined4 *)(iVar2 + -4) = 0xffffffff;
  bVar5 = (short)param_2[0xd] != 0;
  *(bool *)(iVar2 + 0xc1) = bVar5;
  bVar4 = !bVar4;
  bVar5 = !bVar5;
  bVar6 = bVar4 && bVar5;
  *(undefined1 *)(iVar2 + 0xc3) = 0;
  if (bVar4 && bVar5) {
    bVar6 = *(char *)(iVar2 + 0xc5) == '\0';
  }
  if (bVar6) {
    *(undefined1 *)(iVar2 + -0x195) = 1;
  }
  return iVar2 + -0x46c;
}

