#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_004356B4(int *param_1);
extern int func_00491338(float *param_1,uint param_2,uint param_3,uint param_4);
extern float *DAT_0050c474;
extern float *DAT_0050c478;
extern int *DAT_0050c47c;
extern float *DAT_0050c480;
extern int *DAT_0050c484;

// USA 0050C3B4 <- EU 0050C38C (Ghidra, non-matching)
// GLOBAL DAT_0050c474 float *
// GLOBAL DAT_0050c478 float *
// GLOBAL DAT_0050c47c int *
// GLOBAL DAT_0050c480 float *
// GLOBAL DAT_0050c484 int *

undefined4 func_0050C3B4(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c (*(float *)(albw_frame + 0x4))
  #define local_18 (*(float *)(albw_frame + 0x8))
  local_20 = *DAT_0050c474;
  local_1c = DAT_0050c474[1];
  local_18 = DAT_0050c474[2];
  piVar4 = *(int **)(param_1 + 0x41c);
  func_00491338((float *)(piVar4 + 0x19),0,*(uint *)(param_1 + 1000),*(uint *)(param_1 + 0x47c));
  func_00115C54(&local_20,(float *)(param_1 + 0x3d0),DAT_0050c478);
  piVar1 = DAT_0050c47c;
  piVar4[1] = (int)ALBW_AS_U32(local_20);
  piVar4[2] = (int)ALBW_AS_U32(local_1c);
  piVar4[3] = (int)ALBW_AS_U32(local_18);
  iVar2 = *piVar1;
  iVar3 = piVar1[1];
  piVar4[0x18] = piVar1[2];
  piVar4[0x16] = iVar2;
  piVar4[0x17] = iVar3;
  func_004356B4(piVar4);
  piVar4 = *(int **)(param_1 + 0x420);
  func_00491338((float *)(piVar4 + 0x19),0,*(uint *)(param_1 + 1000),*(uint *)(param_1 + 0x47c));
  func_00115C54(&local_20,(float *)(param_1 + 0x3d0),DAT_0050c480);
  piVar1 = DAT_0050c484;
  piVar4[1] = (int)ALBW_AS_U32(local_20);
  piVar4[2] = (int)ALBW_AS_U32(local_1c);
  piVar4[3] = (int)ALBW_AS_U32(local_18);
  iVar2 = *piVar1;
  iVar3 = piVar1[1];
  piVar4[0x18] = piVar1[2];
  piVar4[0x16] = iVar2;
  piVar4[0x17] = iVar3;
  return func_004356B4(piVar4);
}

