#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_003167D4(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,int param_4, undefined4 param_5);
extern int func_004D7F70(float *param_1,uint param_2);
extern int func_0051E6D0(int param_1,float *param_2,float fparam_0);
extern int func_00520FC0(void);
extern int func_0068C690(float *param_1);
extern float DAT_005164a4;
extern int *DAT_005164a8;
extern float DAT_005164ac;
extern int DAT_005164b0;
extern undefined4 DAT_005164b4;
extern float *DAT_005164b8;
extern undefined4 DAT_005164bc;
extern undefined4 DAT_005164c0;

// USA 00516330 <- EU 00516308 (Ghidra, non-matching)
// GLOBAL DAT_005164a4 float
// GLOBAL DAT_005164a8 int *
// GLOBAL DAT_005164ac float
// GLOBAL DAT_005164b0 int
// GLOBAL DAT_005164b4 undefined4
// GLOBAL DAT_005164b8 float *
// GLOBAL DAT_005164bc undefined4
// GLOBAL DAT_005164c0 undefined4

void func_00516330(int param_1)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  undefined4 uVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_2c (*(float *)(albw_frame + 0x4))
  #define fStack_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x18))
  #define local_14 (*(undefined4 *)(albw_frame + 0x1c))
  iVar1 = func_0051E6D0(*DAT_005164a8,(float *)(param_1 + 0x3d0),DAT_005164a4);
  uVar4 = DAT_005164c0;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x458) = 0x3c;
  }
  else {
    if (*(uint *)(param_1 + 0x454) < *(uint *)(param_1 + 0x458)) {
      *(uint *)(param_1 + 0x454) = *(uint *)(param_1 + 0x454) + 1;
      return;
    }
    iVar1 = func_00520FC0();
    fVar3 = *(float *)(iVar1 + 4) - *(float *)(param_1 + 0x3d4);
    if (fVar3 <= DAT_005164ac) {
      fVar3 = -fVar3;
    }
    if ((int)ALBW_AS_U32(fVar3) <= DAT_005164b0) {
      local_20 = *(float *)(param_1 + 0x3d0);
      uStack_1c = *(undefined4 *)(param_1 + 0x3d4);
      uStack_18 = *(undefined4 *)(param_1 + 0x3d8);
      local_2c = *DAT_005164b8;
      fStack_28 = DAT_005164b8[1];
      local_24 = DAT_005164b8[2];
      func_004D7F70(&local_2c,*(uint *)(param_1 + 1000));
      func_00115C54(&local_20,&local_20,&local_2c);
      pfVar2 = (float *)func_00520FC0();
      func_00115C70(&local_2c,pfVar2,(float *)(param_1 + 0x3d0));
      if (*(short *)(param_1 + 0x2e) == 0) {
        iVar1 = func_0068C690(&local_2c);
        local_14 = *(undefined4 *)(param_1 + 0x2cc);
        func_003167D4(&local_20,iVar1,&local_14,1,0);
      }
      else {
        iVar1 = func_0068C690(&local_2c);
        local_14 = *(undefined4 *)(param_1 + 0x2cc);
        func_003167D4(&local_20,iVar1,&local_14,4,0);
      }
    }
    uVar4 = DAT_005164bc;
    *(undefined4 *)(param_1 + 0x458) = 200;
  }
  *(undefined4 *)(param_1 + 0x45c) = uVar4;
  *(undefined4 *)(param_1 + 0x454) = 0;
  return;
}

