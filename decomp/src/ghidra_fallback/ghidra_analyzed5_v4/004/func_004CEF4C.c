#include "ghidra_types.h"

extern int func_004ECF14(int param_1,int *param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00584150(int param_1,int *param_2);
extern int *DAT_004cf0dc;
extern float DAT_004cf0e0;
extern int *DAT_004cf0e4;
extern undefined4 DAT_004cf0e8;
extern int DAT_004cf0ec;

// USA 004CEF4C <- EU 004CEF24 (Ghidra, non-matching)
// GLOBAL DAT_004cf0dc int *
// GLOBAL DAT_004cf0e0 float
// GLOBAL DAT_004cf0e4 int *
// GLOBAL DAT_004cf0e8 undefined4
// GLOBAL DAT_004cf0ec int

byte func_004CEF4C(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  byte bVar8;
  bool bVar9;
  
  piVar1 = DAT_004cf0dc;
  bVar8 = 0;
  if (param_1[0x16] + 1 == param_2) {
    *(char *)((int)param_1 + 0x169) = (char)param_1[0x5a];
    piVar1 = DAT_004cf0dc;
  }
  else {
    *(undefined1 *)((int)param_1 + 0x169) = 0;
  }
  param_1[0x16] = param_2;
  iVar7 = *piVar1;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  if (((char)param_1[0xc] != '\0') &&
     ((iVar7 == 0 || (iVar2 = func_00584150(iVar7,(int *)param_1[0x15]), iVar2 != 0)))) {
    uVar3 = param_1[0x59];
    bVar6 = 1;
    bVar9 = (uVar3 & 0x20000000) != 0;
    if (bVar9) {
      uVar3 = param_1[0x15];
    }
    if (((bVar9 && uVar3 != 0) && iVar7 != 0) &&
       (iVar7 = func_0052FBA0(iVar7 + 0x3dbbc,*(uint *)(uVar3 + 4)), iVar7 != 0)) {
      func_004ECF14(iVar7,param_1);
    }
    if (DAT_004cf0e0 < ALBW_AS_F32(param_1[0x55])) {
      bVar4 = 1;
      if ((param_1[0x59] & 0x4000000U) != 0) {
        uVar3 = param_1[0x4f];
        iVar7 = *DAT_004cf0e4 +
                (int)(short)(ushort)*(byte *)(DAT_004cf0ec + *DAT_004cf0e4) *
                (int)(short)DAT_004cf0e8 * 4;
        if (*(char *)(iVar7 + 0x1618) != '\0') {
          if (uVar3 < *(uint *)(iVar7 + 0x161c)) {
            iVar2 = *(int *)(iVar7 + 0x1624) + uVar3 * 0x38;
          }
          else {
            iVar2 = *(int *)(iVar7 + 0x1624);
          }
          bVar8 = 0;
          if (*(char *)(iVar2 + 0x34) != '\0') {
            if (uVar3 < *(uint *)(iVar7 + 0x161c)) {
              iVar7 = *(int *)(iVar7 + 0x1624) + uVar3 * 0x38;
            }
            else {
              iVar7 = *(int *)(iVar7 + 0x1624);
            }
            bVar8 = *(byte *)(iVar7 + 0x35);
          }
        }
        bVar4 = bVar8 ^ 1;
      }
      goto LAB_004cf060;
    }
  }
  bVar6 = 0;
  bVar4 = 1;
LAB_004cf060:
  uVar3 = 0;
  do {
    if (((bVar6 & bVar4) == 0) || ((param_1[0x59] & 1 << (uVar3 & 0xff)) != 0)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    bVar8 = *(byte *)(param_1 + 0x5a);
    bVar5 = (byte)(1 << (uVar3 & 0xff));
    uVar3 = uVar3 + 1;
    if (bVar9) {
      bVar5 = bVar5 | bVar8;
    }
    else {
      bVar5 = bVar8 & ~bVar5;
    }
    *(byte *)(param_1 + 0x5a) = bVar5;
  } while ((int)uVar3 < 7);
  if (bVar4 == 1) {
    uVar3 = param_1[0x59] & 0xfffdffff;
  }
  else {
    uVar3 = param_1[0x59] | 0x20000;
  }
  param_1[0x59] = uVar3;
  return bVar6;
}

