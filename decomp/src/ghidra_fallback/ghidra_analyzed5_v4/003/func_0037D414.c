#include "ghidra_types.h"

extern int *DAT_0037d440;
extern float DAT_0037d444;
extern float DAT_0037d448;
extern undefined4 DAT_0037d44c;

// USA 0037D414 <- EU 0037D3F0 (Ghidra, non-matching)
// GLOBAL DAT_0037d440 int *
// GLOBAL DAT_0037d444 float
// GLOBAL DAT_0037d448 float
// GLOBAL DAT_0037d44c undefined4

undefined4 func_0037D414(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  
  fVar2 = DAT_0037d444;
  if ((*(uint *)(*DAT_0037d440 + 0x2b4) & 8) == 0) {
    fVar2 = DAT_0037d448;
  }
  *(float *)(param_1 + 0x4b4) = *(float *)(param_1 + 0x3d4) + fVar2;
  uVar1 = DAT_0037d44c;
  *(undefined4 *)(param_1 + 0x4ac) = 0x1e;
  *(undefined4 *)(param_1 + 0x4b0) = uVar1;
  *(undefined4 *)(param_1 + 0x4a8) = 0;
  *(undefined1 *)(param_1 + 0x4b8) = 0;
  return (undefined4)param_1;
}

