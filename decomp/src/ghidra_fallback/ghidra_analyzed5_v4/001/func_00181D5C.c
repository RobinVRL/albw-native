// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00392CE0(int *param_1,float fparam_0,float fparam_1);
extern int func_0051D2CC(int *param_1,int param_2,float fparam_0);
extern int func_00556E64(int param_1);
extern int func_00659400(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00181ec8;
extern float DAT_00181ecc;
extern float DAT_00181ed0;
extern float DAT_00181ed4;
extern float DAT_00181ed8;

// USA 00181D5C <- EU 00181D5C (Ghidra, non-matching)
// GLOBAL DAT_00181ec8 int *
// GLOBAL DAT_00181ecc float
// GLOBAL DAT_00181ed0 float
// GLOBAL DAT_00181ed4 float
// GLOBAL DAT_00181ed8 float

void func_00181D5C(int *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_4c (*(float *)(albw_frame + 0x4))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0xc))
  #define local_40 (*(float *)(albw_frame + 0x10))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x18))
  #define local_30 (*(float *)(albw_frame + 0x20))
  #define iStack_2c (*(int *)(albw_frame + 0x24))
  #define iStack_28 (*(int *)(albw_frame + 0x28))
  #define local_24 (*(float *)(albw_frame + 0x2c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x30))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x34))
  *(undefined1 *)((int)param_1 + 0xbf1) = 1;
  pfVar5 = (float *)(param_1 + 0x299);
  if ((*DAT_00181ec8 == 0) || (bVar1 = func_00556E64(*DAT_00181ec8), bVar1)) {
    fVar6 = DAT_00181ecc;
    uVar2 = param_1[0x26a];
    uVar4 = param_1[0x269];
    bVar1 = uVar4 < uVar2;
    if (bVar1) {
      uVar4 = uVar4 + 1;
    }
    iVar3 = uVar2 - uVar4;
    if (bVar1) {
      param_1[0x269] = uVar4;
    }
    if (iVar3 < 2) {
      iVar3 = 1;
    }
    local_30 = ALBW_AS_F32(param_1[0x296]);
    iStack_2c = param_1[0x297];
    iStack_28 = param_1[0x298];
    fVar7 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    fVar6 = fVar6 / fVar7;
    func_00115C70(&local_24,&local_30,pfVar5);
    local_40 = local_24;
    uStack_3c = uStack_20;
    uStack_38 = uStack_1c;
    func_00115D70(&local_24,&local_40,fVar6);
    local_4c = local_24;
    uStack_48 = uStack_20;
    uStack_44 = uStack_1c;
    func_00115C54(pfVar5,pfVar5,&local_4c);
  }
  else {
    *pfVar5 = ALBW_AS_F32(param_1[0x296]);
    param_1[0x29a] = param_1[0x297];
    param_1[0x29b] = param_1[0x298];
  }
  func_0051D2CC(param_1 + 0xfa,0,DAT_00181ed0);
  func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0xf4),(float *)(param_1 + 0xf7));
  iVar3 = func_00392CE0(param_1 + 0x284,DAT_00181ed8,DAT_00181ed4);
  if (iVar3 != 0) {
    param_1[0xda] = param_1[0x29c];
    param_1[0xdb] = param_1[0x29d];
    param_1[0xdc] = param_1[0x29e];
    param_1[0xf4] = param_1[0x29c];
    param_1[0xf5] = param_1[0x29d];
    param_1[0xf6] = param_1[0x29e];
    (**(code **)(*param_1 + 0xac))(param_1,*(undefined1 *)((int)param_1 + 0x853),0);
    func_00659400(param_1 + 600,0);
  }
  return;
}

