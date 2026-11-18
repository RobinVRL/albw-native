#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_003838A8(int param_1,int param_2);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern float DAT_002b64b4;
extern float DAT_002b64b8;
extern uint DAT_002b64bc;
extern float DAT_002b64c0;
extern float DAT_002b64c4;
extern undefined4 DAT_002b64c8;

// USA 002B6294 <- EU 002B6270 (Ghidra, non-matching)
// GLOBAL DAT_002b64b4 float
// GLOBAL DAT_002b64b8 float
// GLOBAL DAT_002b64bc uint
// GLOBAL DAT_002b64c0 float
// GLOBAL DAT_002b64c4 float
// GLOBAL DAT_002b64c8 undefined4

float func_002B6294(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fparam_0;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0xd0];
  #define local_d0 (*(float *)(albw_frame + 0x0))
  #define local_cc (*(float *)(albw_frame + 0x4))
  #define local_c8 (*(float *)(albw_frame + 0x8))
  #define local_c4 (*(float *)(albw_frame + 0xc))
  #define local_c0 (*(float *)(albw_frame + 0x10))
  #define local_bc (*(float *)(albw_frame + 0x14))
  #define local_b8 ((uint *)(albw_frame + 0x18))
  #define local_b0 (*(int * *)(albw_frame + 0x20))
  #define local_ac (*(int *)(albw_frame + 0x24))
  #define local_a8 (*(float *)(albw_frame + 0x28))
  #define local_a4 (*(float *)(albw_frame + 0x2c))
  #define local_a0 (*(undefined4 *)(albw_frame + 0x30))
  #define local_9c (*(float *)(albw_frame + 0x34))
  #define local_98 (*(uint *)(albw_frame + 0x38))
  #define local_64 (*(undefined4 *)(albw_frame + 0x6c))
  #define local_60 (*(undefined1 *)(albw_frame + 0x70))
  #define local_5c (*(float *)(albw_frame + 0x74))
  #define local_58 (*(float *)(albw_frame + 0x78))
  #define local_54 (*(float *)(albw_frame + 0x7c))
  #define local_44 (*(float *)(albw_frame + 0x8c))
  #define local_40 (*(float *)(albw_frame + 0x90))
  #define local_3c (*(float *)(albw_frame + 0x94))
  bVar5 = false;
  if (*(float *)(param_1 + 0x3dc) == DAT_002b64b4) {
    bVar5 = *(float *)(param_1 + 0x3e4) == DAT_002b64b4;
  }
  if (bVar5) {
    return DAT_002b64b8;
  }
  local_44 = *(float *)(param_1 + 0xa08);
  local_40 = *(float *)(param_1 + 0xa0c);
  local_3c = *(float *)(param_1 + 0xa10);
  fVar8 = DAT_002b64b4;
  fparam_0 = DAT_002b64b8;
  func_00115C70(&local_44,&local_44,(float *)(param_1 + 0x3d0));
  func_004D80A4(&local_d0,*(uint *)(param_1 + 1000),fparam_0);
  local_c4 = local_44;
  local_c0 = local_40;
  local_bc = local_3c;
  local_cc = fVar8;
  func_00115DC8(&local_c4);
  uVar1 = DAT_002b64bc;
  fVar4 = ALBW_AS_F32((DAT_002b64bc | DAT_002b64bc << 0x1a));
  fVar6 = local_d0 * local_c4 + local_cc * local_c0 + local_c8 * local_bc;
  fVar7 = DAT_002b64c4;
  fVar9 = DAT_002b64c0;
  if ((int)DAT_002b64bc < (int)ALBW_AS_U32(fVar6)) {
    iVar3 = 0xd;
  }
  else {
    if ((uint)ALBW_AS_U32(fVar4) < (uint)ALBW_AS_U32(fVar6)) {
      iVar3 = 0xd;
      goto joined_r0x002b63a0;
    }
    iVar3 = 0xe;
  }
  if (iVar3 != 0xd) {
    func_004D80A4(&local_5c,*(int *)(param_1 + 1000) + 0x40000000,fparam_0);
    fVar6 = local_c4 * local_5c + local_c0 * fVar8 + local_bc * local_54;
    local_58 = fVar8;
  }
joined_r0x002b63a0:
  if (((int)ALBW_AS_U32(fVar6) <= (int)uVar1) && ((uint)ALBW_AS_U32(fVar4) < (uint)ALBW_AS_U32(fVar6))) {
    fVar7 = fVar9;
  }
  iVar2 = func_003838A8(param_1 + 0x8c0,iVar3);
  if (**(int **)(*(int *)(param_1 + 0x8e0) + 0x14) != iVar2) {
    iVar3 = func_003838A8(param_1 + 0x8c0,iVar3);
    iVar2 = func_003838A8(param_1 + 0x8c0,iVar3);
    if (**(int **)(*(int *)(param_1 + 0x8e0) + 0x14) != iVar2) {
      local_b8[1] = 3;
      local_b0 = &local_ac;
      local_98 = *(uint *)(*(int *)(param_1 + 0x8e0) + 0xc) | 0xff;
      local_64 = 10;
      local_60 = 0;
      local_b8[0] = 1;
      local_a0 = DAT_002b64c8;
      local_ac = iVar3;
      local_a8 = fVar8;
      local_a4 = fparam_0;
      local_9c = fparam_0;
      func_0016898C(*(int *)(param_1 + 0x8e0),local_b8);
    }
  }
  return fVar7;
}

