#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0013F7C4(int param_1);
extern int func_0013F9C0(int param_1);
extern float DAT_0013eef8;
extern int DAT_0013eefc;
extern int DAT_0013ef00;

// USA 0013ED48 <- EU 0013ED48 (Ghidra, non-matching)
// GLOBAL DAT_0013eef8 float
// GLOBAL DAT_0013eefc int
// GLOBAL DAT_0013ef00 int

undefined4 func_0013ED48(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define fStack_20 (*(float *)(albw_frame + 0x0))
  #define fStack_1c (*(float *)(albw_frame + 0x4))
  #define fStack_18 (*(float *)(albw_frame + 0x8))
  func_0013F7C4(param_1);
  fStack_20 = *(float *)(param_1 + 0x4b4);
  fStack_1c = *(float *)(param_1 + 0x4b8);
  fStack_18 = *(float *)(param_1 + 0x4bc);
  func_00115D70(&fStack_20,&fStack_20,*(float *)(*(int *)(param_1 + 0x42c) + 0x24));
  func_00115C54(&fStack_20,&fStack_20,(float *)(param_1 + 0x3d0));
  func_00115C70(&fStack_20,(float *)(param_1 + 0x4cc),&fStack_20);
  fStack_1c = DAT_0013eef8;
  fVar6 = DAT_0013eef8;
  if ((DAT_0013eef8 <=
       fStack_20 * *(float *)(param_1 + 0x4b4) + fStack_18 * *(float *)(param_1 + 0x4bc)) ||
     (iVar1 = func_0013F9C0(param_1), iVar1 != 0)) {
    iVar1 = *(int *)(param_1 + 0x42c);
    fVar4 = *(float *)(param_1 + 0x4fc) + *(float *)(iVar1 + 0x10);
    if (*(float *)(iVar1 + 0xc) < fVar4) {
      fVar4 = *(float *)(iVar1 + 0xc);
    }
    *(float *)(param_1 + 0x4fc) = fVar4;
    fVar3 = *(float *)(param_1 + 0x3dc) + *(float *)(param_1 + 0x4b4) * fVar4;
    fVar5 = *(float *)(iVar1 + 0x14);
    fVar7 = -fVar5;
    if ((fVar7 <= fVar3) && (fVar7 = fVar3, fVar5 < fVar3)) {
      fVar7 = fVar5;
    }
    *(float *)(param_1 + 0x3dc) = fVar7;
    fVar3 = *(float *)(param_1 + 0x4bc);
    fVar7 = fVar3;
    if (fVar3 <= fVar6) {
      fVar7 = -fVar3;
    }
    if ((((DAT_0013eefc < (int)ALBW_AS_U32(fVar7)) ||
         (*(float *)(param_1 + 0x3d8) <= *(float *)(param_1 + 0x4d4))) ||
        (*(float *)(param_1 + 0x3e4) < fVar6)) || (DAT_0013ef00 < (int)ALBW_AS_U32(*(float *)(param_1 + 0x3e4))))
    {
      fVar7 = *(float *)(param_1 + 0x3e4) + *(float *)(iVar1 + 0x1c) + fVar3 * fVar4;
      *(float *)(param_1 + 0x3e4) = fVar7;
      fVar4 = *(float *)(iVar1 + 0x14);
      fVar6 = -fVar4;
      if ((fVar6 <= fVar7) && (fVar6 = fVar7, fVar4 < fVar7)) {
        fVar6 = fVar4;
      }
      *(float *)(param_1 + 0x3e4) = fVar6;
    }
    else {
      *(float *)(param_1 + 0x3e4) = fVar6;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

