#include "ghidra_types.h"

extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern int func_00491938(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004A2D1C(int param_1,float *param_2);
extern int func_005528F0(int param_1,float *param_2,float *param_3,float *param_4,float fparam_0);
extern int func_0068C690(float *param_1);
extern uint DAT_0033cae8;
extern float DAT_0033caec;
extern uint DAT_0033caf0;
extern float DAT_0033caf4;

// USA 0033CA24 <- EU 0033CA00 (Ghidra, non-matching)
// GLOBAL DAT_0033cae8 uint
// GLOBAL DAT_0033caec float
// GLOBAL DAT_0033caf0 uint
// GLOBAL DAT_0033caf4 float

void func_0033CA24(int param_1,int *param_2,float fparam_0)

{
  uint uVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define local_a8 (*(float *)(albw_frame + 0x8))
  #define local_a4 (*(float *)(albw_frame + 0xc))
  #define local_a0 (*(float *)(albw_frame + 0x10))
  #define local_9c (*(float *)(albw_frame + 0x14))
  #define local_98 (*(float *)(albw_frame + 0x18))
  #define local_94 (*(float *)(albw_frame + 0x1c))
  #define local_90 (*(float *)(albw_frame + 0x20))
  #define local_8c (*(undefined4 *)(albw_frame + 0x24))
  #define local_88 (*(float *)(albw_frame + 0x28))
  #define local_84 (*(float *)(albw_frame + 0x2c))
  #define local_80 (*(float *)(albw_frame + 0x30))
  #define local_7c (*(undefined4 *)(albw_frame + 0x34))
  #define local_78 (*(float *)(albw_frame + 0x38))
  #define local_74 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_70 (*(undefined4 *)(albw_frame + 0x40))
  #define afStack_68 ((float *)(albw_frame + 0x48))
  #define afStack_38 ((float *)(albw_frame + 0x78))
  #define afStack_2c ((float *)(albw_frame + 0x84))
  uVar1 = DAT_0033cae8;
  func_005528F0(param_1,&local_78,afStack_2c,afStack_38,fparam_0);
  fVar2 = DAT_0033caec;
  fVar6 = *(float *)(param_1 + 0x3dc);
  fVar7 = DAT_0033caec;
  uVar3 = func_0068C690(afStack_38);
  uVar5 = DAT_0033caf0;
  if (fVar6 <= fVar2) {
    uVar5 = uVar1;
  }
  func_00491938(afStack_68,0,uVar3,uVar5);
  local_a8 = DAT_0033caf4;
  local_94 = DAT_0033caf4;
  local_80 = DAT_0033caf4;
  local_9c = local_78;
  local_8c = local_74;
  local_7c = local_70;
  local_a4 = fVar7;
  local_a0 = fVar7;
  local_98 = fVar7;
  local_90 = fVar7;
  local_88 = fVar7;
  local_84 = fVar7;
  func_001157FC(&local_a8,&local_a8,afStack_68);
  iVar4 = *param_2;
  if ((iVar4 != 0) && (*(int *)(iVar4 + 0x1c) == param_2[1])) {
    func_004A2D1C(iVar4,&local_a8);
  }
  return;
}

