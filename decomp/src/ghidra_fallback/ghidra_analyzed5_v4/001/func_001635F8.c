#include "ghidra_types.h"

extern int func_004A8030(int param_1,int *param_2,uint param_3);
extern float *DAT_00163754;
extern uint DAT_00163758;
extern float DAT_0016375c;
extern int *DAT_00163760;
extern float DAT_00163764;
extern float DAT_00163768;

// USA 001635F8 <- EU 001635FC (Ghidra, non-matching)
// GLOBAL DAT_00163754 float *
// GLOBAL DAT_00163758 uint
// GLOBAL DAT_0016375c float
// GLOBAL DAT_00163760 int *
// GLOBAL DAT_00163764 float
// GLOBAL DAT_00163768 float

void func_001635F8(int param_1,uint param_2,float fparam_0)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_6c (*(undefined4 *)(albw_frame + 0x4))
  #define local_68 (*(float *)(albw_frame + 0x8))
  #define uStack_64 (*(undefined4 *)(albw_frame + 0xc))
  #define local_60 (*(undefined4 *)(albw_frame + 0x10))
  #define local_5c (*(float *)(albw_frame + 0x14))
  #define uStack_58 (*(undefined4 *)(albw_frame + 0x18))
  #define local_54 (*(float * *)(albw_frame + 0x1c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x20))
  #define local_4c (*(undefined4 *)(albw_frame + 0x24))
  #define local_48 (*(undefined4 *)(albw_frame + 0x28))
  #define uStack_44 (*(uint *)(albw_frame + 0x2c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x30))
  #define local_3c (*(undefined4 *)(albw_frame + 0x34))
  #define local_38 (*(undefined4 * *)(albw_frame + 0x38))
  #define local_34 (*(undefined4 * *)(albw_frame + 0x3c))
  #define local_30 (*(float *)(albw_frame + 0x40))
  #define local_2c (*(undefined1 *)(albw_frame + 0x44))
  #define local_2b (*(undefined1 *)(albw_frame + 0x45))
  #define local_28 (*(float *)(albw_frame + 0x48))
  #define local_24 (*(float *)(albw_frame + 0x4c))
  #define local_20 (*(float *)(albw_frame + 0x50))
  piVar1 = DAT_00163760;
  local_6c = *(undefined4 *)(param_1 + 0x3d0);
  uStack_64 = *(undefined4 *)(param_1 + 0x3d8);
  local_60 = *(undefined4 *)(param_1 + 0x3d0);
  uStack_58 = *(undefined4 *)(param_1 + 0x3d8);
  local_68 = *(float *)(param_1 + 0x3d4) + fparam_0;
  local_5c = *(float *)(param_1 + 0x3d4) - fparam_0;
  local_28 = *DAT_00163754;
  local_24 = DAT_00163754[1];
  local_20 = DAT_00163754[2];
  local_50 = 0;
  local_4c = 0;
  uStack_44 = param_2 & 0xffff0000 | DAT_00163758;
  local_48 = 0;
  local_3c = 0;
  local_30 = DAT_0016375c;
  local_2c = 0;
  local_34 = &local_6c;
  local_38 = &local_60;
  local_2b = 1;
  local_40 = 3;
  local_54 = &local_28;
  fVar4 = DAT_0016375c;
  iVar2 = func_004A8030(*DAT_00163760,(int *)&local_54,0xff);
  if (iVar2 != 0) {
    *(float *)(param_1 + 0x3d4) = local_5c + local_24 + DAT_00163764;
  }
  local_40 = 0x80;
  local_28 = fVar4;
  local_24 = fVar4;
  local_20 = fVar4;
  iVar3 = func_004A8030(*piVar1,(int *)&local_54,0xff);
  if (iVar3 != 0) {
    fVar4 = local_5c + local_24 + DAT_00163768;
    if ((iVar2 != 0) && (fVar4 <= *(float *)(param_1 + 0x3d4))) {
      return;
    }
    *(float *)(param_1 + 0x3d4) = fVar4;
  }
  return;
}

