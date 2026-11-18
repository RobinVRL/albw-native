#include "ghidra_types.h"

extern int func_001507A8(int param_1,int param_2);
extern int func_004905E0(float fparam_0);
extern float DAT_00517858;
extern int DAT_0051785c;

// USA 0051769C <- EU 00517674 (Ghidra, non-matching)
// GLOBAL DAT_00517858 float
// GLOBAL DAT_0051785c int

bool func_0051769C(int param_1,int param_2)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = *(float *)(param_2 + 8);
  if (fVar5 <= DAT_00517858) {
    fVar5 = -fVar5;
  }
  if (((int)ALBW_AS_U32(fVar5) < DAT_0051785c) && (DAT_0051785c + -0x1000000 <= *(int *)(param_2 + 0x1c))) {
    fVar6 = *(float *)(param_2 + 0xc);
    fVar5 = *(float *)(param_2 + 4);
    if (fVar6 == DAT_00517858 && fVar5 == DAT_00517858) {
      iVar3 = 0;
    }
    else if (fVar6 < DAT_00517858) {
      if (fVar5 < DAT_00517858) {
        if (fVar5 < fVar6) {
          iVar3 = func_004905E0(fVar6 / fVar5);
          iVar3 = -0x40000000 - iVar3;
        }
        else {
          iVar3 = func_004905E0(fVar5 / fVar6);
          iVar3 = iVar3 + -0x80000000;
        }
      }
      else {
        fVar6 = -fVar6;
        if (fVar6 < fVar5) {
          iVar3 = func_004905E0(fVar6 / fVar5);
          iVar3 = iVar3 + 0x40000000;
        }
        else {
          iVar3 = func_004905E0(fVar5 / fVar6);
          iVar3 = -0x80000000 - iVar3;
        }
      }
    }
    else if (fVar5 < DAT_00517858) {
      fVar5 = -fVar5;
      if (fVar6 < fVar5) {
        iVar3 = func_004905E0(fVar6 / fVar5);
        iVar3 = iVar3 + -0x40000000;
      }
      else {
        iVar3 = func_004905E0(fVar5 / fVar6);
        iVar3 = -iVar3;
      }
    }
    else if (fVar6 < fVar5) {
      iVar3 = func_004905E0(fVar6 / fVar5);
      iVar3 = 0x40000000 - iVar3;
    }
    else {
      iVar3 = func_004905E0(fVar5 / fVar6);
    }
    iVar4 = *(int *)(param_1 + 1000);
    if (iVar4 + 0xa0000000U >> 0x1e == iVar3 + 0x20000000U >> 0x1e) {
      uVar1 = *(ushort *)(param_2 + 0x20);
      *(undefined1 *)(param_1 + 0xcf4) = 1;
      *(undefined1 *)(param_1 + 0xce2) = 0;
      if (((uVar1 & 0x1f) == 6) && (*(char *)(param_1 + 0xcf5) != '\0')) {
        *(int *)(param_1 + 1000) = iVar4 + -0x80000000;
        *(byte *)(param_1 + 0xcb5) = *(byte *)(param_1 + 0xcb5) ^ 1;
        *(undefined1 *)(param_1 + 0xcf4) = 0;
      }
      else {
        if (*(char *)(param_1 + 0xcb5) == '\0') {
          iVar4 = iVar4 + -0x40000000;
        }
        else {
          iVar4 = iVar4 + 0x40000000;
        }
        *(int *)(param_1 + 1000) = iVar4;
      }
    }
    *(undefined4 *)(param_1 + 0xce8) = 0;
  }
  bVar2 = func_001507A8(param_1,param_2);
  return bVar2;
}

