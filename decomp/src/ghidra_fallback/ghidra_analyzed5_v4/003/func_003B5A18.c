#include "ghidra_types.h"

extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00324610(int *param_1,int *param_2,float fparam_0,float fparam_1);
extern int func_004905E0(float fparam_0);
extern int func_004CEAF0(int param_1);
extern int func_004D7F70(float *param_1,uint param_2);
extern int func_0053ECF8(int param_1);
extern int func_0053ED74(int param_1);
extern float DAT_003b5cf8;
extern float DAT_003b5cfc;
extern float DAT_003b5d00;
extern float DAT_003b5d04;
extern float DAT_003b5d08;
extern float DAT_003b5d0c;
extern float DAT_003b5d10;

// USA 003B5A18 <- EU 003B59F4 (Ghidra, non-matching)
// GLOBAL DAT_003b5cf8 float
// GLOBAL DAT_003b5cfc float
// GLOBAL DAT_003b5d00 float
// GLOBAL DAT_003b5d04 float
// GLOBAL DAT_003b5d08 float
// GLOBAL DAT_003b5d0c float
// GLOBAL DAT_003b5d10 float

void func_003B5A18(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  #define local_1c (*(float *)(albw_frame + 0x14))
  #define fStack_18 (*(float *)(albw_frame + 0x18))
  #define fStack_14 (*(float *)(albw_frame + 0x1c))
  #define local_10 (*(int *)(albw_frame + 0x20))
  if ((*(char *)(*(int *)(param_1 + 4) + 0x30) == '\0') || (*(char *)(param_1 + 0x18) != '\0')) {
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  else {
    func_00169A80(*(int **)(param_1 + 0x28),param_2,param_3,param_4);
    func_00168E9C(*(int **)(param_1 + 0x28),*(int *)(param_1 + 4),(int *)0x0);
  }
  puVar1 = (uint *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x24) + 0xc) +
                   *(int *)(param_1 + 0x30) * 0x40);
  *puVar1 = *puVar1 | 0x10;
  *(int *)(*(int *)(param_1 + 4) + 0x16c) = param_1 + 0x1c;
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x44);
  if (*(char *)(param_1 + 0x2c) == '\0') {
    puVar2 = (undefined4 *)func_0053ECF8(*(int *)(param_2 + 0x600));
  }
  else {
    puVar2 = (undefined4 *)func_0053ED74(*(int *)(param_2 + 0x600));
  }
  iVar3 = *(int *)(param_1 + 4);
  *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
  func_001151EC((undefined4 *)(iVar3 + 0x80),puVar2);
  func_004CEAF0(*(int *)(param_1 + 4));
  if (*(char *)(*(int *)(param_1 + 4) + 0x30) != '\0') {
    func_00115C70(&local_1c,(float *)(param_1 + 0x3c),(float *)(param_1 + 0x48));
    local_28 = local_1c;
    local_24 = fStack_18;
    local_20 = fStack_14;
    func_004D7F70(&local_28,-*(int *)(param_2 + 1000));
    if (((*(short *)(*(int *)(param_2 + 0x614) + 0x42) == 1) &&
        (fVar4 = SQRT(*(float *)(param_1 + 0x54) * *(float *)(param_1 + 0x54) +
                      *(float *)(param_1 + 0x58) * *(float *)(param_1 + 0x58) +
                      *(float *)(param_1 + 0x5c) * *(float *)(param_1 + 0x5c)) -
                 SQRT(*(float *)(param_2 + 0x3dc) * *(float *)(param_2 + 0x3dc) +
                      *(float *)(param_2 + 0x3e0) * *(float *)(param_2 + 0x3e0) +
                      *(float *)(param_2 + 0x3e4) * *(float *)(param_2 + 0x3e4)),
        DAT_003b5cfc <= fVar4)) && (fVar4 <= DAT_003b5cf8)) {
      local_24 = local_24 * DAT_003b5d00;
    }
    fVar4 = local_24 + DAT_003b5d04;
    if (fVar4 == DAT_003b5d08 && local_20 == DAT_003b5d08) {
      local_10 = 0;
    }
    else if (fVar4 < DAT_003b5d08) {
      if (local_20 < DAT_003b5d08) {
        if (local_20 < fVar4) {
          local_10 = func_004905E0(fVar4 / local_20);
          local_10 = -0x40000000 - local_10;
        }
        else {
          local_10 = func_004905E0(local_20 / fVar4);
          local_10 = local_10 + -0x80000000;
        }
      }
      else {
        fVar4 = -fVar4;
        if (fVar4 < local_20) {
          local_10 = func_004905E0(fVar4 / local_20);
          local_10 = local_10 + 0x40000000;
        }
        else {
          local_10 = func_004905E0(local_20 / fVar4);
          local_10 = -0x80000000 - local_10;
        }
      }
    }
    else if (local_20 < DAT_003b5d08) {
      fVar5 = -local_20;
      if (fVar4 < fVar5) {
        local_10 = func_004905E0(fVar4 / fVar5);
        local_10 = local_10 + -0x40000000;
      }
      else {
        local_10 = func_004905E0(fVar5 / fVar4);
        local_10 = -local_10;
      }
    }
    else if (fVar4 < local_20) {
      local_10 = func_004905E0(fVar4 / local_20);
      local_10 = 0x40000000 - local_10;
    }
    else {
      local_10 = func_004905E0(local_20 / fVar4);
    }
    func_00324610((int *)(param_1 + 0x34),&local_10,DAT_003b5d10,DAT_003b5d0c);
  }
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x3dc);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x3e0);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x3e4);
  return;
}

