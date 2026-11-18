#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_004FCD5C(int param_1,int param_2);
extern int func_004FCDF4(int param_1,int param_2);
extern int func_004FD038(int param_1,undefined1 param_2);
extern float DAT_001ac6a4;
extern float DAT_001ac6a8;
extern undefined4 *DAT_001ac6ac;

// USA 001AC4CC <- EU 001AC4CC (Ghidra, non-matching)
// GLOBAL DAT_001ac6a4 float
// GLOBAL DAT_001ac6a8 float
// GLOBAL DAT_001ac6ac undefined4 *

void func_001AC4CC(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  short *psVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x10))
  #define local_3c (*(float *)(albw_frame + 0x14))
  #define local_38 (*(float *)(albw_frame + 0x18))
  #define local_34 (*(float *)(albw_frame + 0x1c))
  #define local_30 (*(float *)(albw_frame + 0x20))
  #define local_2c ((float *)(albw_frame + 0x24))
  puVar3 = (undefined4 *)(param_1 + 0x95c);
  sVar1 = *(short *)(param_1 + 0x30);
  if (sVar1 == 0) {
    *puVar3 = 4;
    *(undefined4 *)(param_1 + 0x96c) = 0;
  }
  else if (sVar1 == 1) {
    *puVar3 = 3;
    *(undefined4 *)(param_1 + 0x960) = 5;
    *(undefined4 *)(param_1 + 0x968) = 0;
    *(undefined4 *)(param_1 + 0x970) = 1;
  }
  else if (sVar1 == 2) {
    *puVar3 = 3;
    *(undefined4 *)(param_1 + 0x960) = 4;
    *(undefined4 *)(param_1 + 0x964) = 5;
    *(undefined4 *)(param_1 + 0x968) = 0;
    *(undefined4 *)(param_1 + 0x96c) = 1;
    *(undefined4 *)(param_1 + 0x970) = 2;
  }
  psVar4 = (short *)(param_1 + 0x32);
  if (*(int *)(param_1 + 0x9a0) == 1) {
    if (puVar3[*psVar4] != 0) goto LAB_001ac5f8;
  }
  else if ((*(int *)(param_1 + 0x9a0) < 2) || (1 < (uint)puVar3[*psVar4] && puVar3[*psVar4] != 7))
  goto LAB_001ac5f8;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xfffffffe;
  iVar2 = param_1 + 0x5a8;
  func_004FCD5C(iVar2,0);
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xfffffffd;
  func_004FCDF4(iVar2,0);
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xfffffffb;
  func_004FD038(iVar2,0);
LAB_001ac5f8:
  local_30 = DAT_001ac6a4;
  local_2c[0] = DAT_001ac6a4;
  fVar5 = DAT_001ac6a4;
  func_00115154(local_2c,&local_30,*(int *)(param_1 + 0x954) + puVar3[*psVar4] * 0x20000000);
  local_3c = local_2c[0] * DAT_001ac6a8;
  local_34 = local_30 * DAT_001ac6a8;
  local_38 = fVar5;
  func_00115C54(&local_48,(float *)(param_1 + 8),&local_3c);
  *(float *)(param_1 + 0x910) = local_48;
  *(undefined4 *)(param_1 + 0x914) = uStack_44;
  *(undefined4 *)(param_1 + 0x918) = uStack_40;
  *(float *)(param_1 + 0x3d0) = local_48;
  *(undefined4 *)(param_1 + 0x3d4) = uStack_44;
  *(undefined4 *)(param_1 + 0x3d8) = uStack_40;
  func_004FC07C(param_1,0,0xffffffff,0);
  puVar3 = DAT_001ac6ac;
  *(undefined4 *)(param_1 + 0x3dc) = *DAT_001ac6ac;
  *(undefined4 *)(param_1 + 0x3e0) = puVar3[1];
  *(undefined4 *)(param_1 + 0x3e4) = puVar3[2];
  return;
}

