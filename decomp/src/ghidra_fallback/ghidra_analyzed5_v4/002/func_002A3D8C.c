#include "ghidra_types.h"

extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_001151F8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D18(float *param_1,float *param_2,float *param_3);
extern int func_004356B4(int *param_1);
extern int func_00491404(float *param_1,float *param_2);
extern int func_00491C08(float *param_1,float *param_2);
extern int func_004CEAF0(int param_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_00520FC0(void);
extern int func_0068C690(float *param_1);
extern float DAT_002a4024;
extern float DAT_002a4028;
extern int DAT_002a402c;
extern undefined4 DAT_002a4030;
extern float *DAT_002a4034;

// USA 002A3D8C <- EU 002A3D68 (Ghidra, non-matching)
// GLOBAL DAT_002a4024 float
// GLOBAL DAT_002a4028 float
// GLOBAL DAT_002a402c int
// GLOBAL DAT_002a4030 undefined4
// GLOBAL DAT_002a4034 float *

void func_002A3D8C(int param_1)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_a0 (*(float *)(albw_frame + 0x0))
  #define fStack_9c (*(float *)(albw_frame + 0x4))
  #define local_98 (*(float *)(albw_frame + 0x8))
  #define local_94 (*(float *)(albw_frame + 0xc))
  #define afStack_90 ((float *)(albw_frame + 0x10))
  #define local_84 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_74 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_54 (*(float *)(albw_frame + 0x4c))
  #define local_50 (*(float *)(albw_frame + 0x50))
  #define local_4c (*(float *)(albw_frame + 0x54))
  #define local_48 (*(float *)(albw_frame + 0x58))
  #define fStack_44 (*(float *)(albw_frame + 0x5c))
  #define fStack_40 (*(float *)(albw_frame + 0x60))
  fVar11 = DAT_002a4024;
  fparam_0 = DAT_002a4028;
  if (*(char *)(param_1 + 0xb96) == '\0') {
    pfVar3 = (float *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40c) + 0x24) + 0x14) +
                      *(int *)(param_1 + 0xb44) * 0x30);
    func_00491C08(&local_a0,pfVar3);
    fVar7 = SQRT(local_94 * local_94 + local_a0 * local_a0 + fStack_9c * fStack_9c +
                 local_98 * local_98);
    if (fVar11 < fVar7) {
      fVar7 = fparam_0 / fVar7;
      local_94 = local_94 * fVar7;
      local_a0 = local_a0 * fVar7;
      fStack_9c = fStack_9c * fVar7;
      local_98 = local_98 * fVar7;
    }
    func_00491404(afStack_90,&local_a0);
    local_54 = pfVar3[3];
    local_50 = pfVar3[7];
    local_4c = pfVar3[0xb];
    iVar1 = *(int *)(param_1 + 0xa10);
    *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
    func_001151F8((undefined4 *)(iVar1 + 0x80),afStack_90,&local_54);
    func_004CEAF0(*(int *)(param_1 + 0xa10));
  }
  iVar1 = *(int *)(param_1 + 0xa14);
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  func_001151EC((undefined4 *)(iVar1 + 0x80),
                (undefined4 *)
                (*(int *)(*(int *)(*(int *)(param_1 + 0x40c) + 0x24) + 0x14) +
                *(int *)(param_1 + 0xb40) * 0x30));
  func_004CEAF0(*(int *)(param_1 + 0xa14));
  func_001119F4(&local_a0,
                (undefined4 *)
                (*(int *)(*(int *)(*(int *)(param_1 + 0x40c) + 0x24) + 0x14) +
                *(int *)(param_1 + 0xb40) * 0x30));
  iVar1 = DAT_002a402c;
  local_54 = *(float *)(DAT_002a402c + 0x44);
  local_50 = *(float *)(DAT_002a402c + 0x48);
  local_4c = *(float *)(DAT_002a402c + 0x4c);
  *(float *)(param_1 + 0xa60) = local_94;
  *(undefined4 *)(param_1 + 0xa64) = local_84;
  *(undefined4 *)(param_1 + 0xa68) = local_74;
  func_00115D18(&local_54,&local_a0,&local_54);
  func_00115C54((float *)(param_1 + 0xa60),(float *)(param_1 + 0xa60),&local_54);
  local_48 = *(float *)(iVar1 + 0x38);
  fStack_44 = *(float *)(iVar1 + 0x3c);
  fStack_40 = *(float *)(iVar1 + 0x40);
  func_00115D18(&local_48,&local_a0,&local_48);
  pfVar4 = (float *)(param_1 + 0xa54);
  func_00115C54(pfVar4,(float *)(param_1 + 0xa60),&local_48);
  pfVar3 = DAT_002a4034;
  uVar10 = DAT_002a4030;
  fVar7 = *pfVar4;
  uVar8 = *(undefined4 *)(param_1 + 0xa58);
  uVar9 = *(undefined4 *)(param_1 + 0xa5c);
  uVar5 = *(undefined4 *)(param_1 + 0xa64);
  uVar6 = *(undefined4 *)(param_1 + 0xa68);
  iVar1 = *(int *)(param_1 + 0xaf0);
  *(undefined4 *)(iVar1 + 100) = *(undefined4 *)(param_1 + 0xa60);
  *(undefined4 *)(iVar1 + 0x68) = uVar5;
  *(float *)(iVar1 + 0x58) = fVar7;
  *(undefined4 *)(iVar1 + 0x5c) = uVar8;
  *(undefined4 *)(iVar1 + 0x60) = uVar9;
  *(undefined4 *)(iVar1 + 0x6c) = uVar6;
  *(undefined4 *)(iVar1 + 0x70) = uVar10;
  func_004356B4(*(int **)(param_1 + 0xaf0));
  fVar7 = *pfVar4;
  uVar8 = *(undefined4 *)(param_1 + 0xa58);
  uVar9 = *(undefined4 *)(param_1 + 0xa5c);
  uVar5 = *(undefined4 *)(param_1 + 0xa64);
  uVar6 = *(undefined4 *)(param_1 + 0xa68);
  iVar1 = *(int *)(param_1 + 0xa24);
  *(undefined4 *)(iVar1 + 100) = *(undefined4 *)(param_1 + 0xa60);
  *(undefined4 *)(iVar1 + 0x68) = uVar5;
  *(float *)(iVar1 + 0x58) = fVar7;
  *(undefined4 *)(iVar1 + 0x5c) = uVar8;
  *(undefined4 *)(iVar1 + 0x60) = uVar9;
  *(undefined4 *)(iVar1 + 0x6c) = uVar6;
  *(undefined4 *)(iVar1 + 0x70) = uVar10;
  func_004356B4(*(int **)(param_1 + 0xa24));
  local_48 = *pfVar3;
  fStack_44 = pfVar3[1];
  fStack_40 = pfVar3[2];
  pfVar3 = (float *)func_00520FC0();
  func_00115C70(&local_48,pfVar3,(float *)(param_1 + 0x368));
  iVar1 = *(int *)(param_1 + 0xaf4);
  uVar2 = func_0068C690(&local_48);
  func_004D80A4((float *)(iVar1 + 0x24),uVar2,fparam_0);
  *(float *)(iVar1 + 0x28) = fVar11;
  iVar1 = *(int *)(param_1 + 0x420);
  uVar2 = func_0068C690(&local_48);
  func_004D80A4((float *)(iVar1 + 0x24),uVar2,fparam_0);
  *(float *)(iVar1 + 0x28) = fVar11;
  return;
}

