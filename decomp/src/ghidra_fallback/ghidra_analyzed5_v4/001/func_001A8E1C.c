#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_001A91A8(int param_1);
extern int func_001A9610(uint param_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_0051D2CC(int *param_1,int param_2,float fparam_0);
extern int func_00520FF8(int param_1);
extern undefined8 func_0058AB74(int param_1);
extern int func_0065A984(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern float DAT_001a8f80;
extern float DAT_001a8f84;
extern int DAT_001a8f88;

// USA 001A8E1C <- EU 001A8E1C (Ghidra, non-matching)
// GLOBAL DAT_001a8f80 float
// GLOBAL DAT_001a8f84 float
// GLOBAL DAT_001a8f88 int

undefined4 func_001A8E1C(uint param_1)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(float *)(albw_frame + 0x14))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x1c))
  iVar2 = func_00520FF8(param_1);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x920) = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x920) + 1;
    *(int *)(param_1 + 0x920) = iVar2;
    if ((4 < iVar2) && (bVar1 = func_001A9610(param_1), bVar1)) {
      func_0065A984((undefined4 *)(param_1 + 0x8bc),6);
    }
  }
  func_00115C70(&local_1c,(float *)(param_1 + 8),(float *)(param_1 + 0x3d0));
  local_28 = local_1c;
  uStack_24 = uStack_18;
  uStack_20 = uStack_14;
  iVar2 = func_0068C690(&local_28);
  func_0051D2CC((int *)(param_1 + 1000),iVar2,DAT_001a8f80);
  func_004D80A4((float *)(param_1 + 0x3dc),*(uint *)(param_1 + 1000),*(float *)(param_1 + 0x8f0));
  local_1c = *(float *)(param_1 + 0x3dc);
  uStack_18 = *(undefined4 *)(param_1 + 0x3e0);
  uStack_14 = *(undefined4 *)(param_1 + 0x3e4);
  iVar2 = func_00520FF8(param_1);
  if (iVar2 != 0) {
    func_00115D70(&local_1c,&local_1c,DAT_001a8f84);
  }
  func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),&local_1c);
  if ((((0x14 < *(int *)(param_1 + 0x8bc)) &&
       (fVar3 = *(float *)(param_1 + 0x3d0) - *(float *)(param_1 + 8),
       fVar4 = *(float *)(param_1 + 0x3d8) - *(float *)(param_1 + 0x10),
       (int)ALBW_AS_U32((fVar3 * fVar3 + fVar4 * fVar4)) < DAT_001a8f88)) &&
      (iVar2 = func_00520FF8(param_1), iVar2 != 0)) &&
     (uVar5 = func_0058AB74(param_1), (int)uVar5 != 2)) {
    func_0065A984((undefined4 *)(param_1 + 0x8bc),6);
  }
  return func_001A91A8(param_1);
}

