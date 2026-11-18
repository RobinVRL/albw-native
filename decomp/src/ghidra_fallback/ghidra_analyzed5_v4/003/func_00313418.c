#include "ghidra_types.h"

extern int func_00312754(int param_1);
extern int func_0051AAD0(int param_1);
extern int func_0051AAE4(int param_1);
extern int func_0051ABB4(int param_1);
extern int func_0051AD24(int param_1);
extern int func_0051B3B0(int param_1);
extern int func_0051B3F0(int param_1);
extern int func_0051B770(int param_1);
extern int func_0051B784(int param_1);
extern int func_0051BFB8(int param_1);
extern int func_0051C01C(int param_1);
extern int func_0058D874(int param_1);
extern int func_006260FC(int param_1,int param_2,undefined1 param_3);
extern int func_00626A48(int param_1);
extern undefined4 DAT_00313778;
extern int *DAT_0031377c;

// USA 00313418 <- EU 003133F4 (Ghidra, non-matching)
// GLOBAL DAT_00313778 undefined4
// GLOBAL DAT_0031377c int *

undefined1 func_00313418(int *param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  switch(param_2) {
  case 0:
    if ((char)param_1[0x259] != '\x06') {
      func_006260FC((int)param_1,6,0);
    }
    break;
  case 1:
    if ((char)param_1[0x262] == '\0') {
      return 0;
    }
    (**(code **)(*param_1 + 0xac))(param_1,1,0xffffffff);
    *(char *)(param_1 + 0x262) = (char)param_1[0x262] + '\x01';
    break;
  case 2:
    if ((char)param_1[0x259] != '\a') {
      func_006260FC((int)param_1,7,0);
      return 0;
    }
    if ((char)param_1[0x262] != '\x01') {
      return 0;
    }
    break;
  case 3:
    (**(code **)(*param_1 + 0xac))(param_1,1,0xffffffff);
    piVar1 = (int *)func_00312754((int)param_1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x5c))(piVar1,DAT_00313778);
    }
    break;
  case 4:
    if ((char)param_1[0x259] != '\b') {
      func_006260FC((int)param_1,8,0);
      return 0;
    }
    if ((char)param_1[0x262] != '\x01') {
      return 0;
    }
    return 1;
  case 5:
    if ((char)param_1[0x259] != '\t') {
      func_006260FC((int)param_1,9,0);
    }
    break;
  case 6:
    (**(code **)(*param_1 + 0xac))(param_1,8,0xffffffff);
    if ((char)param_1[0x262] == '\0') {
      *(undefined1 *)(param_1 + 0x262) = 1;
    }
    else if ((char)param_1[0x262] == '\x02') {
      return 1;
    }
    return 0;
  case 7:
    func_00626A48((int)param_1);
    break;
  case 8:
    iVar3 = *DAT_0031377c;
    if (iVar3 != 0) {
      *(ushort *)(iVar3 + 0x33e) = *(ushort *)(iVar3 + 0x33e) & 64999;
      func_0051B770(iVar3);
      func_0051AAD0(iVar3);
    }
    break;
  case 9:
    if (*DAT_0031377c != 0) {
      func_0051ABB4(*DAT_0031377c);
    }
    break;
  case 10:
    iVar3 = *DAT_0031377c;
    if (iVar3 != 0) {
      if (*(short *)((int)param_1 + 0x95a) == 0) {
        *(undefined2 *)((int)param_1 + 0x95a) = 1;
        return 0;
      }
      if (*(short *)((int)param_1 + 0x95a) != 1) {
        return 0;
      }
      iVar2 = func_0058D874(iVar3);
      if (iVar2 == 0) {
        return 0;
      }
      func_0051B784(iVar3);
      func_0051AAE4(iVar3);
      *(undefined2 *)((int)param_1 + 0x95a) = 0;
      return 1;
    }
  case 0xb:
    iVar3 = *DAT_0031377c;
    if (iVar3 != 0) {
      func_0051ABB4(iVar3);
      func_0051BFB8(iVar3);
    }
    break;
  case 0xc:
    if (*DAT_0031377c != 0) {
      func_0051AD24(*DAT_0031377c);
    }
    break;
  case 0xd:
    if (*DAT_0031377c != 0) {
      func_0051B3B0(*DAT_0031377c);
    }
    break;
  case 0xe:
    iVar3 = *DAT_0031377c;
    if (iVar3 != 0) {
      func_0051ABB4(iVar3);
      func_0051C01C(iVar3);
    }
    break;
  case 0xf:
    if (*DAT_0031377c != 0) {
      func_0051B3F0(*DAT_0031377c);
    }
    break;
  case 0x10:
    iVar3 = *DAT_0031377c;
    if (iVar3 != 0) {
      func_0051AD24(iVar3);
      *(ushort *)(iVar3 + 0x33e) = *(ushort *)(iVar3 + 0x33e) | 8;
    }
  }
  return 1;
}

