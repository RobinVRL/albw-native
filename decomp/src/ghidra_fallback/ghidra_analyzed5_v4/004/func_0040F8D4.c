#include "ghidra_types.h"

extern int func_0010AC24(undefined4 param_1,undefined4 param_2);
extern int func_003E655C(uint *param_1,int param_2,int param_3);
extern int func_0056137C(uint *param_1,uint *param_2);
extern undefined4 DAT_0040fa44;
extern int *DAT_0040fa48;
extern undefined4 DAT_0040fa4c;

// USA 0040F8D4 <- EU 0040F8B4 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4
// PARAM param_6 Stack[0x4]:4 undefined4
// GLOBAL DAT_0040fa44 undefined4
// GLOBAL DAT_0040fa48 int *
// GLOBAL DAT_0040fa4c undefined4

/* WARNING: Removing unreachable block (ram,0x0040f950) */
/* WARNING: Removing unreachable block (ram,0x0040f94c) */
/* WARNING: Removing unreachable block (ram,0x0040f958) */
/* WARNING: Removing unreachable block (ram,0x0040f968) */
/* WARNING: Removing unreachable block (ram,0x0040f96c) */
/* WARNING: Removing unreachable block (ram,0x0040f970) */
/* WARNING: Removing unreachable block (ram,0x0040f980) */

undefined4 *
func_0040F8D4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
             undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  uint uVar7;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 ((uint *)(albw_frame + 0x0))
  uVar1 = DAT_0040fa44;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  *param_1 = uVar1;
  param_1[4] = 0;
  param_1[6] = 0;
  piVar2 = DAT_0040fa48;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  iVar3 = *piVar2;
  param_1[5] = iVar3;
  uVar1 = DAT_0040fa4c;
  *(int *)((int)param_1 + *(int *)(iVar3 + -0x30) + 0x14) = piVar2[3];
  param_1[0xb] = uVar1;
  param_1[0xd] = param_2;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = param_3;
  param_1[0x11] = param_4;
  param_1[0x12] = param_5;
  param_1[0x13] = param_6;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)((int)param_1 + 0x51) = 0;
  iVar3 = param_1[0xd];
  if (*(char *)(iVar3 + 0x1c) == '\0') {
    iVar3 = func_0056137C((uint *)(iVar3 + 4),local_20);
    uVar7 = local_20[0];
    if (iVar3 < 0) {
      func_0010AC24(iVar3,0x40f9e4);
      uVar7 = local_20[0];
    }
  }
  else {
    local_20[0] = 0;
    local_20[1] = 0;
    uVar4 = func_0056137C((uint *)(iVar3 + 4),local_20);
    uVar5 = uVar4 & 0x80000000;
    *(uint *)(iVar3 + 0x18) = uVar4;
    uVar7 = 0;
    if (uVar5 == 0) {
      uVar7 = local_20[0];
    }
    if ((int)uVar4 < 0) {
      pcVar6 = (code *)param_1[0x12];
      if (pcVar6 != (code *)0x0) {
        uVar5 = param_1[0x13];
      }
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(*(undefined4 *)(param_1[0xd] + 0x18),uVar5);
      }
      return param_1;
    }
  }
  if (param_4 == 0) {
    param_1[0x11] = uVar7;
  }
  param_1[0xe] = uVar7;
  func_003E655C(param_1 + 0xe,0,0);
  *(undefined1 *)((int)param_1 + 0x52) = 0;
  *(undefined1 *)(param_1 + 0x14) = 1;
  return param_1;
}

