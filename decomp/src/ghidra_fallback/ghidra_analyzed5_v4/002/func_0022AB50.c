#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115E10(float *param_1,float *param_2,float *param_3);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_0058A7D4(void);
extern int func_0068C690(float *param_1);
extern int DAT_0022acdc;
extern float DAT_0022ace0;
extern int *DAT_0022ace4;
extern uint DAT_0022ace8;
extern undefined4 DAT_0022acec;

// USA 0022AB50 <- EU 0022AB50 (Ghidra, non-matching)
// GLOBAL DAT_0022acdc int
// GLOBAL DAT_0022ace0 float
// GLOBAL DAT_0022ace4 int *
// GLOBAL DAT_0022ace8 uint
// GLOBAL DAT_0022acec undefined4

void func_0022AB50(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  undefined8 uVar7;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(float *)(albw_frame + 0x0))
  #define local_3c (*(undefined4 *)(albw_frame + 0x4))
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define local_2c (*(float *)(albw_frame + 0x14))
  #define local_28 (*(float *)(albw_frame + 0x18))
  #define local_24 (*(float *)(albw_frame + 0x1c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x20))
  func_00115C70(&local_34,(float *)(param_1 + 0x3d0),(float *)(param_1 + 8));
  local_40 = local_34;
  local_3c = ALBW_AS_U32(local_30);
  local_38 = local_2c;
  if ((int)ALBW_AS_U32(SQRT(local_34 * local_34 + local_2c * local_2c)) < DAT_0022acdc) {
    iVar2 = *(int *)(param_1 + 0xab4);
  }
  else {
    iVar2 = func_0068C690(&local_40);
  }
  *(int *)(param_1 + 0xab8) = iVar2;
  fVar6 = DAT_0022ace0;
  *(float *)(param_1 + 0x3dc) = DAT_0022ace0;
  *(float *)(param_1 + 0x3e0) = fVar6;
  *(float *)(param_1 + 0x3e4) = fVar6;
  func_004FC07C(param_1,0,0xffffffff,0);
  func_00115C70(&local_28,*(float **)(*DAT_0022ace4 + 0x1c),(float *)(param_1 + 8));
  local_34 = local_28;
  local_30 = local_24;
  local_2c = ALBW_AS_F32(uStack_20);
  func_00115E10(&local_28,&local_34,&local_40);
  *(bool *)(param_1 + 0xd04) = fVar6 <= local_24;
  if (fVar6 <= local_24) {
    puVar3 = (uint *)func_0058A7D4();
    uVar4 = func_00111A64(puVar3);
    uVar5 = *(uint *)(param_1 + 0xab4);
    *(int *)(param_1 + 0xab4) =
         (int)((ulonglong)uVar4 * 2 >> 0x20) * 0x20000000 + 0x40000000 + uVar5;
  }
  else {
    puVar3 = (uint *)func_0058A7D4();
    uVar4 = func_00111A64(puVar3);
    uVar5 = *(uint *)(param_1 + 0xab4);
    *(int *)(param_1 + 0xab4) =
         (int)((ulonglong)uVar4 * 2 >> 0x20) * -0x20000000 + -0x40000000 + uVar5;
  }
  uVar7 = func_00114608(DAT_0022ace8,uVar5);
  uVar1 = DAT_0022acec;
  *(undefined4 *)(param_1 + 0xabc) = 0;
  *(uint *)(param_1 + 0xab4) = (int)uVar7 + *(int *)(param_1 + 0xab4) & 0xe0000000;
  *(undefined4 *)(param_1 + 0xa74) = 2;
  *(undefined4 *)(param_1 + 0xa78) = uVar1;
  *(undefined4 *)(param_1 + 0xa70) = 0;
  return;
}

