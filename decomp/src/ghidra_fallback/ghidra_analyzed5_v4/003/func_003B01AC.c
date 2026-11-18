#include "ghidra_types.h"

extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00324610(int *param_1,int *param_2,float fparam_0,float fparam_1);
extern int func_003840A0(int param_1,int param_2);
extern int func_004356B4(int *param_1);
extern int func_004905E0(float fparam_0);
extern int func_004CEAF0(int param_1);
extern int func_004D7F70(float *param_1,uint param_2);
extern float DAT_003b04c0;
extern float DAT_003b04c4;
extern float DAT_003b04c8;
extern float DAT_003b04cc;
extern float DAT_003b04d0;
extern float DAT_003b04d4;
extern float DAT_003b04d8;
extern undefined4 DAT_003b04dc;

// USA 003B01AC <- EU 003B0188 (Ghidra, non-matching)
// GLOBAL DAT_003b04c0 float
// GLOBAL DAT_003b04c4 float
// GLOBAL DAT_003b04c8 float
// GLOBAL DAT_003b04cc float
// GLOBAL DAT_003b04d0 float
// GLOBAL DAT_003b04d4 float
// GLOBAL DAT_003b04d8 float
// GLOBAL DAT_003b04dc undefined4

undefined4 func_003B01AC(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  float fVar8;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define local_2c (*(float *)(albw_frame + 0x4))
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define fStack_20 (*(float *)(albw_frame + 0x10))
  #define fStack_1c (*(float *)(albw_frame + 0x14))
  #define local_18 ((int *)(albw_frame + 0x18))
  puVar3 = (uint *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x24) + 0xc) +
                   *(int *)(param_1 + 0x4c) * 0x40);
  *puVar3 = *puVar3 | 0x10;
  *(int *)(*(int *)(param_1 + 0x40) + 0x16c) = param_1 + 0x10;
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x60);
  iVar4 = *(int *)(param_1 + 4);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    puVar7 = (undefined4 *)
             (*(int *)(*(int *)(*(int *)(iVar4 + 0x8d4) + 0x24) + 0x14) +
             *(int *)(iVar4 + 0x8f8) * 0x30);
  }
  else {
    puVar7 = (undefined4 *)
             (*(int *)(*(int *)(*(int *)(iVar4 + 0x8d4) + 0x24) + 0x14) +
             *(int *)(iVar4 + 0x8ec) * 0x30);
  }
  iVar4 = *(int *)(param_1 + 0x40);
  *(uint *)(iVar4 + 0x164) = *(uint *)(iVar4 + 0x164) | 0x40000000;
  func_001151EC((undefined4 *)(iVar4 + 0x80),puVar7);
  func_004CEAF0(*(int *)(param_1 + 0x40));
  if (*(char *)(*(int *)(param_1 + 0x40) + 0x30) != '\0') {
    func_00115C70(&local_24,(float *)(param_1 + 0x58),(float *)(param_1 + 100));
    local_30 = local_24;
    local_2c = fStack_20;
    local_28 = fStack_1c;
    func_004D7F70(&local_30,-*(int *)(*(int *)(param_1 + 4) + 1000));
    iVar4 = *(int *)(param_1 + 4) + 0x8c0;
    bVar2 = func_003840A0(iVar4,10);
    if ((((bVar2) || (bVar2 = func_003840A0(iVar4,0xb), bVar2)) ||
        (bVar2 = func_003840A0(iVar4,0xc), bVar2)) &&
       ((fVar9 = *(float *)(*(int *)(param_1 + 4) + 0x3dc),
        fVar8 = *(float *)(*(int *)(param_1 + 4) + 0x3e4),
        fVar8 = SQRT(*(float *)(param_1 + 0x70) * *(float *)(param_1 + 0x70) +
                     *(float *)(param_1 + 0x74) * *(float *)(param_1 + 0x74) +
                     *(float *)(param_1 + 0x78) * *(float *)(param_1 + 0x78)) -
                SQRT(fVar9 * fVar9 + fVar8 * fVar8), DAT_003b04c4 <= fVar8 &&
        (fVar8 <= DAT_003b04c0)))) {
      local_2c = local_2c * DAT_003b04c8;
    }
    fVar8 = local_2c + DAT_003b04cc;
    if (fVar8 == DAT_003b04d0 && local_28 == DAT_003b04d0) {
      local_18[0] = 0;
    }
    else if (fVar8 < DAT_003b04d0) {
      if (local_28 < DAT_003b04d0) {
        if (local_28 < fVar8) {
          local_18[0] = func_004905E0(fVar8 / local_28);
          local_18[0] = -0x40000000 - local_18[0];
        }
        else {
          local_18[0] = func_004905E0(local_28 / fVar8);
          local_18[0] = local_18[0] + -0x80000000;
        }
      }
      else {
        fVar8 = -fVar8;
        if (fVar8 < local_28) {
          local_18[0] = func_004905E0(fVar8 / local_28);
          local_18[0] = local_18[0] + 0x40000000;
        }
        else {
          local_18[0] = func_004905E0(local_28 / fVar8);
          local_18[0] = -0x80000000 - local_18[0];
        }
      }
    }
    else if (local_28 < DAT_003b04d0) {
      fVar9 = -local_28;
      if (fVar8 < fVar9) {
        local_18[0] = func_004905E0(fVar8 / fVar9);
        local_18[0] = local_18[0] + -0x40000000;
      }
      else {
        local_18[0] = func_004905E0(fVar9 / fVar8);
        local_18[0] = -local_18[0];
      }
    }
    else if (fVar8 < local_28) {
      local_18[0] = func_004905E0(fVar8 / local_28);
      local_18[0] = 0x40000000 - local_18[0];
    }
    else {
      local_18[0] = func_004905E0(local_28 / fVar8);
    }
    func_00324610((int *)(param_1 + 0x50),local_18,DAT_003b04d8,DAT_003b04d4);
  }
  uVar1 = DAT_003b04dc;
  iVar4 = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(iVar4 + 0x3dc);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(iVar4 + 0x3e0);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(iVar4 + 0x3e4);
  uVar6 = puVar7[0xb];
  uVar5 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x3d4);
  *(undefined4 *)(param_1 + 0x80) = puVar7[3];
  *(undefined4 *)(param_1 + 0x84) = uVar5;
  *(undefined4 *)(param_1 + 0x88) = uVar6;
  *(undefined4 *)(param_1 + 0xd4) = uVar1;
  return func_004356B4((int *)(param_1 + 0x7c));
}

