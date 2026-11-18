#include "ghidra_types.h"

extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_001512E8(int *param_1);
extern int func_0015133C(int param_1,undefined4 *param_2);
extern int func_004356B4(int *param_1);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_004E1EB4(int param_1,float *param_2);
extern float DAT_004e2180;

// USA 004E2030 <- EU 004E2008 (Ghidra, non-matching)
// GLOBAL DAT_004e2180 float

undefined4 func_004E2030(int param_1)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 (*(undefined4 *)(albw_frame + 0x0))
  #define local_6c (*(undefined4 *)(albw_frame + 0x4))
  #define local_68 (*(undefined4 *)(albw_frame + 0x8))
  #define local_64 (*(float *)(albw_frame + 0xc))
  #define local_60 (*(undefined4 *)(albw_frame + 0x10))
  #define local_5c (*(undefined4 *)(albw_frame + 0x14))
  #define local_58 (*(undefined4 *)(albw_frame + 0x18))
  #define local_54 (*(float *)(albw_frame + 0x1c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x20))
  #define local_4c (*(undefined4 *)(albw_frame + 0x24))
  #define local_48 (*(undefined4 *)(albw_frame + 0x28))
  #define local_44 (*(float *)(albw_frame + 0x2c))
  #define afStack_40 ((float *)(albw_frame + 0x30))
  #define local_1c (*(float *)(albw_frame + 0x54))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x58))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x5c))
  local_1c = *(float *)(param_1 + 0x3d0);
  uStack_18 = *(undefined4 *)(param_1 + 0x3d4);
  uStack_14 = *(undefined4 *)(param_1 + 0x3d8);
  piVar2 = (int *)(param_1 + 0x454);
  iVar1 = *(int *)(param_1 + 0x454);
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar1 + 0x80),*(uint *)(param_1 + 1000),&local_1c);
  fVar3 = *(float *)(param_1 + 0x508);
  iVar1 = *piVar2;
  local_70 = *(undefined4 *)(iVar1 + 0x80);
  local_6c = *(undefined4 *)(iVar1 + 0x84);
  local_68 = *(undefined4 *)(iVar1 + 0x88);
  local_64 = *(float *)(iVar1 + 0x84) * DAT_004e2180 + *(float *)(iVar1 + 0x88) * fVar3 +
             *(float *)(iVar1 + 0x8c) + *(float *)(iVar1 + 0x80) * DAT_004e2180;
  local_60 = *(undefined4 *)(iVar1 + 0x90);
  local_5c = *(undefined4 *)(iVar1 + 0x94);
  local_58 = *(undefined4 *)(iVar1 + 0x98);
  local_54 = *(float *)(iVar1 + 0x94) * DAT_004e2180 + *(float *)(iVar1 + 0x98) * fVar3 +
             *(float *)(iVar1 + 0x9c) + *(float *)(iVar1 + 0x90) * DAT_004e2180;
  local_50 = *(undefined4 *)(iVar1 + 0xa0);
  local_4c = *(undefined4 *)(iVar1 + 0xa4);
  local_48 = *(undefined4 *)(iVar1 + 0xa8);
  local_44 = *(float *)(iVar1 + 0xa4) * DAT_004e2180 + *(float *)(iVar1 + 0xa8) * fVar3 +
             *(float *)(iVar1 + 0xac) + *(float *)(iVar1 + 0xa0) * DAT_004e2180;
  iVar1 = *piVar2;
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  func_001151EC((undefined4 *)(iVar1 + 0x80),&local_70);
  func_004E1EB4(param_1,&local_1c);
  func_004356B4(*(int **)(param_1 + 0x45c));
  func_004CEAF0(*piVar2);
  func_00491624(afStack_40,0,*(uint *)(param_1 + 1000),0);
  func_0015133C(*(int *)(param_1 + 0x458),afStack_40);
  return func_001512E8(*(int **)(param_1 + 0x458));
}

