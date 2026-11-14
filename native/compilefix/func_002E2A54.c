/* compilefix: USA 002E2A54 (EU 002E2A30), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: member reference base type 'uint' (aka 'unsigned int') is not a structure or union
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - arr[i]._O_S_ -> typed byte access at (char *)&arr[i] + O [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"

extern int func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_003E300C(byte *param_1,uint param_2,uint param_3);
extern int func_004F0028(undefined4 param_1);
extern int func_00537B38(int param_1);
extern int func_005568A4(int param_1);
extern int func_0055696C(int param_1,int param_2);
extern int func_00584084(int param_1,int param_2);
extern int func_00584438(int param_1);
extern int *DAT_002e2e9c;
extern int *DAT_002e2ea0;
extern int DAT_002e2ea4;
extern int DAT_002e2ea8;
extern int *DAT_002e2eac;
extern int *DAT_002e2eb0;
extern int *DAT_002e2eb4;

// USA 002E2A54 <- EU 002E2A30 (Ghidra, non-matching)
// GLOBAL DAT_002e2e9c int *
// GLOBAL DAT_002e2ea0 int *
// GLOBAL DAT_002e2ea4 int
// GLOBAL DAT_002e2ea8 int
// GLOBAL DAT_002e2eac int *
// GLOBAL DAT_002e2eb0 int *
// GLOBAL DAT_002e2eb4 int *

/* WARNING: Type propagation algorithm not settling */

void func_002E2A54(uint *param_1,uint param_2,uint param_3)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 (*(int *)(albw_frame + 0x0))
  #define local_6c (*(uint * *)(albw_frame + 0x4))
  #define local_68 (*(int *)(albw_frame + 0x8))
  #define local_64 ((uint *)(albw_frame + 0xc))
  #define local_5c (*(uint * *)(albw_frame + 0x14))
  #define local_50 (*(undefined2 *)(albw_frame + 0x20))
  #define local_40 (*(int *)(albw_frame + 0x30))
  #define local_3c (*(uint * *)(albw_frame + 0x34))
  #define local_38 (*(int *)(albw_frame + 0x38))
  #define local_34 (*(uint * *)(albw_frame + 0x3c))
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  piVar1 = DAT_002e2e9c;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  iVar5 = *piVar1;
  if (iVar5 == 0) {
    return;
  }
  *(undefined2 *)(param_1 + 0xd) = 3;
  iVar3 = func_0055696C(iVar5,0x2c);
  if (iVar3 == 3) {
    uVar4 = param_1[0xd] | 0x20000000;
  }
  else {
    uVar4 = param_1[0xd] & 0xdfffffff;
  }
  param_1[0xd] = uVar4;
  iVar3 = func_0055696C(iVar5,0x26);
  if (iVar3 == 0) {
    uVar4 = param_1[0xd] & 0xbfffffff;
  }
  else {
    uVar4 = param_1[0xd] | 0x40000000;
  }
  param_1[0xd] = uVar4;
  iVar3 = func_0055696C(iVar5,0x21);
  if (iVar3 == 0) {
    uVar4 = param_1[0xd] & 0x7fffffff;
  }
  else {
    uVar4 = param_1[0xd] | 0x80000000;
  }
  param_1[0xd] = uVar4;
  bVar2 = func_005568A4(iVar5);
  *param_1 = *param_1 & 0xffffffe0 | ((uint)bVar2 << 0x19) >> 0x1b;
  iVar3 = func_00537B38(iVar5);
  if (iVar3 == 1) {
    uVar4 = *param_1 & 0xffffff9f | 0x20;
  }
  else if (iVar3 == 2) {
    uVar4 = *param_1 & 0xffffff9f | 0x40;
  }
  else if (iVar3 == 3) {
    uVar4 = *param_1 | 0x60;
  }
  else {
    uVar4 = *param_1 & 0xffffff9f;
  }
  *param_1 = uVar4;
  iVar3 = func_0055696C(iVar5,1);
  if (iVar3 == 0) {
    uVar4 = *param_1 & 0xfffffe7f;
LAB_002e2cdc:
    *param_1 = uVar4;
  }
  else {
    if (iVar3 == 3) {
      uVar4 = *param_1 & 0xfffffe7f | 0x100;
      goto LAB_002e2cdc;
    }
    *param_1 = *param_1 & 0xfffffe7f | 0x80;
  }
  iVar3 = func_0055696C(iVar5,0x1f);
  if (iVar3 == 3) {
    uVar4 = *param_1 & 0xfffff9ff | 0x200;
  }
  else {
    if (iVar3 != 4) {
      *param_1 = *param_1 & 0xfffff9ff;
      goto LAB_002e2bcc;
    }
    uVar4 = *param_1 & 0xfffff9ff | 0x400;
  }
  *param_1 = uVar4;
