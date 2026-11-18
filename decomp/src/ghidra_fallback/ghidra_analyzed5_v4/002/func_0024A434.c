#include "ghidra_types.h"

extern int func_0024ADF4(int param_1,undefined4 param_2,float fparam_0,float fparam_1);
extern int func_0065F7E8(undefined4 *param_1,undefined1 param_2);
extern float DAT_0024a50c;
extern float DAT_0024a510;
extern float DAT_0024a514;

// USA 0024A434 <- EU 0024A434 (Ghidra, non-matching)
// GLOBAL DAT_0024a50c float
// GLOBAL DAT_0024a510 float
// GLOBAL DAT_0024a514 float

void func_0024A434(int param_1)

{
  float fparam_0;
  float fVar1;
  undefined1 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = DAT_0024a510;
  fparam_0 = DAT_0024a50c;
  fVar4 = *(float *)(param_1 + 0x47c) - *(float *)(param_1 + 0x3d0);
  fVar3 = *(float *)(param_1 + 0x484) - *(float *)(param_1 + 0x3d8);
  fVar3 = SQRT(fVar4 * fVar4 + fVar3 * fVar3);
  if (*(int *)(param_1 + 0x444) == 0) {
    fVar5 = *(float *)(param_1 + 0x3d4);
    fVar4 = *(float *)(param_1 + 0xc);
    if (fVar5 <= fVar4) {
      *(float *)(param_1 + 0x3d4) = fVar4;
    }
    if (fVar5 <= fVar4) {
      *(float *)(param_1 + 0x3e0) = fparam_0;
    }
    if (*(float *)(param_1 + 0x488) <= fVar3 + fVar1) {
      func_0024ADF4(param_1,2,fparam_0,DAT_0024a514);
      *(undefined4 *)(param_1 + 0x444) = 1;
      return;
    }
  }
  else if ((*(int *)(param_1 + 0x444) == 1) && (*(float *)(param_1 + 0x488) <= fVar3)) {
    *(float *)(param_1 + 0x3dc) = DAT_0024a50c;
    *(float *)(param_1 + 0x3e0) = fparam_0;
    *(float *)(param_1 + 0x3e4) = fparam_0;
    if (*(char *)(param_1 + 0x440) == '\x04') {
      uVar2 = 3;
    }
    else {
      uVar2 = 0;
    }
    func_0065F7E8((undefined4 *)(param_1 + 0x41c),uVar2);
  }
  return;
}

