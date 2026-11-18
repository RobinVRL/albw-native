#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0068C690(float *param_1);
extern undefined4 DAT_004c9b38;
extern int DAT_004c9b3c;
extern float DAT_004c9b40;
extern float DAT_004c9b44;
extern int DAT_004c9b48;

// USA 004C9AFC <- EU 004C9AD4 (Ghidra, non-matching)
// GLOBAL DAT_004c9b38 undefined4
// GLOBAL DAT_004c9b3c int
// GLOBAL DAT_004c9b40 float
// GLOBAL DAT_004c9b44 float
// GLOBAL DAT_004c9b48 int

undefined4 func_004C9AFC(int param_1,float *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define fStack_18 (*(float *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  func_00115C70(&fStack_18,param_2,(float *)(param_1 + 0x3d0));
  local_14 = DAT_004c9b38;
  func_00115DC8(&fStack_18);
  iVar1 = func_0068C690(&fStack_18);
  iVar3 = *(int *)(DAT_004c9b3c + 0x14);
  fparam_0 = DAT_004c9b40;
  if (*(char *)(param_1 + 0x8c0) == '\t') {
    iVar3 = *(int *)(DAT_004c9b3c + 0x18);
    fparam_0 = DAT_004c9b44;
  }
  uVar2 = func_0051D2F4((int *)(param_1 + 1000),iVar1,DAT_004c9b48,iVar3,fparam_0);
  return uVar2;
}

