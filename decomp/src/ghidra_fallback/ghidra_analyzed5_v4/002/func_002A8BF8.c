#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0014FAFC(int param_1,uint param_2,float fparam_0);
extern int func_002A90E8(int param_1);
extern int func_004FACD4(int param_1,int *param_2,undefined4 param_3,int *param_4);
extern int func_0051D39C(int *param_1,int param_2,int param_3);
extern int func_0051E6D0(int param_1,float *param_2,float fparam_0);
extern int func_0068C690(float *param_1);
extern undefined4 DAT_002a8dfc;
extern undefined4 DAT_002a8e00;
extern float DAT_002a8e04;
extern float DAT_002a8e08;
extern int *DAT_002a8e0c;
extern int DAT_002a8e10;
extern int DAT_002a8e14;
extern int *DAT_002a8e18;
extern undefined4 DAT_002a8e1c;
extern undefined4 DAT_002a8e20;

// USA 002A8BF8 <- EU 002A8BD4 (Ghidra, non-matching)
// GLOBAL DAT_002a8dfc undefined4
// GLOBAL DAT_002a8e00 undefined4
// GLOBAL DAT_002a8e04 float
// GLOBAL DAT_002a8e08 float
// GLOBAL DAT_002a8e0c int *
// GLOBAL DAT_002a8e10 int
// GLOBAL DAT_002a8e14 int
// GLOBAL DAT_002a8e18 int *
// GLOBAL DAT_002a8e1c undefined4
// GLOBAL DAT_002a8e20 undefined4

undefined4 func_002A8BF8(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  func_004FACD4(param_1,(int *)0x0,param_3,param_4);
  puVar1 = func_002A90E8(param_1);
  uVar3 = DAT_002a8dfc;
  if ((puVar1 != (undefined4 *)0x0) &&
     ((puVar1 = func_002A90E8(param_1), puVar1 == (undefined4 *)0x0 ||
      (puVar1 = func_002A90E8(param_1), *(char *)(puVar1 + 0x2e7) == '\0')))) {
    local_28 = *(float *)(param_1 + 0x3d0);
    local_24 = *(float *)(param_1 + 0x3d4);
    local_20 = *(float *)(param_1 + 0x3d8);
    *(undefined4 *)(param_1 + 0x8ec) = *(undefined4 *)(param_1 + 1000);
    puVar1 = func_002A90E8(param_1);
    fVar7 = DAT_002a8e08;
    fVar5 = DAT_002a8e04;
    if (puVar1 != (undefined4 *)0x0) {
      puVar1 = func_002A90E8(param_1);
      func_00115C70(&local_28,(float *)(puVar1 + 0x2c0),(float *)(param_1 + 0x3d0));
      iVar2 = func_0068C690(&local_28);
      *(int *)(param_1 + 0x8ec) = iVar2;
      puVar1 = func_002A90E8(param_1);
      local_20 = ALBW_AS_F32(puVar1[0x2c2]);
      local_28 = ALBW_AS_F32(puVar1[0x2c0]);
      local_24 = ALBW_AS_F32(puVar1[0x2c1]) + fVar5;
      *(float *)(param_1 + 0x3d4) =
           *(float *)(param_1 + 0x3d4) + (local_24 - *(float *)(param_1 + 0x3d4)) * fVar7;
    }
    *(int *)(param_1 + 0x8ec) = *(int *)(param_1 + 0x8f0) + *(int *)(param_1 + 0x8ec);
    *(int *)(param_1 + 1000) = *(int *)(param_1 + 1000) - *DAT_002a8e0c;
    func_0051D39C((int *)(param_1 + 0x8f0),0,0x28);
    iVar2 = DAT_002a8e14;
    if ((*(char *)(param_1 + 0x90c) == '\0') &&
       (fVar4 = local_28 - *(float *)(param_1 + 0x3d0),
       fVar6 = local_20 - *(float *)(param_1 + 0x3d8),
       DAT_002a8e10 <= (int)ALBW_AS_U32((fVar4 * fVar4 + fVar6 * fVar6)))) {
      iVar2 = func_0051E6D0(*DAT_002a8e18,(float *)(param_1 + 0x3d0),fVar5);
      uVar3 = DAT_002a8e1c;
      if (iVar2 == 0) {
        uVar3 = DAT_002a8e20;
      }
      *(undefined4 *)(param_1 + 0x8e0) = uVar3;
    }
    else {
      fVar5 = *(float *)(param_1 + 0x8e0);
      fVar5 = fVar5 + -fVar5 * fVar7;
      *(float *)(param_1 + 0x8e0) = fVar5;
      *(undefined1 *)(param_1 + 0x90c) = 1;
      if ((int)ALBW_AS_U32(fVar5) < iVar2) {
        *(float *)(param_1 + 0x3d0) = local_28;
        *(float *)(param_1 + 0x3d4) = local_24;
        *(float *)(param_1 + 0x3d8) = local_20;
      }
    }
    uVar3 = *(undefined4 *)(param_1 + 0x3e0);
    func_0014FAFC(param_1,*(uint *)(param_1 + 0x8ec),*(float *)(param_1 + 0x8e0));
    *(undefined4 *)(param_1 + 0x3e0) = uVar3;
    return func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3dc));
  }
  *(undefined4 *)(param_1 + 0x3dc) = uVar3;
  *(undefined4 *)(param_1 + 0x3e4) = uVar3;
  uVar3 = DAT_002a8e00;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xfffffffc;
  *(undefined4 *)(param_1 + 0x4e4) = uVar3;
  *(undefined4 *)(param_1 + 0x4e8) = uVar3;
  *(undefined4 *)(param_1 + 0x4ec) = uVar3;
  *(undefined1 *)(param_1 + 0x2d7) = 1;
  return 0;
}

