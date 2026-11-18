#include "ghidra_types.h"

extern int func_00520FC0(void);
extern int func_006576C4(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_00143da4;
extern float DAT_00143da8;
extern float DAT_00143dac;

// USA 00143CD8 <- EU 00143CD8 (Ghidra, non-matching)
// GLOBAL DAT_00143da4 undefined4
// GLOBAL DAT_00143da8 float
// GLOBAL DAT_00143dac float

void func_00143CD8(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  
  fVar2 = DAT_00143da8;
  uVar4 = DAT_00143da4;
  if (*(char *)(param_1 + 0x428) == '\x06' || *(char *)(param_1 + 0x428) == '\b') {
    *(int *)(param_1 + 0x494) = param_3;
    if (param_3 == 0) {
      *(undefined4 *)(param_1 + 0x498) = uVar4;
    }
    else {
      fVar3 = (float)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0x498) = fVar2 / fVar3;
    }
    *(undefined4 *)(param_1 + 0x490) = 0;
    *(int *)(param_1 + 0x4ac) = param_4;
    if (param_4 == 0) {
      *(undefined4 *)(param_1 + 0x4b0) = uVar4;
    }
    else {
      fVar3 = (float)VectorUnsignedToFloat(param_4,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0x4b0) = fVar2 / fVar3;
    }
    *(undefined4 *)(param_1 + 0x4a8) = 0;
    puVar1 = (undefined4 *)func_00520FC0();
    uVar4 = puVar1[2];
    fVar2 = ALBW_AS_F32(puVar1[1]) + DAT_00143dac;
    *(undefined4 *)(param_1 + 0x460) = *puVar1;
    *(float *)(param_1 + 0x464) = fVar2;
    *(undefined4 *)(param_1 + 0x468) = uVar4;
    *(undefined4 *)(param_1 + 0x454) = *param_2;
    *(undefined4 *)(param_1 + 0x458) = param_2[1];
    *(undefined4 *)(param_1 + 0x45c) = param_2[2];
    func_006576C4((undefined4 *)(param_1 + 0x424),7);
  }
  return;
}

