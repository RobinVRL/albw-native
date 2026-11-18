#include "ghidra_types.h"

extern float DAT_00555dc8;

// USA 00555CFC <- EU 00555CD4 (Ghidra, non-matching)
// GLOBAL DAT_00555dc8 float

undefined4 func_00555CFC(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = DAT_00555dc8;
  if (NAN(ALBW_AS_F32(param_1[0xf7])) || NAN(DAT_00555dc8)) {
    pfVar1 = (float *)(**(code **)(*param_1 + 0x78))(param_1);
    if (ALBW_AS_F32(param_1[0x11e]) < *pfVar1) {
      return 0;
    }
  }
  else {
    pfVar1 = (float *)(**(code **)(*param_1 + 0x78))(param_1);
    if (*pfVar1 < ALBW_AS_F32(param_1[0x11e])) {
      return 0;
    }
  }
  if (NAN(ALBW_AS_F32(param_1[0xf9])) || NAN(fVar3)) {
    iVar2 = (**(code **)(*param_1 + 0x78))(param_1);
    if (ALBW_AS_F32(param_1[0x120]) < *(float *)(iVar2 + 8)) {
      return 0;
    }
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0x78))(param_1);
    if (*(float *)(iVar2 + 8) < ALBW_AS_F32(param_1[0x120])) {
      return 0;
    }
  }
  return 1;
}

