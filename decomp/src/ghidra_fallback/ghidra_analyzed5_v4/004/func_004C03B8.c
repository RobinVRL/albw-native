#include "ghidra_types.h"

extern float DAT_004c04bc;
extern int DAT_004c04c0;
extern float DAT_004c04c4;

// USA 004C03B8 <- EU 004C0390 (Ghidra, non-matching)
// GLOBAL DAT_004c04bc float
// GLOBAL DAT_004c04c0 int
// GLOBAL DAT_004c04c4 float

undefined4 func_004C03B8(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = DAT_004c04bc;
  iVar2 = *(int *)(param_1 + 0x7a0);
  if (iVar2 != 0 && param_2 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x8b4) = *param_2;
    uVar1 = param_2[1];
    *(undefined4 *)(param_1 + 0x830) = uVar1;
    *(undefined4 *)(iVar2 + 0x74) = uVar1;
    *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
    *(undefined4 *)(iVar2 + 0x78) = uVar1;
    *(undefined4 *)(iVar2 + 0x7c) = uVar1;
    iVar2 = DAT_004c04c0;
    *(undefined4 *)(param_1 + 0x8ec) = param_2[6];
    *(int *)(param_1 + 0x8c4) = (int)(ALBW_AS_F32(param_2[2]) * fVar3);
    *(int *)(param_1 + 0x8c8) = (int)(ALBW_AS_F32(param_2[3]) * fVar3);
    *(int *)(param_1 + 0x8cc) = *(char *)(param_2 + 8) * iVar2;
    *(int *)(param_1 + 0x8d0) = *(char *)((int)param_2 + 0x21) * iVar2;
    *(int *)(param_1 + 0x8d4) = *(char *)((int)param_2 + 0x22) * iVar2;
    *(int *)(param_1 + 0x8d8) = *(char *)((int)param_2 + 0x23) * iVar2;
    *(int *)(param_1 + 0x8dc) = *(char *)(param_2 + 9) * iVar2;
    *(undefined4 *)(param_1 + 0x8e8) = param_2[4];
    *(int *)(param_1 + 0x8f0) = *(short *)(param_2 + 7) * iVar2;
    iVar2 = *(int *)(param_1 + 0x40c);
    if (iVar2 != 0) {
      if (*(short *)(iVar2 + 0x54) == 6) {
        *(undefined4 *)(iVar2 + 0x58) = param_2[5];
      }
      else if (*(short *)(iVar2 + 0x54) == 7) {
        fVar3 = ALBW_AS_F32(param_2[5]) * DAT_004c04c4;
        *(float *)(iVar2 + 0x58) = fVar3;
        *(float *)(iVar2 + 0x60) = fVar3;
      }
    }
    *(int *)(param_1 + 0x8f4) = *(short *)((int)param_2 + 0x1e) * DAT_004c04c0;
    return (undefined4)param_1;
  }
  return (undefined4)param_1;
}

