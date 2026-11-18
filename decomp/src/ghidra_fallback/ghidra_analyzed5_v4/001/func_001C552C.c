#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_001DDDE8(int param_1,float *param_2,int param_3,float fparam_0);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int *DAT_001c5634;
extern int DAT_001c5638;
extern float DAT_001c563c;
extern undefined4 DAT_001c5640;
extern float DAT_001c5644;

// USA 001C552C <- EU 001C552C (Ghidra, non-matching)
// GLOBAL DAT_001c5634 int *
// GLOBAL DAT_001c5638 int
// GLOBAL DAT_001c563c float
// GLOBAL DAT_001c5640 undefined4
// GLOBAL DAT_001c5644 float

void func_001C552C(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x4))
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x14))
  #define local_18 (*(float *)(albw_frame + 0x18))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x20))
  uVar2 = *(uint *)(*(int *)(param_1 + 0x7a4) + *(char *)(param_1 + 0x78c) * 8 + 4);
  pcVar4 = *(code **)(*(int *)(param_1 + 0x7a4) + *(char *)(param_1 + 0x78c) * 8);
  if ((uVar2 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(int *)(*(int *)(param_1 + 0x79c) + ((int)uVar2 >> 1)));
  }
  (*pcVar4)((int)(*(int *)(param_1 + 0x79c)) + ((int)uVar2 >> 1));
  iVar3 = *(int *)(param_1 + 0x788) + 1;
  *(int *)(param_1 + 0x788) = iVar3;
  if (*(int *)(param_1 + 0x798) != 0) {
    fVar5 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x798),1,fVar5);
  }
  piVar1 = DAT_001c5634;
  fVar6 = **(float **)(*DAT_001c5634 + 0x1c) - *(float *)(param_1 + 0x3d0);
  fVar5 = (*(float **)(*DAT_001c5634 + 0x1c))[2] - *(float *)(param_1 + 0x3d8);
  if ((int)ALBW_AS_U32(SQRT(fVar6 * fVar6 + fVar5 * fVar5)) < DAT_001c5638) {
    local_30 = DAT_001c563c;
    uStack_2c = DAT_001c5640;
    local_28 = DAT_001c563c;
    func_00115C54(&local_18,(float *)(param_1 + 0x3d0),&local_30);
    local_24 = local_18;
    uStack_20 = uStack_14;
    uStack_1c = uStack_10;
    func_001DDDE8(*piVar1,&local_24,1,DAT_001c5644);
  }
  return;
}

