#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0014EB3C(int param_1);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern float fRam0021cff0;
extern undefined4 uRam0021cfe8;
extern undefined4 uRam0021cfec;

// USA 0021CF44 <- EU 0021CF44 (Ghidra, non-matching)
// GLOBAL UNK_0021cfe8 undefined4
// GLOBAL UNK_0021cfec undefined4
// GLOBAL UNK_0021cff0 float

undefined4 func_0021CF44(int param_1)

{
  undefined4 uVar1;
  float fparam_0;
  float *pfVar2;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define fStack_28 (*(float *)(albw_frame + 0x8))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define fStack_1c (*(float *)(albw_frame + 0x14))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x1c))
  func_004FABDC(param_1,2,0xffffffff,0);
  uVar1 = uRam0021cfe8;
  *(undefined4 *)(param_1 + 0x3dc) = uRam0021cfe8;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  *(undefined4 *)(param_1 + 0x4fc) = 0;
  uVar1 = uRam0021cfec;
  *(undefined4 *)(param_1 + 0x918) = 6;
  *(undefined4 *)(param_1 + 0x91c) = uVar1;
  *(undefined4 *)(param_1 + 0x914) = 0;
  func_0014EB3C(param_1);
  fparam_0 = fRam0021cff0;
  pfVar2 = (float *)(param_1 + 0x8f0);
  *pfVar2 = *(float *)(param_1 + 0x3d0);
  *(undefined4 *)(param_1 + 0x8f4) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(param_1 + 0x8f8) = *(undefined4 *)(param_1 + 0x3d8);
  func_00115D70(&fStack_1c,(float *)(param_1 + 0x374),fparam_0);
  fStack_28 = fStack_1c;
  uStack_24 = uStack_18;
  uStack_20 = uStack_14;
  return func_00115C54(pfVar2,pfVar2,&fStack_28);
}