LAB_002e2bcc:
  uVar4 = func_004F0028(param_2);
  *param_1 = (uVar4 & 3) << 0xb | *param_1 & 0xffffe7ff;
  uVar4 = func_004F0028(param_3);
  *param_1 = (uVar4 & 3) << 0xd | *param_1 & 0xfe001fff | (param_2 & 0x1f) << 0xf |
             (param_3 & 0x1f) << 0x14;
  iVar5 = func_0055696C(iVar5,0x20);
  if (iVar5 == 0) {
    uVar4 = *param_1 & 0xfdffffff;
  }
  else {
    uVar4 = *param_1 | 0x2000000;
  }
  *param_1 = uVar4;
  if (*DAT_002e2ea0 != 0) {
    iVar5 = func_00584438(*DAT_002e2ea0);
    *param_1 = *param_1 & 0x3ffffff | iVar5 << 0x1a;
  }
  iVar5 = DAT_002e2ea4;
  local_68 = 0xb;
  local_50 = 0;
  (*(undefined2 *)((char *)&local_64[0] + 0)) = 0;
  local_70 = DAT_002e2ea8;
  local_3c = (uint *)*DAT_002e2eac;
  local_40 = DAT_002e2ea4;
  local_6c = local_64;
  (**(code **)(DAT_002e2ea4 + 8))(&local_40);
  iVar3 = 0;
  do {
    if (*(short *)((int)local_3c + iVar3 * 2) == 0) {
      if (iVar3 < 0x40001) goto LAB_002e2d04;
      break;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x40001);
  iVar3 = 0;
LAB_002e2d04:
  if (local_68 <= iVar3) {
    iVar3 = local_68 + -1;
  }
  (**(code **)(local_40 + 8))(&local_40);
  func_0010E3C4(local_64,local_3c,iVar3 << 1);
  *(undefined2 *)((int)local_64 + iVar3 * 2) = 0;
  func_00584084(*DAT_002e2eb0,(int)&local_70);
  *(undefined2 *)(param_1 + 6) = 0;
  (**(code **)(local_70 + 8))(&local_70);
  local_38 = iVar5;
  local_34 = local_6c;
  (**(code **)(iVar5 + 8))(&local_38);
  iVar3 = 0;
  do {
    if (*(short *)((int)local_34 + iVar3 * 2) == 0) {
      if (iVar3 < 0x40001) goto LAB_002e2db4;
      break;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x40001);
  iVar3 = 0;
LAB_002e2db4:
  if (10 < iVar3) {
    iVar3 = 10;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(param_1 + 1,local_34,iVar3 << 1);
  *(undefined2 *)((int)(param_1 + 1) + iVar3 * 2) = 0;
  iVar3 = *DAT_002e2eb4;
  *(undefined2 *)(param_1 + 0xc) = 0;
  local_5c = (uint *)(iVar3 + 0x1098);
  local_64[1] = iVar5;
  (**(code **)(iVar5 + 8))(local_64 + 1);
  iVar5 = 0;
  do {
    if (*(short *)((int)local_5c + iVar5 * 2) == 0) {
      if (iVar5 < 0x40001) goto LAB_002e2e48;
      break;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x40001);
  iVar5 = 0;
LAB_002e2e48:
  if (10 < iVar5) {
    iVar5 = 10;
  }
  (**(code **)(local_64[1] + 8))(local_64 + 1);
  func_0010E3C4(param_1 + 7,local_5c,iVar5 << 1);
  *(undefined2 *)((int)(param_1 + 7) + iVar5 * 2) = 0;
  *(undefined1 *)((int)param_1 + 0x32) = *(undefined1 *)(iVar3 + 0x10ae);
  uVar4 = func_003E300C((byte *)param_1,0x38,0xffffffff);
  param_1[0xe] = uVar4;
  return;
}

