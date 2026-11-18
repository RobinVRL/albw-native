#include "ghidra_types.h"

extern float func_0051E8AC(int param_1,float *param_2,float fparam_0,float fparam_1);
extern float DAT_003869cc;
extern float DAT_003869d0;
extern undefined4 *DAT_003869d4;

// USA 00386930 <- EU 0038690C (Ghidra, non-matching)
// GLOBAL DAT_003869cc float
// GLOBAL DAT_003869d0 float
// GLOBAL DAT_003869d4 undefined4 *

void func_00386930(int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  iVar1 = *(int *)(param_1 + 0x1c4);
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == *(int *)(param_1 + 0x1c8))) &&
     (((*(uint *)(iVar1 + 0x3c) & 4) != 0 || (*(uint *)(iVar1 + 0x3c) & 0x40) != 0 ||
      (((iVar2 = *(int *)(iVar1 + 0x20), iVar2 != 0 &&
        (*(int *)(iVar1 + 0x24) == *(int *)(iVar2 + 0xc))) && (0 < *(int *)(iVar2 + 4))))))) {
    iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x8d4) + 0x24) + 0x14) +
            *(int *)(*(int *)(param_1 + 4) + 0x8e8) * 0x30;
    local_18 = *(undefined4 *)(iVar1 + 8);
    local_14 = *(undefined4 *)(iVar1 + 0x18);
    local_10 = *(undefined4 *)(iVar1 + 0x28);
    fVar3 = func_0051E8AC(*DAT_003869d4,&local_18,DAT_003869d0,DAT_003869cc);
    *(float *)(*(int *)(param_1 + 4) + 0x900) = fVar3;
  }
  return;
}

