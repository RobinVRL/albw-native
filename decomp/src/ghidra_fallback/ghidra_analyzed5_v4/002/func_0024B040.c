#include "ghidra_types.h"

extern float func_00521298(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_0065F7E8(undefined4 *param_1,undefined1 param_2);
extern float DAT_0024b0fc;
extern float DAT_0024b100;
extern int *DAT_0024b104;
extern int *DAT_0024b108;
extern int DAT_0024b10c;
extern undefined4 DAT_0024b110;

// USA 0024B040 <- EU 0024B040 (Ghidra, non-matching)
// GLOBAL DAT_0024b0fc float
// GLOBAL DAT_0024b100 float
// GLOBAL DAT_0024b104 int *
// GLOBAL DAT_0024b108 int *
// GLOBAL DAT_0024b10c int
// GLOBAL DAT_0024b110 undefined4

undefined4 func_0024B040(int param_1)

{
  int *piVar1;
  bool bVar2;
  float fVar3;
  
  piVar1 = DAT_0024b108;
  fVar3 = (DAT_0024b0fc - *(float *)(*DAT_0024b104 + 0x20)) * DAT_0024b100;
  if (0x3f800000 < (int)ALBW_AS_U32(fVar3)) {
    fVar3 = DAT_0024b0fc;
  }
  *(float *)(param_1 + 0x3d8) = *(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x478) * fVar3;
  if (*(int *)(param_1 + 0x474) == *piVar1) {
    fVar3 = func_00521298(param_1);
    if (DAT_0024b10c <= (int)ALBW_AS_U32(fVar3)) {
      return 0;
    }
  }
  else {
    if (*(short *)(param_1 + 0x36) == 0) {
      return 0;
    }
    bVar2 = func_00588BF0(param_1,0);
    if (!bVar2) {
      return 0;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x40c) + 0x134) = DAT_0024b110;
  }
  return func_0065F7E8((undefined4 *)(param_1 + 0x41c),2);
}

