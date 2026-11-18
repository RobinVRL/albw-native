#include "ghidra_types.h"

extern ulonglong func_0011624C(uint param_1,uint param_2,uint param_3,uint param_4);
extern int func_003D33C4(int *param_1,int *param_2,int *param_3,int param_4);
extern uint DAT_005644ec;
extern int DAT_005644f0;
extern uint DAT_005644f4;
extern int DAT_005644f8;
extern int DAT_005644fc;
extern int DAT_00564500;
extern int DAT_00564504;
extern int DAT_00564508;
extern int DAT_0056450c;

// USA 00564398 <- EU 00564370 (Ghidra, non-matching)
// GLOBAL DAT_005644ec uint
// GLOBAL DAT_005644f0 int
// GLOBAL DAT_005644f4 uint
// GLOBAL DAT_005644f8 int
// GLOBAL DAT_005644fc int
// GLOBAL DAT_00564500 int
// GLOBAL DAT_00564504 int
// GLOBAL DAT_00564508 int
// GLOBAL DAT_0056450c int

void func_00564398(int *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(uint *)(albw_frame + 0xc))
  #define local_20 ((uint *)(albw_frame + 0x10))
  uVar1 = DAT_005644f4;
  uVar9 = func_0011624C(*param_2 + DAT_005644ec,
                        param_2[1] + DAT_005644f0 + (uint)CARRY4(*param_2,DAT_005644ec),DAT_005644f4
                        ,0);
  iVar4 = (int)uVar9 + DAT_005644f8;
  func_003D33C4(&local_28,(int *)&local_24,(int *)local_20,iVar4);
  uVar7 = iVar4 + 6;
  iVar4 = (int)((longlong)(int)uVar7 * (longlong)DAT_005644fc + ((ulonglong)uVar7 << 0x20) >> 0x20);
  uVar8 = uVar7 + ((iVar4 >> 2) - (iVar4 >> 0x1f)) * -7 + 7;
  iVar5 = (int)((longlong)(int)uVar8 * (longlong)DAT_005644fc + ((ulonglong)uVar8 << 0x20) >> 0x20);
  iVar4 = (int)((ulonglong)((longlong)DAT_00564500 * (longlong)(int)uVar1) >> 0x20);
  iVar2 = (int)((ulonglong)((longlong)DAT_00564504 * (longlong)(int)uVar1) >> 0x20);
  uVar7 = (iVar2 >> 0xe) - (iVar2 >> 0x1f);
  iVar6 = (int)((longlong)(int)uVar7 * (longlong)DAT_00564508 + ((ulonglong)uVar7 << 0x20) >> 0x20);
  iVar2 = (int)((ulonglong)((longlong)DAT_0056450c * (longlong)(int)uVar1) >> 0x20);
  uVar3 = (iVar2 >> 6) - (iVar2 >> 0x1f);
  iVar2 = (int)((longlong)(int)uVar3 * (longlong)DAT_00564508 + ((ulonglong)uVar3 << 0x20) >> 0x20);
  param_1[2] = (uVar3 + ((iVar2 >> 5) - (iVar2 >> 0x1f)) * -0x3c) * 0x100 & 0xff00 |
               uVar7 + ((iVar6 >> 5) - (iVar6 >> 0x1f)) * -0x3c & 0xff |
               (uVar1 + uVar3 * -1000) * 0x10000;
  *param_1 = local_28;
  param_1[1] = (((iVar5 >> 2) - (iVar5 >> 0x1f)) * -7 + uVar8) * 0x10000 & 0xff0000 |
               local_24 & 0xff | (local_20[0] & 0xff) << 8 |
               ((iVar4 >> 0x14) - (iVar4 >> 0x1f)) * 0x1000000;
  return;
}

