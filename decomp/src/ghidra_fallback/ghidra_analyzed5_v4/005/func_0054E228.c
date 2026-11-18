#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_00520FC0(void);
extern int func_0058E2B8(int *param_1);
extern int func_0068C690(float *param_1);
extern float DAT_0054e324;
extern int *DAT_0054e328;
extern float DAT_0054e32c;
extern undefined4 DAT_0054e330;

// USA 0054E228 <- EU 0054E200 (Ghidra, non-matching)
// GLOBAL DAT_0054e324 float
// GLOBAL DAT_0054e328 int *
// GLOBAL DAT_0054e32c float
// GLOBAL DAT_0054e330 undefined4

undefined4 func_0054E228(int *param_1)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(float *)(albw_frame + 0x0))
  #define local_4c (*(float *)(albw_frame + 0x4))
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define local_40 (*(undefined4 *)(albw_frame + 0x10))
  #define fStack_3c (*(float *)(albw_frame + 0x14))
  #define local_38 (*(float *)(albw_frame + 0x18))
  #define local_34 (*(float *)(albw_frame + 0x1c))
  #define local_30 (*(float *)(albw_frame + 0x20))
  #define local_2c (*(float *)(albw_frame + 0x24))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x28))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_20 (*(float *)(albw_frame + 0x30))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x34))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x38))
  fparam_0 = DAT_0054e324;
  func_004D80A4(&local_38,**(uint **)(*DAT_0054e328 + 0x24),DAT_0054e324);
  local_34 = DAT_0054e32c;
  fVar5 = DAT_0054e32c;
  pfVar1 = (float *)(**(code **)(*param_1 + 0x78))(param_1);
  pfVar2 = (float *)func_00520FC0();
  func_00115C70(&local_20,pfVar1,pfVar2);
  local_2c = local_20;
  uStack_28 = uStack_1c;
  uStack_24 = uStack_18;
  uVar3 = func_0068C690(&local_2c);
  func_004D80A4(&local_50,uVar3,fparam_0);
  if (ALBW_AS_F32(param_1[300]) < local_38 * local_50 + local_34 * fVar5 + local_30 * local_48) {
    local_44 = -local_50;
    fStack_3c = -local_48;
    local_40 = DAT_0054e330;
    local_4c = fVar5;
    iVar4 = func_0068C690(&local_44);
    local_20 = ALBW_AS_F32((iVar4 - (iVar4 + 0x20000000U & 0xc0000000)));
    uVar3 = func_0058E2B8((int *)&local_20);
    if (uVar3 < (uint)param_1[0x12d]) {
      return 0xf;
    }
  }
  return 0;
}

