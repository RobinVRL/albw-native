#include "ghidra_types.h"

extern int func_0036BE78();
extern int func_00521078(int param_1);
extern int func_00660718(undefined4 *param_1,undefined1 param_2);
extern float DAT_0026a4fc;

// USA 0026A468 <- EU 0026A490 (Ghidra, non-matching)
// GLOBAL DAT_0026a4fc float

undefined4 func_0026A468(int param_1)

{
  float fVar1;
  bool bVar2;
  float fVar3;
  
  func_0036BE78(param_1 + 0x9ac);
  bVar2 = func_00521078(param_1);
  fVar1 = DAT_0026a4fc;
  if (!bVar2) {
    fVar3 = *(float *)(param_1 + 0x3e0);
    if (fVar3 <= DAT_0026a4fc) {
      fVar3 = -fVar3;
    }
    if (fVar3 <= *(float *)(param_1 + 0x3d4)) {
      return 0;
    }
  }
  *(float *)(param_1 + 0x3dc) = DAT_0026a4fc;
  *(float *)(param_1 + 0x3e0) = fVar1;
  *(float *)(param_1 + 0x3e4) = fVar1;
  *(float *)(param_1 + 0x3d4) = fVar1;
  return func_00660718((undefined4 *)(param_1 + 0x8c8),0x12);
}

