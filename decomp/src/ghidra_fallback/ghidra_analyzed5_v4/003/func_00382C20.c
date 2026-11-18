#include "ghidra_types.h"

extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_004CEAF0(int param_1);
extern int func_004D7F70(float *param_1,uint param_2);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_004E2880(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4, undefined2 param_5,float fparam_0);
extern float *DAT_00382ddc;
extern float *DAT_00382de0;
extern float DAT_00382de4;
extern int *DAT_00382de8;

// USA 00382C20 <- EU 00382BFC (Ghidra, non-matching)
// GLOBAL DAT_00382ddc float *
// GLOBAL DAT_00382de0 float *
// GLOBAL DAT_00382de4 float
// GLOBAL DAT_00382de8 int *

void func_00382C20(int param_1)

{
  int *piVar1;
  int iVar2;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_64 (*(float *)(albw_frame + 0xc))
  #define local_60 (*(float *)(albw_frame + 0x10))
  #define local_5c (*(float *)(albw_frame + 0x14))
  #define local_58 (*(float *)(albw_frame + 0x18))
  #define local_54 (*(float *)(albw_frame + 0x1c))
  #define local_50 (*(float *)(albw_frame + 0x20))
  #define afStack_48 ((float *)(albw_frame + 0x28))
  #define local_3c (*(float *)(albw_frame + 0x34))
  #define local_2c (*(float *)(albw_frame + 0x44))
  #define local_1c (*(float *)(albw_frame + 0x54))
  iVar2 = *(int *)(param_1 + 0x34);
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  func_001151EC((undefined4 *)(iVar2 + 0x80),
                (undefined4 *)
                (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x8d4) + 0x24) + 0x14) +
                *(int *)(*(int *)(param_1 + 4) + 0x8f8) * 0x30));
  func_004CEAF0(*(int *)(param_1 + 0x34));
  if (*(char *)(param_1 + 0x3d) != '\0') {
    func_004D8AEC(afStack_48,*(uint *)(*(int *)(param_1 + 4) + 1000),
                  (float *)(*(int *)(param_1 + 4) + 0x3d0));
    local_64 = *DAT_00382ddc;
    local_60 = DAT_00382ddc[1];
    local_5c = DAT_00382ddc[2];
    func_004D7F70(&local_64,*(uint *)(*(int *)(param_1 + 4) + 1000));
    local_3c = local_3c + local_64 + *DAT_00382de0;
    local_2c = local_2c + local_60 + DAT_00382de0[1];
    local_1c = local_1c + local_5c + DAT_00382de0[2];
    iVar2 = *(int *)(param_1 + 0x38);
    *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
    func_001151EC((undefined4 *)(iVar2 + 0x80),afStack_48);
    func_004CEAF0(*(int *)(param_1 + 0x38));
    if (*(char *)(param_1 + 0x3c) != '\0') {
      *(undefined1 *)(param_1 + 0x3d) = 0;
      *(undefined1 *)(param_1 + 0x3c) = 0;
      local_58 = local_3c;
      local_50 = local_1c;
      local_54 = *(float *)(*(int *)(param_1 + 4) + 0x3d4) + DAT_00382ddc[1];
      fparam_0 = DAT_00382de4;
      func_004E2880(&local_58,*(undefined4 *)(*(int *)(param_1 + 4) + 1000),4,
                    *(undefined4 *)(*(int *)(param_1 + 4) + 0x2cc),(short)*(char *)(param_1 + 0xc),
                    DAT_00382de4);
      piVar1 = DAT_00382de8;
      if ('\x01' < *(char *)(param_1 + 0xc)) {
        func_004E2880(&local_58,*(int *)(*(int *)(param_1 + 4) + 1000) + *DAT_00382de8,4,
                      *(undefined4 *)(*(int *)(param_1 + 4) + 0x2cc),(short)*(char *)(param_1 + 0xc)
                      ,fparam_0);
        func_004E2880(&local_58,*(int *)(*(int *)(param_1 + 4) + 1000) - *piVar1,4,
                      *(undefined4 *)(*(int *)(param_1 + 4) + 0x2cc),(short)*(char *)(param_1 + 0xc)
                      ,fparam_0);
      }
    }
  }
  return;
}

