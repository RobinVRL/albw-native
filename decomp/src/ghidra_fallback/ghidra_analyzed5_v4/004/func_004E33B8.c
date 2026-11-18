#include "ghidra_types.h"

extern undefined4 func_00151148(int param_1,int param_2);
extern int func_00151150(int param_1,float *param_2);
extern int func_004E2030(int param_1);
extern int func_004E25B8(int param_1,uint param_2);
extern int func_004E2D30(int param_1);
extern undefined4 DAT_004e34d0;
extern float DAT_004e34d4;
extern float DAT_004e34d8;
extern float DAT_004e34dc;
extern float DAT_004e34e0;

// USA 004E33B8 <- EU 004E3390 (Ghidra, non-matching)
// GLOBAL DAT_004e34d0 undefined4
// GLOBAL DAT_004e34d4 float
// GLOBAL DAT_004e34d8 float
// GLOBAL DAT_004e34dc float
// GLOBAL DAT_004e34e0 float

undefined4 func_004E33B8(int param_1)

{
  int iVar1;
  uint uVar2;
  uint extraout_r1;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c (*(undefined4 *)(albw_frame + 0x4))
  #define local_18 (*(float *)(albw_frame + 0x8))
  if (*(uint *)(param_1 + 0x4e8) <= *(uint *)(param_1 + 0x4e4)) {
    *(undefined1 *)(param_1 + 0x2d7) = 1;
  }
  if (*(int *)(param_1 + 0x420) == 0x10) {
    func_00151148(*(int *)(param_1 + 0x458),1);
  }
  if (*(uint *)(param_1 + 0x4e4) < 0x10) {
    local_20 = DAT_004e34d4;
    local_18 = DAT_004e34d4;
    local_1c = DAT_004e34d0;
    func_00151150(*(int *)(param_1 + 0x458),&local_20);
    uVar2 = extraout_r1;
  }
  else {
    fVar3 = (float)VectorUnsignedToFloat
                             (*(uint *)(param_1 + 0x4e4) - 0xf,(byte)(in_fpscr >> 0x15) & 3);
    fVar4 = DAT_004e34d4 - fVar3 * DAT_004e34d8;
    fVar3 = DAT_004e34dc;
    if ((DAT_004e34dc <= fVar4) && (fVar3 = fVar4, DAT_004e34d4 < fVar4)) {
      fVar3 = DAT_004e34d4;
    }
    local_1c = DAT_004e34d0;
    fVar4 = DAT_004e34d4;
    local_20 = fVar3;
    local_18 = fVar3;
    func_00151150(*(int *)(param_1 + 0x458),&local_20);
    iVar1 = *(int *)(param_1 + 0x454);
    uVar2 = *(uint *)(iVar1 + 0x164) | 0x40000000;
    *(uint *)(iVar1 + 0x164) = uVar2;
    *(float *)(iVar1 + 0x74) = fVar3;
    *(float *)(iVar1 + 0x78) = fVar4;
    *(float *)(iVar1 + 0x7c) = fVar3;
  }
  func_004E25B8(param_1,uVar2);
  if (*(uint *)(param_1 + 0x420) < 0xf0) {
    if (*(float *)(param_1 + 0x3e0) < DAT_004e34e0) {
      func_004E2D30(param_1);
    }
    if (*(char *)(param_1 + 0x2d7) == '\0') {
      return func_004E2030(param_1);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x2d7) = 1;
  }
  return 0;
}

