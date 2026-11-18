#include "ghidra_types.h"

extern int func_00328E30(int param_1,int param_2,uint param_3);
extern int func_0036E490(byte *param_1,uint param_2,undefined4 param_3);
extern float func_0036EAF8(undefined4 param_1,int param_2);
extern float DAT_0036e3e0;
extern float DAT_0036e3e4;
extern int *DAT_0036e3e8;
extern float DAT_0036e3ec;
extern float DAT_0036e3f0;

// USA 0036E2F4 <- EU 0036E2D0 (Ghidra, non-matching)
// GLOBAL DAT_0036e3e0 float
// GLOBAL DAT_0036e3e4 float
// GLOBAL DAT_0036e3e8 int *
// GLOBAL DAT_0036e3ec float
// GLOBAL DAT_0036e3f0 float

undefined4 func_0036E2F4(byte *param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = func_0036EAF8(param_1,param_2);
  fVar3 = *(float *)(param_1 + 0x5c);
  if (DAT_0036e3e0 < fVar2 - fVar3) {
    fVar2 = fVar3 + DAT_0036e3e0;
  }
  else if (fVar2 - fVar3 < DAT_0036e3e4) {
    fVar2 = fVar3 - DAT_0036e3e0;
  }
  *(float *)(param_1 + 0x5c) = fVar2;
  if (*(int *)(param_1 + 100) == 0) {
    if (*(int *)(param_1 + 0x40) < *(int *)(param_1 + 0x54)) {
      iVar1 = *DAT_0036e3e8 + *(int *)(param_1 + 0x40);
      *(int *)(param_1 + 0x40) = iVar1;
      if (*(int *)(param_1 + 0x54) <= iVar1) {
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x54);
      }
    }
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x44);
    if (*(int *)(param_1 + 0x40) == *(int *)(param_1 + 0x54)) {
      fVar2 = *(float *)(param_1 + 8);
      fVar3 = *(float *)(param_2 + 0xc) - fVar2;
      if (DAT_0036e3ec < fVar3) {
        fVar2 = fVar2 + DAT_0036e3ec;
      }
      else {
        if (DAT_0036e3f0 <= fVar3) {
          *(float *)(param_1 + 8) = *(float *)(param_2 + 0xc);
          return func_0036E490(param_1,0,param_2);
        }
        fVar2 = fVar2 - DAT_0036e3ec;
      }
      *(float *)(param_1 + 8) = fVar2;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 100) + -1;
    *(int *)(param_1 + 100) = iVar1;
    if (iVar1 == 0x3a) {
      return func_00328E30(param_2,(int)(char)param_1[0x6a],0);
    }
  }
  return 0;
}

