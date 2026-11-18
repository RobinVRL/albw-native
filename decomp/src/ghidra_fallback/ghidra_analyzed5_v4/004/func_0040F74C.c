#include "ghidra_types.h"

extern int func_0010AC24(undefined4 param_1,undefined4 param_2);
extern int func_003E655C(uint *param_1,int param_2,int param_3);
extern int func_0040E588(int param_1,byte *param_2,int param_3);
extern int func_0056137C(uint *param_1,uint *param_2);
extern undefined4 DAT_0040f8a8;
extern int *DAT_0040f8ac;
extern undefined4 DAT_0040f8b0;

// USA 0040F74C <- EU 0040F72C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 undefined4
// PARAM param_7 Stack[0x8]:4 undefined4
// GLOBAL DAT_0040f8a8 undefined4
// GLOBAL DAT_0040f8ac int *
// GLOBAL DAT_0040f8b0 undefined4

undefined4 *
func_0040F74C(undefined4 *param_1,byte *param_2,undefined4 param_3,int param_4,int param_5,
             undefined4 param_6,undefined4 param_7)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  code *pcVar5;
  uint uVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(uint *)(albw_frame + 0x0))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x4))
  uVar4 = DAT_0040f8a8;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  *param_1 = uVar4;
  param_1[4] = 0;
  param_1[6] = 0;
  piVar1 = DAT_0040f8ac;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  iVar2 = *piVar1;
  param_1[5] = iVar2;
  uVar4 = DAT_0040f8b0;
  *(int *)((int)param_1 + *(int *)(iVar2 + -0x30) + 0x14) = piVar1[3];
  param_1[0xb] = uVar4;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = param_3;
  param_1[0x11] = param_4;
  param_1[0x12] = param_6;
  param_1[0x13] = param_7;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)((int)param_1 + 0x51) = 1;
  iVar2 = func_0040E588((int)(param_1 + 5),param_2,param_5);
  if (iVar2 == 0) {
    pcVar5 = (code *)param_1[0x12];
    uVar4 = param_1[0xb];
joined_r0x0040f82c:
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(uVar4,param_1[0x13]);
    }
    return param_1;
  }
  param_1[0xd] = param_1 + 5;
  if (*(char *)(param_1 + 0xc) == '\0') {
    iVar2 = func_0056137C(param_1 + 6,&local_20);
    uVar6 = local_20;
    if (iVar2 < 0) {
      func_0010AC24(iVar2,0x40f850);
      uVar6 = local_20;
    }
  }
  else {
    local_20 = 0;
    uStack_1c = 0;
    uVar3 = func_0056137C(param_1 + 6,&local_20);
    param_1[0xb] = uVar3;
    uVar6 = 0;
    if ((uVar3 & 0x80000000) == 0) {
      uVar6 = local_20;
    }
    if ((int)uVar3 < 0) {
      pcVar5 = (code *)param_1[0x12];
      uVar4 = *(undefined4 *)(param_1[0xd] + 0x18);
      goto joined_r0x0040f82c;
    }
  }
  if (param_4 == 0) {
    param_1[0x11] = uVar6;
  }
  param_1[0xe] = uVar6;
  func_003E655C(param_1 + 0xe,0,0);
  *(undefined1 *)((int)param_1 + 0x52) = 1;
  *(undefined1 *)(param_1 + 0x14) = 1;
  return param_1;
}

