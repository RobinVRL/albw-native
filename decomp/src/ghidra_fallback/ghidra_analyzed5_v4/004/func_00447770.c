#include "ghidra_types.h"

extern int func_00447A40(int param_1,undefined4 param_2,int param_3,int param_4);
extern int func_004B989C(int param_1);
extern int func_0051B5C4(int param_1);
extern int func_00584B94(int param_1,int param_2);
extern int func_0066CC58(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00447888;
extern int DAT_0044788c;
extern int *DAT_00447890;

// USA 00447770 <- EU 00447748 (Ghidra, non-matching)
// GLOBAL DAT_00447888 int *
// GLOBAL DAT_0044788c int
// GLOBAL DAT_00447890 int *

void func_00447770(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar5;
  
  uVar2 = (uint)*(short *)(param_1 + 0xe2);
  iVar4 = *(int *)(param_1 + 0x1c);
  if (-1 < (int)uVar2) {
    param_3 = *(uint *)(iVar4 + 8);
    if (uVar2 < param_3) {
      param_3 = *(uint *)(iVar4 + 0xc);
      iVar3 = param_3 + uVar2 * 0x38;
    }
    else {
      iVar3 = *(int *)(iVar4 + 0xc);
    }
    if (*(char *)(iVar3 + 0x35) != '\0') {
      return;
    }
  }
  if ((*(char *)(*(int *)(param_1 + 0x210) + 0x5d) == '\0') &&
     (uVar2 = (uint)*(short *)(param_1 + 0xfa), -1 < (int)uVar2)) {
    param_3 = *(uint *)(iVar4 + 8);
    if (uVar2 < param_3) {
      iVar4 = *(int *)(iVar4 + 0xc) + uVar2 * 0x38;
    }
    else {
      iVar4 = *(int *)(iVar4 + 0xc);
    }
    if (*(char *)(iVar4 + 0x35) != '\0') {
      return;
    }
  }
  *(undefined1 *)(param_1 + 0xf) = 0x84;
  func_004B989C(*(int *)(param_1 + 0x10));
  if (*(char *)(*(int *)(param_1 + 0x210) + 0x5d) == '\0') {
    if (*(char *)(param_1 + 0x290) == '\0') {
      func_0066CC58((undefined4 *)(param_1 + 0x158),0);
      uVar5 = extraout_r1_00;
    }
    else {
      func_0066CC58((undefined4 *)(param_1 + 0x158),2);
      uVar5 = extraout_r1;
    }
    func_00447A40(param_1,uVar5,param_3,param_4);
    bVar1 = func_00584B94(*DAT_00447890,DAT_0044788c);
    if (((bVar1) && (iVar4 = *(int *)(param_1 + 0x214), *(char *)(iVar4 + 0xd) == '\0')) &&
       (*(char *)(iVar4 + 0xe) == '\0')) {
      *(undefined1 *)(iVar4 + 0xe) = 1;
    }
  }
  else {
    func_0066CC58((undefined4 *)(param_1 + 0x158),6);
    func_0051B5C4(*DAT_00447888);
  }
  *(undefined1 *)(param_1 + 0x285) = 0;
  return;
}

