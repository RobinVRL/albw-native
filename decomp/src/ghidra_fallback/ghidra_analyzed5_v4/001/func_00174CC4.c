#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_004CEAF0(int param_1);
extern float DAT_00174da8;
extern undefined4 DAT_00174dac;
extern undefined4 DAT_00174db0;

// USA 00174CC4 <- EU 00174CC4 (Ghidra, non-matching)
// GLOBAL DAT_00174da8 float
// GLOBAL DAT_00174dac undefined4
// GLOBAL DAT_00174db0 undefined4

undefined4 func_00174CC4(int param_1)

{
  int iVar1;
  uint in_r12;
  float fVar2;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_78 ((uint *)(albw_frame + 0x8))
  #define local_70 (*(undefined4 * *)(albw_frame + 0x10))
  #define local_6c (*(undefined4 *)(albw_frame + 0x14))
  #define local_68 (*(float *)(albw_frame + 0x18))
  #define uStack_64 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x20))
  #define local_5c (*(undefined4 *)(albw_frame + 0x24))
  #define local_58 (*(uint *)(albw_frame + 0x28))
  #define local_24 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_20 (*(undefined1 *)(albw_frame + 0x60))
  local_78[1] = 3;
  local_70 = &local_6c;
  local_24 = 10;
  local_20 = 0;
  local_6c = 0;
  local_78[0] = 1;
  local_60 = DAT_00174db0;
  local_5c = DAT_00174dac;
  local_58 = in_r12 | 0xff;
  local_68 = DAT_00174da8;
  uStack_64 = DAT_00174dac;
  fVar2 = DAT_00174da8;
  func_0016898C(*(int *)(param_1 + 0x434),local_78);
  iVar1 = *(int *)(*(int *)(param_1 + 0x434) + 0x14);
  if (*(float *)(iVar1 + 8) != fVar2) {
    *(float *)(iVar1 + 8) = fVar2;
    *(undefined1 *)(iVar1 + 0x26) = 1;
  }
  *(float *)(*(int *)(*(int *)(param_1 + 0x434) + 0x14) + 0x10) = fVar2;
  func_00168E9C(*(int **)(param_1 + 0x434),*(int *)(param_1 + 0x430),(int *)0x0);
  return func_004CEAF0(*(int *)(param_1 + 0x430));
}

