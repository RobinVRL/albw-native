#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FC0(void);
extern int func_0065D8B8(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern float DAT_00212c64;
extern float DAT_00212c68;
extern undefined4 DAT_00212c6c;
extern int *DAT_00212c70;
extern float DAT_00212c74;

// USA 00212B5C <- EU 00212B5C (Ghidra, non-matching)
// GLOBAL DAT_00212c64 float
// GLOBAL DAT_00212c68 float
// GLOBAL DAT_00212c6c undefined4
// GLOBAL DAT_00212c70 int *
// GLOBAL DAT_00212c74 float

void func_00212B5C(int param_1)

{
  int iVar1;
  float *pfVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define fStack_20 (*(float *)(albw_frame + 0x0))
  #define local_1c (*(undefined4 *)(albw_frame + 0x4))
  #define local_14 (*(float *)(albw_frame + 0xc))
  #define local_10 ((float *)(albw_frame + 0x10))
  if (*(uint *)(param_1 + 0x95c) < *(uint *)(param_1 + 0x960)) {
    *(uint *)(param_1 + 0x95c) = *(uint *)(param_1 + 0x95c) + 1;
  }
  else {
    func_0065D8B8((undefined4 *)(param_1 + 0x8bc),4);
  }
  iVar1 = *(int *)(param_1 + 0x960) - *(int *)(param_1 + 0x95c);
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  fVar3 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
  fVar4 = *(float *)(param_1 + 0x974);
  *(float *)(param_1 + 0x974) = fVar4 + (DAT_00212c64 - fVar4) * (DAT_00212c68 / fVar3);
  pfVar2 = (float *)func_00520FC0();
  func_00115C70(&fStack_20,pfVar2,(float *)(param_1 + 0x3d0));
  local_1c = DAT_00212c6c;
  func_00115DC8(&fStack_20);
  iVar1 = func_0068C690(&fStack_20);
  func_0051D2F4((int *)(param_1 + 0x978),iVar1,0,*DAT_00212c70,DAT_00212c74);
  func_00115154(&local_14,local_10,*(uint *)(param_1 + 0x978));
  *(float *)(param_1 + 0x3dc) = *(float *)(param_1 + 0x974) * local_14;
  *(float *)(param_1 + 0x3e4) = *(float *)(param_1 + 0x974) * local_10[0];
  return;
}

