#include "ghidra_types.h"

extern int func_00499B9C(int param_1,int *param_2,int *param_3,undefined4 param_4);
extern int *DAT_00499d50;
extern int DAT_00499d54;

// USA 00499C60 <- EU 00499C38 (Ghidra, non-matching)
// GLOBAL DAT_00499d50 int *
// GLOBAL DAT_00499d54 int

int * func_00499C60(int *param_1,int param_2,int *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xc))
  #define local_20 ((char *)(albw_frame + 0x10))
  uVar5 = 1;
  if (param_4 == 0) goto LAB_00499c78;
  if (param_4 != 1) {
    if (param_4 == 2) {
      uVar5 = 3;
      goto LAB_00499c78;
    }
    if (param_4 != 3) goto LAB_00499c78;
  }
  uVar5 = 6;
LAB_00499c78:
  local_20[0] = '\0';
  iVar2 = (**(code **)(*param_1 + 0x4c))(param_1,local_20);
  if ((iVar2 != 0) && ((param_4 != 3 || (local_20[0] == '\0')))) {
    piVar3 = (int *)(param_2 + 0x18);
    *(undefined4 *)(param_2 + 0x20) = 0;
    piVar1 = DAT_00499d50;
    *(undefined4 *)(param_2 + 0x24) = 0;
    *(undefined4 *)(param_2 + 0x28) = 0;
    *(undefined4 *)(param_2 + 0x2c) = 0;
    *(undefined4 *)(param_2 + 0x30) = 0;
    iVar2 = *piVar1;
    *piVar3 = iVar2;
    *(int *)((int)piVar3 + *(int *)(iVar2 + -0x30)) = piVar1[8];
    *(int *)(param_2 + 0x1c) = piVar1[9];
    *(undefined1 *)(param_2 + 0x34) = 0;
    local_24 = (**(code **)(*param_1 + 0x70))(param_1);
    local_28 = DAT_00499d54;
    uVar4 = func_00499B9C((int)piVar3,&local_28,param_3,uVar5);
    param_1[0x14] = uVar4;
    if ((uVar4 & 0x80000000) == 0) {
      *(char *)(param_2 + 0x34) = (char)param_4;
      return param_1;
    }
  }
  return (int *)0x0;
}

