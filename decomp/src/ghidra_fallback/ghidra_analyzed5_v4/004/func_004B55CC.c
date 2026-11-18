#include "ghidra_types.h"

extern int func_0019D01C(int *param_1,int *param_2,int *param_3);
extern int func_0055696C(int param_1,int param_2);
extern int func_00582DD4(undefined4 param_1,int *param_2);
extern int func_006875AC(int *param_1,int *param_2,int param_3);
extern int func_00688CA0(int param_1,int *param_2);
extern int func_00689A2C(undefined4 *param_1,undefined4 param_2,int param_3);
extern undefined4 DAT_004b5880;
extern undefined4 DAT_004b5884;
extern int *DAT_004b5888;

// USA 004B55CC <- EU 004B55A4 (Ghidra, non-matching)
// GLOBAL DAT_004b5880 undefined4
// GLOBAL DAT_004b5884 undefined4
// GLOBAL DAT_004b5888 int *

void func_004B55CC(undefined4 param_1,undefined4 *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_98 (*(int *)(albw_frame + 0x8))
  #define local_94 (*(char * *)(albw_frame + 0xc))
  #define auStack_8c ((undefined1 *)(albw_frame + 0x14))
  #define local_6c (*(int *)(albw_frame + 0x34))
  #define local_68 (*(int *)(albw_frame + 0x38))
  #define local_64 (*(char * *)(albw_frame + 0x3c))
  #define auStack_5c ((undefined1 *)(albw_frame + 0x44))
  #define local_3c ((int *)(albw_frame + 0x64))
  #define local_34 (*(undefined4 *)(albw_frame + 0x6c))
  #define puStack_30 (*(undefined4 * *)(albw_frame + 0x70))
  #define iStack_2c (*(int *)(albw_frame + 0x74))
  #define iStack_28 (*(int *)(albw_frame + 0x78))
  local_34 = param_1;
  puStack_30 = param_2;
  iStack_2c = param_3;
  iStack_28 = param_4;
  puVar3 = func_00689A2C(&local_68,auStack_5c,0x1e);
  uVar1 = DAT_004b5884;
  *(undefined1 *)puVar3[1] = 0;
  *puVar3 = uVar1;
  param_2[2] = 0;
  param_2[6] = 0xffffffff;
  if (*(int *)(param_3 + 8) < *(int *)(param_4 + 8)) {
    func_00688CA0(param_3,&local_68);
    (**(code **)(local_68 + 8))(&local_68);
    iVar4 = 0;
    do {
      if (local_64[iVar4] == '\0') {
        if (((iVar4 < 0x40001) && (iVar4 != 0)) && (uVar5 = iVar4 - 1, -1 < (int)uVar5))
        goto LAB_004b565c;
        break;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x40001);
    goto LAB_004b5670;
  }
  goto LAB_004b56a4;
  while( true ) {
    local_94[uVar5] = '\0';
    uVar5 = uVar5 - 1;
    if (0x7fffffff < uVar5) break;
LAB_004b5764:
    if ((' ' < local_94[uVar5]) && (local_94[uVar5] != '\x7f')) break;
  }
  goto LAB_004b5778;
  while( true ) {
    local_64[uVar5] = '\0';
    uVar5 = uVar5 - 1;
    if (0x7fffffff < uVar5) break;
LAB_004b565c:
    if ((' ' < local_64[uVar5]) && (local_64[uVar5] != '\x7f')) break;
  }
LAB_004b5670:
  if (*local_64 != '\0') {
    bVar2 = func_00582DD4(local_34,&local_68);
    param_2[2] = (uint)bVar2;
    uVar5 = func_0019D01C((int *)*param_2,&local_68,(int *)0x0);
    param_2[6] = uVar5;
  }
LAB_004b56a4:
  local_6c = -1;
  local_3c[0] = -1;
  if (param_2[1] != 2 && param_2[1] != 3) {
    local_6c = 10;
    local_3c[0] = 10;
  }
  if (*(int *)(param_4 + 8) <= *(int *)(param_3 + 8)) goto LAB_004b5854;
  puVar3 = func_00689A2C(&local_98,auStack_8c,0x1e);
  *(undefined1 *)puVar3[1] = 0;
  *puVar3 = uVar1;
  func_00688CA0(param_3,&local_98);
  (**(code **)(local_98 + 8))(&local_98);
  iVar4 = 0;
  do {
    if (local_94[iVar4] == '\0') {
      if (((iVar4 < 0x40001) && (iVar4 != 0)) && (uVar5 = iVar4 - 1, -1 < (int)uVar5))
      goto LAB_004b5764;
      break;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x40001);
LAB_004b5778:
  if (*local_94 == '\0') {
    if (param_2[1] == 2 || param_2[1] == 3) {
      local_6c = -1;
    }
  }
  else {
    func_006875AC(&local_6c,&local_98,-1);
    if ((local_6c == -1) && (param_2[1] == 3)) {
      if (*DAT_004b5888 == 0) {
LAB_004b580c:
        local_6c = 0;
      }
      else {
        iVar4 = func_0055696C(*DAT_004b5888,0x1f);
        if (iVar4 == 3) {
          local_6c = 1;
        }
        else {
          if (iVar4 != 4) goto LAB_004b580c;
          local_6c = 2;
        }
      }
    }
  }
  if (*(int *)(param_3 + 8) < *(int *)(param_4 + 8)) {
    func_00688CA0(param_3,&local_98);
    if (*local_94 == '\0') {
      uVar5 = param_2[2];
      if (uVar5 == 2 || uVar5 == 3) {
        local_3c[0] = -1;
      }
    }
    else {
      func_006875AC(local_3c,&local_98,-1);
    }
  }
LAB_004b5854:
  param_2[3] = local_6c;
  param_2[4] = local_3c[0];
  return;
}

