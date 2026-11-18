#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004E2030(int param_1);
extern int func_004E2D30(int param_1);
extern int func_00556AD0(int param_1);
extern float DAT_004e3664;
extern undefined4 DAT_004e3668;
extern int *DAT_004e366c;
extern int DAT_004e3670;

// USA 004E350C <- EU 004E34E4 (Ghidra, non-matching)
// GLOBAL DAT_004e3664 float
// GLOBAL DAT_004e3668 undefined4
// GLOBAL DAT_004e366c int *
// GLOBAL DAT_004e3670 int

undefined4 func_004E350C(int param_1)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_54 (*(float *)(albw_frame + 0xc))
  #define local_50 (*(undefined4 *)(albw_frame + 0x10))
  #define local_4c (*(undefined4 *)(albw_frame + 0x14))
  #define local_48 (*(float *)(albw_frame + 0x18))
  #define fStack_44 (*(float *)(albw_frame + 0x1c))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x20))
  #define local_3c (*(float *)(albw_frame + 0x24))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x28))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_30 (*(float *)(albw_frame + 0x30))
  #define local_2c (*(float *)(albw_frame + 0x34))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x38))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_20 (*(float *)(albw_frame + 0x40))
  #define local_1c (*(undefined4 *)(albw_frame + 0x44))
  #define local_18 (*(undefined4 *)(albw_frame + 0x48))
  if (*(short *)(param_1 + 0x2c) == 0 || *(short *)(param_1 + 0x2c) == 4) {
    fVar3 = DAT_004e3664;
    func_004D80A4(&local_20,*(uint *)(param_1 + 1000),DAT_004e3664);
    pfVar2 = (float *)(param_1 + 0x3dc);
    local_1c = DAT_004e3668;
    local_54 = local_20;
    local_50 = DAT_004e3668;
    local_4c = local_18;
    func_00115C70(&local_2c,&local_54,pfVar2);
    local_3c = local_2c;
    uStack_38 = uStack_28;
    uStack_34 = uStack_24;
    func_00115D70(&local_30,&local_3c,fVar3);
    local_48 = local_30;
    fStack_44 = local_2c;
    uStack_40 = uStack_28;
    func_00115C54(pfVar2,pfVar2,&local_48);
  }
  func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3dc));
  if ((*(short *)(param_1 + 0x2c) == 0) &&
     (pfVar2 = *(float **)(*DAT_004e366c + 0x1c), fVar3 = *(float *)(param_1 + 0x3d0) - *pfVar2,
     fVar4 = *(float *)(param_1 + 0x3d8) - pfVar2[2],
     (int)ALBW_AS_U32((fVar3 * fVar3 + fVar4 * fVar4)) < DAT_004e3670)) {
    iVar1 = func_00556AD0(*DAT_004e366c);
    *(float *)(param_1 + 0x3d4) = *(float *)(param_1 + 0x3d4) + *(float *)(iVar1 + 4);
  }
  if (*(uint *)(param_1 + 0x420) < 0xf0) {
    if (*(char *)(param_1 + 0x558) == '\0') {
      func_004E2D30(param_1);
    }
    else if (2 < (int)*(uint *)(param_1 + 0x420)) {
      *(undefined1 *)(param_1 + 0x558) = 0;
      func_004E2D30(param_1);
    }
    if (*(char *)(param_1 + 0x2d7) == '\0') {
      return func_004E2030(param_1);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x2d7) = 1;
  }
  return 0;
}

