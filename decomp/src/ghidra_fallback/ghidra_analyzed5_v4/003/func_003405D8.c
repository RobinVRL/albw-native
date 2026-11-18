#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_004331A0(undefined4 *param_1);
extern int func_00436384(undefined4 *param_1,undefined4 *param_2);
extern int func_004A8030(int param_1,int *param_2,uint param_3);
extern undefined4 DAT_00340688;
extern undefined4 DAT_0034068c;
extern int *DAT_00340690;

// USA 003405D8 <- EU 003405B4 (Ghidra, non-matching)
// GLOBAL DAT_00340688 undefined4
// GLOBAL DAT_0034068c undefined4
// GLOBAL DAT_00340690 int *

int func_003405D8(int param_1,float *param_2,float *param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define iStack_b8 (*(int *)(albw_frame + 0x8))
  #define local_b4 (*(int *)(albw_frame + 0xc))
  #define local_ac (*(undefined4 *)(albw_frame + 0x14))
  #define local_a4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_9c (*(float * *)(albw_frame + 0x24))
  #define local_98 (*(float * *)(albw_frame + 0x28))
  #define local_90 (*(undefined1 *)(albw_frame + 0x30))
  #define local_8c (*(undefined4 *)(albw_frame + 0x34))
  #define local_88 (*(undefined4 *)(albw_frame + 0x38))
  #define uStack_84 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_80 (*(undefined4 *)(albw_frame + 0x40))
  #define local_78 (*(float *)(albw_frame + 0x48))
  #define uStack_74 (*(undefined4 *)(albw_frame + 0x4c))
  #define uStack_70 (*(undefined4 *)(albw_frame + 0x50))
  #define auStack_6c ((undefined4 *)(albw_frame + 0x54))
  #define auStack_40 ((undefined4 *)(albw_frame + 0x80))
  uVar5 = DAT_0034068c;
  uVar6 = DAT_00340688;
  puVar2 = func_004331A0(auStack_40);
  pbVar3 = (byte *)func_00436384(auStack_6c,puVar2);
  func_00110D44(&iStack_b8,pbVar3,0x2a);
  local_b4 = param_1 + 0x1b4;
  local_ac = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x2cc);
  local_a4 = 0x18;
  local_90 = *(undefined1 *)(param_1 + 0x16c);
  local_9c = param_3;
  local_98 = param_2;
  local_8c = uVar6;
  local_88 = uVar5;
  uStack_84 = uVar6;
  local_80 = uVar5;
  func_00115C70(&local_78,param_3,param_2);
  *(float *)(param_1 + 0x1e8) = local_78;
  *(undefined4 *)(param_1 + 0x1ec) = uStack_74;
  *(undefined4 *)(param_1 + 0x1f0) = uStack_70;
  func_00115DC8((float *)(param_1 + 0x1e8));
  piVar1 = DAT_00340690;
  *(undefined1 *)(param_1 + 0x16d) = (undefined1)param_4;
  iVar4 = func_004A8030(*piVar1,&iStack_b8,0xff);
  return iVar4;
}

