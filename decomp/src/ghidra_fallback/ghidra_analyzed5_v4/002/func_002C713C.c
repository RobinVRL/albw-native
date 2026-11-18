#include "ghidra_types.h"

extern int func_004356B4(int *param_1);
extern int func_004CEAF0(int param_1);
extern int func_004D7EB0(float *param_1,uint param_2,uint param_3,float *param_4);
extern int func_004ED9C8(int param_1);
extern float DAT_002c7308;
extern float DAT_002c730c;
extern float DAT_002c7310;

// USA 002C713C <- EU 002C7118 (Ghidra, non-matching)
// GLOBAL DAT_002c7308 float
// GLOBAL DAT_002c730c float
// GLOBAL DAT_002c7310 float

undefined4 func_002C713C(int param_1)

{
  int iVar1;
  float *pfVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define local_2c (*(float *)(albw_frame + 0x4))
  #define local_28 (*(float *)(albw_frame + 0x8))
  local_30 = *(float *)(param_1 + 0x3d0);
  local_28 = *(float *)(param_1 + 0x3d8);
  uVar4 = 0;
  local_2c = *(float *)(param_1 + 0x3d4) + DAT_002c7308;
  fVar7 = DAT_002c7308;
  if (0 < *(int *)(param_1 + 0x46c)) {
    fVar5 = DAT_002c730c;
    do {
      if (uVar4 < *(uint *)(param_1 + 0x478)) {
        iVar1 = *(int *)(param_1 + 0x47c) + uVar4 * 0x18;
        puVar3 = (undefined4 *)(*(int *)(param_1 + 0x47c) + uVar4 * 0x18);
      }
      else {
        iVar1 = *(int *)(param_1 + 0x47c);
        puVar3 = *(undefined4 **)(param_1 + 0x47c);
      }
      *(undefined4 *)(iVar1 + 0xc) = *puVar3;
      *(undefined4 *)(iVar1 + 0x10) = puVar3[1];
      *(undefined4 *)(iVar1 + 0x14) = puVar3[2];
      if (uVar4 < *(uint *)(param_1 + 0x46c)) {
        iVar1 = *(int *)(*(int *)(param_1 + 0x474) + uVar4 * 4);
      }
      else {
        iVar1 = 0;
      }
      *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
      func_004D7EB0((float *)(iVar1 + 0x80),*(uint *)(param_1 + 0x438),*(uint *)(param_1 + 1000),
                    &local_30);
      func_004CEAF0(iVar1);
      if (uVar4 < *(uint *)(param_1 + 0x478)) {
        pfVar2 = (float *)(*(int *)(param_1 + 0x47c) + uVar4 * 0x18);
      }
      else {
        pfVar2 = *(float **)(param_1 + 0x47c);
      }
      uVar4 = uVar4 + 1;
      *pfVar2 = local_30;
      pfVar2[1] = local_2c;
      pfVar2[2] = local_28;
      local_30 = local_30 + *(float *)(param_1 + 0x430) * fVar5;
      local_28 = local_28 - *(float *)(param_1 + 0x434) * fVar5;
    } while ((int)uVar4 < *(int *)(param_1 + 0x46c));
  }
  local_2c = *(float *)(param_1 + 0x3d4) + DAT_002c7310;
  iVar1 = *(int *)(param_1 + 0x458) + -1;
  fVar5 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
  fVar6 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
  local_30 = *(float *)(param_1 + 0x3d0) + *(float *)(param_1 + 0x430) * fVar5 * fVar7;
  local_28 = *(float *)(param_1 + 0x3d8) - *(float *)(param_1 + 0x434) * fVar6 * fVar7;
  iVar1 = *(int *)(param_1 + 0x43c);
  *(float *)(iVar1 + 4) = local_30;
  *(float *)(iVar1 + 8) = local_2c;
  *(float *)(iVar1 + 0xc) = local_28;
  func_004356B4(*(int **)(param_1 + 0x43c));
  iVar1 = *(int *)(param_1 + 0x440);
  *(float *)(iVar1 + 4) = local_30;
  *(float *)(iVar1 + 8) = local_2c;
  *(float *)(iVar1 + 0xc) = local_28;
  func_004356B4(*(int **)(param_1 + 0x440));
  return func_004ED9C8(*(int *)(param_1 + 0x444));
}

