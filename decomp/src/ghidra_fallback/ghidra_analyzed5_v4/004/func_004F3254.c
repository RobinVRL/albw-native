#include "ghidra_types.h"

extern int func_0034C8F0(uint *param_1,int param_2,int param_3);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_004f8600;
extern undefined4 DAT_004f8604;

// USA 004F3254 <- EU 004F322C (Ghidra, non-matching)
// GLOBAL DAT_004f8600 int *
// GLOBAL DAT_004f8604 undefined4

bool func_004F8254(int param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar5 = *(int *)(param_2 + 0x2c);
  if (iVar5 == 0) goto LAB_004f8460;
  if ((*(uint *)(param_1 + 0x670) < *(uint *)(param_1 + 0x674)) && (*(char *)(iVar5 + 1) != '\x1f'))
  {
    return false;
  }
  cVar2 = *(char *)(iVar5 + 3);
  cVar3 = *(char *)(iVar5 + 1);
  if (((*(uint *)(param_1 + 0x59c) & 0x800000) == 0) || (cVar3 != '\x03')) {
    if (cVar3 == '\x0e') {
      if (*(uint *)(param_1 + 0x718) < *(uint *)(param_1 + 0x71c)) {
        return false;
      }
      goto LAB_004f82b4;
    }
    if (cVar3 == '\b') {
      if (*(uint *)(param_1 + 0x6f4) < *(uint *)(param_1 + 0x6f8)) {
        return false;
      }
      goto LAB_004f82b4;
    }
    if (cVar3 == '\t') {
      if (*(uint *)(param_1 + 0x700) < *(uint *)(param_1 + 0x704)) {
        return false;
      }
      goto LAB_004f82b4;
    }
    if (cVar3 == '\x05') {
      uVar1 = *(uint *)(param_2 + 0x30) >> 0x1c;
      if ((*(uint *)(param_1 + 0x67c) < *(uint *)(param_1 + 0x680)) && (uVar1 == 2 || uVar1 == 4)) {
        return false;
      }
      if ((*(uint *)(param_1 + 0x688) < *(uint *)(param_1 + 0x68c)) && (uVar1 == 0)) {
        return false;
      }
      if ((*(uint *)(param_1 + 0x6a0) < *(uint *)(param_1 + 0x6a4)) && (uVar1 == 3)) {
        return false;
      }
      if ((*(uint *)(param_1 + 0x694) < *(uint *)(param_1 + 0x698)) && (uVar1 == 1)) {
        return false;
      }
      goto LAB_004f82b4;
    }
    if (cVar3 == '\x03') {
      if (cVar2 == '\x02') {
        if (*(uint *)(param_1 + 0x724) < *(uint *)(param_1 + 0x728)) {
          return false;
        }
        goto LAB_004f8460;
      }
      goto LAB_004f82b4;
    }
    if (cVar3 != '\x01') goto LAB_004f82b4;
  }
  else {
    if (cVar2 == '\x02') {
      return false;
    }
LAB_004f82b4:
    if (cVar2 != '\x01') {
      if (cVar3 == '\x02' || cVar2 == '\x03') {
        if (*(uint *)(param_1 + 0x6c4) < *(uint *)(param_1 + 0x6c8)) {
          return false;
        }
      }
      else if (cVar3 == '\v') {
        if (*(uint *)(param_1 + 0x6d0) < *(uint *)(param_1 + 0x6d4)) {
          return false;
        }
      }
      else if (cVar3 == '\x06') {
        if (*(uint *)(param_1 + 0x6ac) < *(uint *)(param_1 + 0x6b0)) {
          return false;
        }
      }
      else if (cVar3 == '\f') {
        if (*(uint *)(param_1 + 0x6e8) < *(uint *)(param_1 + 0x6ec)) {
          return false;
        }
      }
      else if ((cVar3 == '\n') && (*(uint *)(param_1 + 0x70c) < *(uint *)(param_1 + 0x710))) {
        return false;
      }
      goto LAB_004f8460;
    }
  }
  if (*(uint *)(param_1 + 0x6b8) < *(uint *)(param_1 + 0x6bc)) {
    return false;
  }
LAB_004f8460:
  if (((*(char *)(param_1 + 0x852) != '\0') &&
      (iVar5 = func_0052FBA0(*DAT_004f8600 + 0x3dbbc,*(uint *)(param_2 + 0x28)), iVar5 != 0)) &&
     (*(int *)(*(int *)(param_1 + 0x2d0) + 8) == *(int *)(*(int *)(iVar5 + 0x2d0) + 8))) {
    return false;
  }
  uVar4 = DAT_004f8604;
  if (*(int *)(param_2 + 0x2c) != 0) {
    cVar2 = *(char *)(*(int *)(param_2 + 0x2c) + 1);
    if (cVar2 == '\f') {
      if ((*(int *)(param_1 + 0x8a0) != 0) &&
         (*(int *)(param_1 + 0x8a0) == *(int *)(param_2 + 0x28))) {
        return false;
      }
    }
    else if (cVar2 == '\v') {
      if ((*(int *)(param_1 + 0x8a4) != 0) &&
         (*(int *)(param_1 + 0x8a4) == *(int *)(param_2 + 0x28))) {
        return false;
      }
    }
    else if (cVar2 == '\n') {
      *(undefined4 *)(param_1 + 0x710) = 10;
      *(undefined4 *)(param_1 + 0x714) = uVar4;
      *(undefined4 *)(param_1 + 0x70c) = 0;
    }
  }
  puVar6 = *(undefined4 **)(param_1 + 0x43c);
  *(undefined4 *)(param_1 + 0x7b4) = *puVar6;
  *(undefined4 *)(param_1 + 0x7b8) = puVar6[1];
  *(undefined4 *)(param_1 + 0x7bc) = puVar6[2];
  *(undefined4 *)(param_1 + 0x7c0) = puVar6[3];
  *(undefined4 *)(param_1 + 0x7c4) = puVar6[4];
  *(undefined4 *)(param_1 + 0x7c8) = puVar6[5];
  *(undefined4 *)(param_1 + 0x7cc) = puVar6[6];
  *(undefined4 *)(param_1 + 2000) = puVar6[7];
  *(undefined1 *)(param_1 + 0x7d4) = *(undefined1 *)(puVar6 + 8);
  *(undefined1 *)(param_1 + 0x7d5) = *(undefined1 *)((int)puVar6 + 0x21);
  *(undefined1 *)(param_1 + 0x7d6) = *(undefined1 *)((int)puVar6 + 0x22);
  *(undefined1 *)(param_1 + 0x7d7) = *(undefined1 *)((int)puVar6 + 0x23);
  *(undefined4 *)(param_1 + 0x7d8) = puVar6[9];
  *(undefined4 *)(param_1 + 0x7dc) = puVar6[10];
  *(undefined4 *)(param_1 + 0x7e0) = puVar6[0xb];
  *(undefined2 *)(param_1 + 0x7e4) = *(undefined2 *)(puVar6 + 0xc);
  *(undefined2 *)(param_1 + 0x7e6) = *(undefined2 *)((int)puVar6 + 0x32);
  *(undefined4 *)(param_1 + 0x7e8) = puVar6[0xd];
  *(undefined4 *)(param_1 + 0x7ec) = puVar6[0xe];
  *(undefined4 *)(param_1 + 0x7f0) = puVar6[0xf];
  *(undefined4 *)(param_1 + 0x7f4) = puVar6[0x10];
  *(undefined4 *)(param_1 + 0x7f8) = puVar6[0x11];
  iVar5 = func_0034C8F0((uint *)(param_1 + 0x7b4),*(int *)(param_1 + 0x4b0),param_2);
  return iVar5 != 0;
}

