#include "ghidra_types.h"

extern int func_001151CC(undefined4 *param_1,undefined4 *param_2);
extern int func_0048B5D4(float *param_1,float *param_2,uint param_3);
extern int func_00491404(float *param_1,float *param_2);
extern float func_0051E8AC(int param_1,float *param_2,float fparam_0,float fparam_1);
extern float DAT_0051e680;

// USA 0051E5F8 <- EU 0051E5D0 (Ghidra, non-matching)
// GLOBAL DAT_0051e680 float

undefined4 func_0051E5F8(int param_1,float *param_2,undefined4 param_3,float fparam_0,float fparam_1)

{
  undefined4 *puVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define afStack_20 ((float *)(albw_frame + 0x0))
  puVar1 = (undefined4 *)(param_1 + 0x2b84);
  if ((*(int *)(param_1 + 0x2b80) != 0) &&
     (fVar2 = func_0051E8AC(param_1,param_3,fparam_0,fparam_1), fVar2 != 1.0)) {
    fVar3 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x2b80),
                                       (byte)(in_fpscr >> 0x15) & 3);
    fVar3 = fVar3 * fVar2;
    uVar4 = (uint)fVar3;
    fVar5 = (float)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
    fVar2 = fVar5;
    if (fVar5 != fVar3) {
      fVar2 = DAT_0051e680;
    }
    if (fVar3 <= fVar2 && (fVar5 != fVar3 && DAT_0051e680 != fVar3)) {
      uVar4 = uVar4 - 1;
    }
    func_0048B5D4(afStack_20,(float *)(param_1 + 0x2b68),uVar4);
    return func_00491404(param_2,afStack_20);
  }
  return func_001151CC(param_2,puVar1);
}

