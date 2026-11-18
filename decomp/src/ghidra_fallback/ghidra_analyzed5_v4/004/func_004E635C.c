#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0066AA1C(undefined4 *param_1,undefined1 param_2);
extern float DAT_004e63f4;

// USA 004E635C <- EU 004E6334 (Ghidra, non-matching)
// GLOBAL DAT_004e63f4 float

void func_004E635C(int param_1)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_54 (*(float *)(albw_frame + 0xc))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x14))
  #define local_48 (*(float *)(albw_frame + 0x18))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x20))
  #define local_30 (*(float *)(albw_frame + 0x30))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x34))
  #define local_28 (*(undefined4 *)(albw_frame + 0x38))
  #define local_24 (*(float *)(albw_frame + 0x3c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x40))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x44))
  pfVar2 = (float *)(param_1 + 0x3d0);
  iVar3 = *(int *)(param_1 + 0x4e4);
  iVar1 = 0x5a - iVar3;
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  local_28 = *(undefined4 *)(param_1 + 0x530);
  local_30 = *(float *)(param_1 + 0x528);
  uStack_2c = *(undefined4 *)(param_1 + 0x52c);
  fVar4 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
  fVar4 = DAT_004e63f4 / fVar4;
  func_00115C70(&local_24,&local_30,pfVar2);
  local_48 = local_24;
  uStack_44 = uStack_20;
  uStack_40 = uStack_1c;
  func_00115D70(&local_24,&local_48,fVar4);
  local_54 = local_24;
  uStack_50 = uStack_20;
  uStack_4c = uStack_1c;
  func_00115C54(pfVar2,pfVar2,&local_54);
  if (0x5a < iVar3) {
    func_0066AA1C((undefined4 *)(param_1 + 0x4e4),3);
  }
  return;
}

