#include "ghidra_types.h"

extern int func_0015AD54(int param_1,undefined4 param_2,uint param_3,float fparam_0);
extern int func_0058A8F0(int param_1);
extern undefined8 func_0058AB74(int param_1);
extern int func_0065836C(undefined4 *param_1,undefined1 param_2);
extern float DAT_0015b9f8;
extern float DAT_0015b9fc;
extern float DAT_0015ba00;
extern float DAT_0015ba04;
extern float DAT_0015ba08;
extern float DAT_0015ba0c;
extern float DAT_0015ba10;
extern uint DAT_0015ba14;

// USA 0015B8C8 <- EU 0015B8CC (Ghidra, non-matching)
// GLOBAL DAT_0015b9f8 float
// GLOBAL DAT_0015b9fc float
// GLOBAL DAT_0015ba00 float
// GLOBAL DAT_0015ba04 float
// GLOBAL DAT_0015ba08 float
// GLOBAL DAT_0015ba0c float
// GLOBAL DAT_0015ba10 float
// GLOBAL DAT_0015ba14 uint

undefined4 func_0015B8C8(int param_1,uint param_2,float fparam_0)

{
  int iVar1;
  uint uVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  float fparam_0_00;
  undefined8 uVar6;
  
  fparam_0_00 = DAT_0015b9f8;
  uVar2 = *(uint *)(param_1 + 0x8e4);
  if (uVar2 != 0) {
    param_2 = *(uint *)(param_1 + 0x8e0);
  }
  if (uVar2 != 0 && param_2 != 0) {
    fVar3 = DAT_0015b9fc;
    if (param_2 < uVar2) {
      fVar3 = (float)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
      fVar3 = fVar3 * *(float *)(param_1 + 0x8e8);
      if ((int)ALBW_AS_U32(fVar3) < 0x3f000000) goto LAB_0015b960;
    }
    fVar4 = (fVar3 - DAT_0015ba00) * DAT_0015ba04;
    fVar3 = DAT_0015ba04;
    if ((*(ushort *)(param_1 + 0x2e) & 0xff) != 0) {
      fVar3 = DAT_0015ba08;
    }
    fVar5 = DAT_0015ba10 + fVar4 * DAT_0015ba0c;
    *(float *)(param_1 + 0x3d4) = *(float *)(param_1 + 0xc) + fVar3 * (DAT_0015b9fc - fVar4);
    *(float *)(param_1 + 0x4f0) = fVar5;
  }
LAB_0015b960:
  uVar6 = func_0058AB74(param_1);
  if ((int)uVar6 == 7) {
    if (*(uint *)(param_1 + 0x8e0) ==
        ((uint)((ulonglong)*(uint *)(param_1 + 0x8e4) * (ulonglong)DAT_0015ba14 >> 0x20) &
        0xfffffffe)) {
      *(undefined1 *)(param_1 + 0x9ae) = 0;
    }
    else if (*(uint *)(param_1 + 0x8e4) <= *(uint *)(param_1 + 0x8e0)) {
      *(float *)(param_1 + 0x3e4) = fparam_0_00;
      *(float *)(param_1 + 0x3e0) = fparam_0_00;
      *(float *)(param_1 + 0x3dc) = fparam_0_00;
      return func_0015AD54(param_1,8,0xffffffff,fparam_0_00);
    }
  }
  else {
    iVar1 = func_0058A8F0(param_1);
    if (iVar1 != 0) {
      func_0065836C((undefined4 *)(param_1 + 0x8bc),3);
    }
  }
  return 0;
}

