#include "ghidra_types.h"

extern int func_003931EC(undefined4 *param_1,uint param_2);
extern int func_004D8054(float *param_1,uint param_2,float fparam_0);
extern float func_004F944C(void);
extern int func_0065DF0C(int param_1,undefined4 param_2);
extern int func_0065DF78(int param_1);
extern int DAT_00654c00;
extern float DAT_00654c04;
extern int DAT_00654c08;
extern float DAT_00654c0c;
extern int DAT_00654c10;

// USA 00654B58 <- EU 00654B30 (Ghidra, non-matching)
// GLOBAL DAT_00654c00 int
// GLOBAL DAT_00654c04 float
// GLOBAL DAT_00654c08 int
// GLOBAL DAT_00654c0c float
// GLOBAL DAT_00654c10 int

undefined4 func_00654B58(int param_1)

{
  uint uVar1;
  float *pfVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  
  fVar4 = DAT_00654c04;
  uVar1 = *(int *)(param_1 + 0x8dc) + DAT_00654c00;
  *(uint *)(param_1 + 0x8dc) = uVar1;
  pfVar2 = (float *)(DAT_00654c08 + (uVar1 >> 0x18) * 0x10);
  fVar3 = (float)VectorUnsignedToFloat(uVar1 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  func_004D8054((float *)(param_1 + 0x3d0),*(uint *)(param_1 + 0x8d8),
                (*pfVar2 + pfVar2[1] * fVar3 * fVar4) * *(float *)(param_1 + 0x8cc));
  if (*(float *)(param_1 + 0x8cc) < DAT_00654c0c) {
    if (*(int *)(param_1 + 0x8dc) < DAT_00654c10) {
      *(undefined2 *)(param_1 + 0x8e4) = 100;
      fVar4 = func_004F944C();
      *(float *)(param_1 + 0x3e0) = fVar4;
      func_0065DF0C(param_1 + 0x8f0,0);
      func_003931EC((undefined4 *)(param_1 + 0x8f0),0);
      return func_0065DF78(param_1 + 0x8f0);
    }
  }
  else if (0x40000000 < *(int *)(param_1 + 0x8dc)) {
    *(float *)(param_1 + 0x8cc) = -*(float *)(param_1 + 0x8cc);
  }
  return 0;
}

