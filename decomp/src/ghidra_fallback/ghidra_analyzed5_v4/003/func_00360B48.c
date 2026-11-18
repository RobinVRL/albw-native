#include "ghidra_types.h"

extern int func_00115DAC(float *param_1,float *param_2,float *param_3,float fparam_0);
extern int func_004356B4(int *param_1);
extern float DAT_00360c60;
extern int DAT_00360c64;
extern undefined4 DAT_00360c68;
extern undefined4 DAT_00360c6c;

// USA 00360B48 <- EU 00360B24 (Ghidra, non-matching)
// GLOBAL DAT_00360c60 float
// GLOBAL DAT_00360c64 int
// GLOBAL DAT_00360c68 undefined4
// GLOBAL DAT_00360c6c undefined4

void func_00360B48(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_18 ((float *)(albw_frame + 0x18))
  local_28 = *(float *)(param_1 + 0x3d0);
  local_24 = *(undefined4 *)(param_1 + 0x3d4);
  local_20 = *(undefined4 *)(param_1 + 0x3d8);
  if (*(char *)(param_1 + 0x410) == '\x01') {
    fVar4 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x504),(byte)(in_fpscr >> 0x15) & 3
                                      );
    if (DAT_00360c60 < fVar4) {
      fVar4 = DAT_00360c60;
    }
    local_18[0] = *(float *)(DAT_00360c64 + 0x104);
    local_18[1] = ALBW_AS_F32(*(undefined4 *)(DAT_00360c64 + 0x108));
    local_18[2] = ALBW_AS_F32(*(undefined4 *)(DAT_00360c64 + 0x10c));
    local_18[3] = ALBW_AS_F32(*(undefined4 *)(DAT_00360c64 + 0x110));
    func_00115DAC(&local_28,(float *)(param_1 + 0x3dc),&local_28,-local_18[(int)fVar4]);
  }
  iVar3 = *(int *)(param_1 + 0x438);
  *(float *)(iVar3 + 4) = local_28;
  *(undefined4 *)(iVar3 + 8) = local_24;
  *(undefined4 *)(iVar3 + 0xc) = local_20;
  func_004356B4(*(int **)(param_1 + 0x438));
  iVar3 = *(int *)(param_1 + 0x43c);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(param_1 + 0x3d8);
  func_004356B4(*(int **)(param_1 + 0x43c));
  uVar2 = DAT_00360c6c;
  uVar1 = DAT_00360c68;
  iVar3 = *(int *)(param_1 + 0x440);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(param_1 + 0x3d8);
  iVar3 = *(int *)(param_1 + 0x440);
  *(undefined4 *)(iVar3 + 100) = uVar1;
  *(undefined4 *)(iVar3 + 0x60) = uVar2;
  *(undefined4 *)(iVar3 + 0x58) = uVar2;
  func_004356B4(*(int **)(param_1 + 0x440));
  if ((*(char *)(param_1 + 0x510) == '\0') &&
     (*(uint *)(param_1 + 0x4a8) < *(uint *)(param_1 + 0x4ac))) {
    *(uint *)(param_1 + 0x4a8) = *(uint *)(param_1 + 0x4a8) + 1;
  }
  return;
}

