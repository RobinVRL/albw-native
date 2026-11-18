#include "ghidra_types.h"

extern int func_005211F4(int param_1,float fparam_0,float fparam_1);
extern int func_0065650C(undefined4 *param_1,undefined1 param_2);
extern float DAT_0012506c;
extern float DAT_00125070;
extern int DAT_00125074;
extern float DAT_00125078;

// USA 00124EE8 <- EU 00124EE8 (Ghidra, non-matching)
// GLOBAL DAT_0012506c float
// GLOBAL DAT_00125070 float
// GLOBAL DAT_00125074 int
// GLOBAL DAT_00125078 float

void func_00124EE8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  puVar2 = (undefined4 *)(param_1 + 0x8bc);
  iVar1 = *(int *)(param_1 + 0x8f4);
  if (iVar1 == 0) {
    fVar6 = *(float *)(param_1 + 8) - *(float *)(param_1 + 0x3d0);
    fVar3 = *(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x3d8);
    fVar4 = DAT_0012506c;
    fVar5 = DAT_00125078;
    if ((DAT_00125074 < (int)ALBW_AS_U32((fVar6 * fVar6 + fVar3 * fVar3))) &&
       (iVar1 = func_005211F4(param_1,DAT_00125078,DAT_0012506c), iVar1 == 0)) {
      *(undefined4 *)(param_1 + 0x8f4) = 1;
      func_0065650C(puVar2,1);
    }
    iVar1 = func_005211F4(param_1,fVar5,fVar4);
    if (iVar1 != 0) goto LAB_00125038;
LAB_00124ff4:
    *(undefined4 *)(param_1 + 0x8f4) = 2;
    func_0065650C(puVar2,1);
  }
  else {
    if (iVar1 == 1) {
      iVar1 = func_005211F4(param_1,DAT_00125070,DAT_0012506c);
      if (iVar1 == 0) {
        fVar4 = *(float *)(param_1 + 8) - *(float *)(param_1 + 0x3d0);
        fVar5 = *(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x3d8);
        if (0x40ffffff < (int)ALBW_AS_U32((fVar4 * fVar4 + fVar5 * fVar5))) goto LAB_00125038;
        goto LAB_00124ff4;
      }
    }
    else if ((iVar1 != 2) || (iVar1 = func_005211F4(param_1,DAT_00125070,DAT_0012506c), iVar1 == 0))
    goto LAB_00125038;
    *(undefined4 *)(param_1 + 0x8f4) = 0;
    func_0065650C(puVar2,1);
  }
LAB_00125038:
  fVar4 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x8bc),(byte)(in_fpscr >> 0x15) & 3);
  if (*(float *)(param_1 + 0x8f8) < fVar4) {
    func_0065650C(puVar2,1);
  }
  return;
}

