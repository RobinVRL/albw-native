#include "ghidra_types.h"

extern int func_001DDDE8(int param_1,float *param_2,int param_3,float fparam_0);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_00520FC0(void);
extern int DAT_00144cf4;
extern float DAT_00144cf8;
extern float DAT_00144cfc;
extern int *DAT_00144d00;

// USA 00144C10 <- EU 00144C10 (Ghidra, non-matching)
// GLOBAL DAT_00144cf4 int
// GLOBAL DAT_00144cf8 float
// GLOBAL DAT_00144cfc float
// GLOBAL DAT_00144d00 int *

void func_00144C10(int param_1)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  code *pcVar4;
  uint in_fpscr;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define fStack_14 (*(float *)(albw_frame + 0xc))
  #define local_10 (*(float *)(albw_frame + 0x10))
  uVar1 = *(uint *)(*(int *)(param_1 + 0x7ac) + *(char *)(param_1 + 0x794) * 8 + 4);
  pcVar4 = *(code **)(*(int *)(param_1 + 0x7ac) + *(char *)(param_1 + 0x794) * 8);
  if ((uVar1 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(int *)(*(int *)(param_1 + 0x7a4) + ((int)uVar1 >> 1)));
  }
  (*pcVar4)((int)(*(int *)(param_1 + 0x7a4)) + ((int)uVar1 >> 1));
  iVar2 = *(int *)(param_1 + 0x790) + 1;
  *(int *)(param_1 + 0x790) = iVar2;
  if (*(int *)(param_1 + 0x7a0) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x7a0),1,fparam_0);
  }
  pfVar3 = (float *)func_00520FC0();
  local_18 = *(float *)(param_1 + 0x3d0);
  local_10 = *(float *)(param_1 + 0x3d8);
  if ((int)ALBW_AS_U32(((*pfVar3 - local_18) * (*pfVar3 - local_18) +
           (pfVar3[2] - local_10) * (pfVar3[2] - local_10))) < DAT_00144cf4) {
    fStack_14 = *(float *)(param_1 + 0x3d4) + DAT_00144cf8;
    func_001DDDE8(*DAT_00144d00,&local_18,1,DAT_00144cfc);
  }
  return;
}

