#include "ghidra_types.h"

extern int func_001150CC(undefined4 *param_1,undefined4 *param_2,undefined4 param_3);
extern int func_001151F8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
extern int func_005681C0(int param_1,int *param_2);
extern uint DAT_002c3954;
extern undefined4 DAT_002c3958;

// USA 002C3870 <- EU 002C384C (Ghidra, non-matching)
// GLOBAL DAT_002c3954 uint
// GLOBAL DAT_002c3958 undefined4

undefined4 func_002C3870(int param_1,int *param_2,int param_3,int param_4)

{
  uint uVar1;
  uint *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (*(char *)(param_1 + 0xa0) != '\0') {
    *(undefined1 *)(param_1 + 0xa0) = 0;
    *(undefined1 *)(param_1 + 0xa6) = 1;
    func_001151F8((undefined4 *)(param_1 + 0x34),(undefined4 *)(param_1 + 100),
                  (undefined4 *)(param_1 + 0x88));
    fVar5 = *(float *)(param_1 + 0x94);
    fVar3 = *(float *)(param_1 + 0x98);
    fVar4 = *(float *)(param_1 + 0x9c);
    *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) * fVar5;
    *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x44) * fVar5;
    *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) * fVar5;
    *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0x38) * fVar3;
    *(float *)(param_1 + 0x48) = *(float *)(param_1 + 0x48) * fVar3;
    *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) * fVar3;
    *(float *)(param_1 + 0x3c) = *(float *)(param_1 + 0x3c) * fVar4;
    *(float *)(param_1 + 0x4c) = *(float *)(param_1 + 0x4c) * fVar4;
    *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x5c) * fVar4;
  }
  uVar1 = DAT_002c3954;
  puVar2 = (uint *)*param_2;
  *puVar2 = *(byte *)(param_3 + 0x1a) | 0x80000000;
  puVar2[1] = uVar1;
  func_001150CC(puVar2 + 2,(undefined4 *)(param_1 + 0x34),DAT_002c3958);
  *param_2 = (int)(puVar2 + 0x10);
  return func_005681C0(*(int *)(*(int *)(param_4 + 8) + 0x40),param_2);
}

