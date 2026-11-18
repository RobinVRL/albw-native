#include "ghidra_types.h"

extern int func_0013EA58(int param_1);
extern int func_0013FC48(int param_1);
extern int func_00657580(undefined4 *param_1,undefined1 param_2);
extern float DAT_00140b8c;
extern float DAT_00140b90;

// USA 00140AA0 <- EU 00140AA0 (Ghidra, non-matching)
// GLOBAL DAT_00140b8c float
// GLOBAL DAT_00140b90 float

undefined4 func_00140AA0(int param_1)

{
  int iVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  
  iVar2 = *(int *)(param_1 + 0x460);
  if (((iVar2 == 0x2c) && (*(char *)(param_1 + 0x51d) != '\0')) &&
     (*(char *)(param_1 + 0x51e) == '\0')) {
    (**(code **)(*(int *)(param_1 + 800) + 0x34))(param_1 + 800);
  }
  iVar1 = *(int *)(param_1 + 0x410);
  fVar3 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
  fVar3 = *(float *)(param_1 + 0x518) * fVar3;
  fVar4 = *(float *)(param_1 + 0x514);
  fVar5 = fVar4;
  if ((DAT_00140b8c < fVar3) && (fVar5 = DAT_00140b90, (int)ALBW_AS_U32(fVar3) < 0x3f800000)) {
    fVar5 = fVar4 + (DAT_00140b90 - fVar4) * fVar3;
  }
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  *(float *)(iVar1 + 0x74) = fVar5;
  *(float *)(iVar1 + 0x78) = fVar5;
  *(float *)(iVar1 + 0x7c) = fVar5;
  if (0x3f7fffff < (int)ALBW_AS_U32(fVar3)) {
    if (*(int *)(param_1 + 0x4f8) == 0) {
      return func_0013FC48(param_1);
    }
    func_00657580((undefined4 *)(param_1 + 0x460),2);
  }
  if (*(char *)(*(int *)(param_1 + 0x410) + 0x30) != '\0') {
    return func_0013EA58(param_1);
  }
  return 0;
}

