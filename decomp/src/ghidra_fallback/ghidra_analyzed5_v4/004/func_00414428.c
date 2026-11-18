#include "ghidra_types.h"

extern float DAT_00414468;
extern float DAT_0041446c;

// USA 00414428 <- EU 00414408 (Ghidra, non-matching)
// GLOBAL DAT_00414468 float
// GLOBAL DAT_0041446c float

undefined4 func_00414428(int param_1,uint param_2,float fparam_0)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  
  fVar3 = DAT_00414468;
  if ((fparam_0 <= DAT_00414468) && (fVar3 = fparam_0, fparam_0 < DAT_0041446c)) {
    fVar3 = DAT_0041446c;
  }
  bVar2 = *(byte *)(param_1 + 0x22) == param_2;
  if (!bVar2) {
    *(char *)(param_1 + 0x22) = (char)param_2;
  }
  bVar1 = *(float *)(param_1 + 0x3c) == fVar3;
  if (!bVar1) {
    *(float *)(param_1 + 0x3c) = fVar3;
    bVar2 = bVar1;
  }
  if (!bVar2) {
    *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) | 0x20;
  }
  return (undefined4)param_1;
}

