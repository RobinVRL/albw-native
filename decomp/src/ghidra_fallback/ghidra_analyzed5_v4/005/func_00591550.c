#include "ghidra_types.h"

extern int func_00100986(undefined4 param_1);
extern int func_0058FBFC(uint param_1);
extern float func_005919B4(void);
extern float DAT_0059160c;
extern float DAT_00591610;

// USA 00591550 <- EU 00591528 (Ghidra, non-matching)
// GLOBAL DAT_0059160c float
// GLOBAL DAT_00591610 float

uint func_00591550(undefined4 param_1,int param_2,float fparam_0,float fparam_1,float fparam_2)

{
  int iVar1;
  uint uVar2;
  undefined8 in_d8;
  float fVar3;
  undefined8 in_d9;
  
  if (DAT_0059160c <= fparam_0) {
    if (ALBW_AS_F32(((ulonglong)in_d9 >> 0x20)) <= fparam_2) goto LAB_005915e0;
  }
  else {
    iVar1 = (int)fparam_2 / 2;
    fVar3 = ALBW_AS_F32((iVar1 * 0x800000 + 0x3f800000)) *
            ALBW_AS_F32(in_d8) * ALBW_AS_F32(((ulonglong)in_d8 >> 0x20)) *
            ALBW_AS_F32((((int)fparam_2 - iVar1) * 0x800000 + 0x3f800000));
    in_d8 = CONCAT44(fVar3,ALBW_AS_F32(in_d8));
    if (param_2 == (int)ALBW_AS_U32(fVar3) * 2) {
LAB_005915e0:
      uVar2 = (uint)in_d8;
      fVar3 = DAT_00591610;
      func_00100986(2);
      return uVar2 & 0x80000000 | (uint)ALBW_AS_U32(ABS(fVar3 * fVar3));
    }
    if (ABS(fVar3) != 0.0) {
      uVar2 = func_0058FBFC((uint)ALBW_AS_U32(fVar3));
      if (uVar2 == 4) {
        func_005919B4();
      }
      return uVar2;
    }
  }
  uVar2 = (uint)in_d8;
  func_00100986(2);
  fVar3 = func_005919B4();
  return uVar2 & 0x80000000 | (uint)ALBW_AS_U32(ABS(fVar3));
}

