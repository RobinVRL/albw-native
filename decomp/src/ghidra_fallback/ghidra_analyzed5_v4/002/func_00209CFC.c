#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D88(float *param_1,float *param_2,float fparam_0);
extern float func_004F944C(void);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_00520FC0(void);
extern float func_0058AC38(int param_1);
extern float fRam00209e14;
extern float fRam00209e20;
extern int iRam00209e1c;
extern undefined4 *puRam00209e18;

// USA 00209CFC <- EU 00209CFC (Ghidra, non-matching)
// GLOBAL UNK_00209e14 float
// GLOBAL UNK_00209e18 undefined4 *
// GLOBAL UNK_00209e1c int
// GLOBAL UNK_00209e20 float

void func_00209CFC(int param_1)

{
  undefined4 *puVar1;
  uint in_fpscr;
  float fVar2;
  int iVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define fStack_28 (*(float *)(albw_frame + 0x8))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define fStack_1c (*(float *)(albw_frame + 0x14))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x1c))
  func_004FABDC(param_1,0xe,1,0);
  func_00115C70(&fStack_1c,(float *)(param_1 + 0xc7c),(float *)(param_1 + 0x3d0));
  fStack_28 = fStack_1c;
  uStack_24 = uStack_18;
  uStack_20 = uStack_14;
  fVar2 = func_0058AC38(param_1);
  func_00115D88(&fStack_28,&fStack_28,fVar2);
  *(float *)(param_1 + 0x3dc) = fStack_28;
  *(undefined4 *)(param_1 + 0x3e4) = uStack_20;
  fVar2 = func_004F944C();
  *(float *)(param_1 + 0x3e0) = fVar2;
  puVar1 = (undefined4 *)func_00520FC0();
  *(undefined4 *)(param_1 + 0xc88) = *puVar1;
  *(undefined4 *)(param_1 + 0xc8c) = puVar1[1];
  *(undefined4 *)(param_1 + 0xc90) = puVar1[2];
  fVar2 = func_0058AC38(param_1);
  fVar2 = fVar2 * fRam00209e14;
  *(undefined4 *)(param_1 + 0xa1c) = *(undefined4 *)(param_1 + 0xa18);
  *(undefined4 *)(param_1 + 0xa20) = *puRam00209e18;
  iVar3 = (int)fVar2;
  iVar4 = iVar3;
  if (iVar3 == 0) {
    iVar4 = iRam00209e1c;
  }
  *(int *)(param_1 + 0xa28) = iVar3;
  if (iVar3 == 0) {
    *(int *)(param_1 + 0xa2c) = iVar4;
  }
  else {
    fVar2 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0xa2c) = fRam00209e20 / fVar2;
  }
  *(undefined4 *)(param_1 + 0xa24) = 0;
  *(undefined4 *)(param_1 + 0xa34) = 0;
  *(undefined4 *)(param_1 + 0xd08) = 0;
  return;
}

