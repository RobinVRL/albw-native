#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0014FAFC(int param_1,uint param_2,float fparam_0);
extern int func_004905E0(float fparam_0);
extern int func_0051D37C(int *param_1,int param_2,int param_3);
extern int func_00520FC0(void);
extern float DAT_0035e1c4;
extern float DAT_0035e1c8;
extern int *DAT_0035e1cc;
extern undefined4 DAT_0035e1d0;

// USA 0035E020 <- EU 0035DFFC (Ghidra, non-matching)
// GLOBAL DAT_0035e1c4 float
// GLOBAL DAT_0035e1c8 float
// GLOBAL DAT_0035e1cc int *
// GLOBAL DAT_0035e1d0 undefined4

void func_0035E020(int param_1)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  #define fStack_1c (*(float *)(albw_frame + 0x14))
  #define fStack_18 (*(float *)(albw_frame + 0x18))
  #define local_14 ((uint *)(albw_frame + 0x1c))
  fVar5 = DAT_0035e1c4;
  func_0014FAFC(param_1,*(uint *)(param_1 + 1000),DAT_0035e1c4);
  pfVar1 = (float *)func_00520FC0();
  func_00115C70(&local_20,pfVar1,(float *)(param_1 + 0x3d0));
  fVar3 = SQRT(local_20 * local_20 + fStack_18 * fStack_18);
  fVar4 = DAT_0035e1c8;
  if (fVar3 == DAT_0035e1c8 && fStack_1c == DAT_0035e1c8) {
    local_14[0] = 0;
  }
  else if (fVar3 < DAT_0035e1c8) {
    if (fStack_1c < DAT_0035e1c8) {
      if (fStack_1c < fVar3) {
        iVar2 = func_004905E0(fVar3 / fStack_1c);
        local_14[0] = 0xc0000000 - iVar2;
      }
      else {
        iVar2 = func_004905E0(fStack_1c / fVar3);
        local_14[0] = iVar2 + 0x80000000;
      }
    }
    else {
      fVar3 = -fVar3;
      if (fVar3 < fStack_1c) {
        iVar2 = func_004905E0(fVar3 / fStack_1c);
        local_14[0] = iVar2 + 0x40000000;
      }
      else {
        iVar2 = func_004905E0(fStack_1c / fVar3);
        local_14[0] = 0x80000000 - iVar2;
      }
    }
  }
  else if (fStack_1c < DAT_0035e1c8) {
    fStack_1c = -fStack_1c;
    if (fVar3 < fStack_1c) {
      iVar2 = func_004905E0(fVar3 / fStack_1c);
      local_14[0] = iVar2 + 0xc0000000;
    }
    else {
      iVar2 = func_004905E0(fStack_1c / fVar3);
      local_14[0] = -iVar2;
    }
  }
  else if (fVar3 < fStack_1c) {
    iVar2 = func_004905E0(fVar3 / fStack_1c);
    local_14[0] = 0x40000000 - iVar2;
  }
  else {
    local_14[0] = func_004905E0(fStack_1c / fVar3);
  }
  func_0051D37C((int *)local_14,-*DAT_0035e1cc,*DAT_0035e1cc);
  *(uint *)(param_1 + 0x440) = 0x40000000 - local_14[0];
  func_00115154(&local_28,&local_24,local_14[0]);
  if (local_24 == fVar4) {
    *(undefined4 *)(param_1 + 0x3e0) = DAT_0035e1d0;
  }
  else {
    *(float *)(param_1 + 0x3e0) = (local_28 * fVar5) / local_24;
  }
  return;
}

