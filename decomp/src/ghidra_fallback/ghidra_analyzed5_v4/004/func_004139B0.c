// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int DAT_00413aa0;
extern int DAT_00413aa4;
extern float DAT_00413aa8;
extern float DAT_00413aac;
extern float DAT_00413ab0;
extern int DAT_00413ab4;
extern int DAT_00413ab8;

// USA 004139B0 <- EU 00413990 (Ghidra, non-matching)
// GLOBAL DAT_00413aa0 int
// GLOBAL DAT_00413aa4 int
// GLOBAL DAT_00413aa8 float
// GLOBAL DAT_00413aac float
// GLOBAL DAT_00413ab0 float
// GLOBAL DAT_00413ab4 int
// GLOBAL DAT_00413ab8 int

float func_004139B0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  uVar2 = 0;
  if (0xbff < DAT_00413aa0 - param_1) {
    iVar3 = (int)((ulonglong)((longlong)DAT_00413aa4 * (longlong)(DAT_00413aa0 - param_1)) >> 0x20);
    iVar3 = (iVar3 >> 9) - (iVar3 >> 0x1f);
    uVar2 = -iVar3;
    param_1 = param_1 + iVar3 * 0xc00;
  }
  iVar3 = (int)((ulonglong)((longlong)DAT_00413aa4 * (longlong)-param_1) >> 0x20);
  iVar3 = (iVar3 >> 9) - (iVar3 >> 0x1f);
  if (iVar3 != 0 && -1 < -iVar3) {
    iVar3 = (int)((ulonglong)((longlong)DAT_00413aa4 * (longlong)param_1) >> 0x20);
    iVar3 = (iVar3 >> 9) - (iVar3 >> 0x1f);
    uVar2 = uVar2 + iVar3;
    param_1 = param_1 + iVar3 * -0xc00;
  }
  iVar3 = (int)(param_1 + ((uint)(param_1 >> 0x1f) >> 0x18)) >> 8;
  iVar4 = param_1 + iVar3 * -0x100;
  fVar5 = DAT_00413aa8;
  if (0 < (int)uVar2) {
    if ((uVar2 & 1) != 0) {
      fVar5 = DAT_00413aac;
    }
    for (iVar1 = (int)uVar2 >> 1; iVar1 != 0; iVar1 = iVar1 + -1) {
      fVar5 = fVar5 * DAT_00413aac * DAT_00413aac;
    }
    uVar2 = 0;
  }
  if (uVar2 != 0 && -1 < (int)-uVar2) {
    if ((uVar2 & 1) != 0) {
      fVar5 = fVar5 * DAT_00413ab0;
    }
    for (iVar1 = (int)-uVar2 >> 1; iVar1 != 0; iVar1 = iVar1 + -1) {
      fVar5 = fVar5 * DAT_00413ab0 * DAT_00413ab0;
    }
  }
  if (iVar3 != 0) {
    fVar5 = *(float *)(DAT_00413ab4 + iVar3 * 4) * fVar5;
  }
  if (iVar4 != 0) {
    fVar5 = *(float *)(DAT_00413ab8 + iVar4 * 4) * fVar5;
  }
  return fVar5;
}

