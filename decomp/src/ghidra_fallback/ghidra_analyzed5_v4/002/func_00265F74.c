#include "ghidra_types.h"

extern int func_004905E0(float fparam_0);
extern int func_004F4A68();
extern float DAT_00266130;
extern int DAT_00266134;

// USA 00265F74 <- EU 00265F9C (Ghidra, non-matching)
// GLOBAL DAT_00266130 float
// GLOBAL DAT_00266134 int

undefined4 func_00265F74(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  if (*(char *)(param_1 + 0x91c) == '\0' || *(char *)(param_1 + 0x91c) == '\x03') {
    fVar2 = *(float *)(param_2 + 8);
    if (fVar2 <= DAT_00266130) {
      fVar2 = -fVar2;
    }
    if ((int)ALBW_AS_U32(fVar2) < DAT_00266134) {
      fVar3 = *(float *)(param_2 + 0xc);
      fVar2 = *(float *)(param_2 + 4);
      if (fVar3 == DAT_00266130 && fVar2 == DAT_00266130) {
        iVar1 = 0;
      }
      else if (fVar3 < DAT_00266130) {
        if (fVar2 < DAT_00266130) {
          if (fVar2 < fVar3) {
            iVar1 = func_004905E0(fVar3 / fVar2);
            iVar1 = -0x40000000 - iVar1;
          }
          else {
            iVar1 = func_004905E0(fVar2 / fVar3);
            iVar1 = iVar1 + -0x80000000;
          }
        }
        else {
          fVar3 = -fVar3;
          if (fVar3 < fVar2) {
            iVar1 = func_004905E0(fVar3 / fVar2);
            iVar1 = iVar1 + 0x40000000;
          }
          else {
            iVar1 = func_004905E0(fVar2 / fVar3);
            iVar1 = -0x80000000 - iVar1;
          }
        }
      }
      else if (fVar2 < DAT_00266130) {
        fVar2 = -fVar2;
        if (fVar3 < fVar2) {
          iVar1 = func_004905E0(fVar3 / fVar2);
          iVar1 = iVar1 + -0x40000000;
        }
        else {
          iVar1 = func_004905E0(fVar2 / fVar3);
          iVar1 = -iVar1;
        }
      }
      else if (fVar3 < fVar2) {
        iVar1 = func_004905E0(fVar3 / fVar2);
        iVar1 = 0x40000000 - iVar1;
      }
      else {
        iVar1 = func_004905E0(fVar2 / fVar3);
      }
      iVar1 = iVar1 - (*(int *)(param_1 + 1000) + -0x80000000);
      if (iVar1 + 0x3fffffffU < 0x7fffffff) {
        *(undefined1 *)(param_1 + 0x93c) = 1;
        *(int *)(param_1 + 0x908) = *(int *)(param_1 + 1000) + iVar1 * 2 + -0x80000000;
      }
    }
  }
  return func_004F4A68(param_1,param_2);
}

