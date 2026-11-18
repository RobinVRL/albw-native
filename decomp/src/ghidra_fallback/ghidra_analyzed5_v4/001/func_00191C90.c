#include "ghidra_types.h"

extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0048B5D4(float *param_1,float *param_2,uint param_3);
extern int func_00491404(float *param_1,float *param_2);
extern int func_00492078(float *param_1,float *param_2,float *param_3);
extern int func_004A1CDC(int param_1);
extern int func_004CEAF0(int param_1);
extern float DAT_00191eb4;
extern undefined4 *DAT_00191eb8;
extern float *DAT_00191ebc;
extern undefined4 *DAT_00191ec0;

// USA 00191C90 <- EU 00191C90 (Ghidra, non-matching)
// GLOBAL DAT_00191eb4 float
// GLOBAL DAT_00191eb8 undefined4 *
// GLOBAL DAT_00191ebc float *
// GLOBAL DAT_00191ec0 undefined4 *

undefined4 func_00191C90(int param_1)

{
  int iVar1;
  undefined4 extraout_r1;
  uint uVar2;
  int *in_r3;
  float fVar3;
  undefined4 *puVar4;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define local_c0 (*(float *)(albw_frame + 0x0))
  #define puStack_bc (*(undefined4 * *)(albw_frame + 0x4))
  #define local_b8 (*(undefined4 * *)(albw_frame + 0x8))
  #define local_b4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_b0 (*(undefined4 * *)(albw_frame + 0x10))
  #define local_ac (*(float *)(albw_frame + 0x14))
  #define local_a8 (*(undefined4 * *)(albw_frame + 0x18))
  #define local_a4 (*(float *)(albw_frame + 0x1c))
  #define local_a0 (*(undefined4 * *)(albw_frame + 0x20))
  #define local_9c (*(undefined4 * *)(albw_frame + 0x24))
  #define local_98 (*(float *)(albw_frame + 0x28))
  #define local_94 (*(undefined4 *)(albw_frame + 0x2c))
  #define afStack_90 ((float *)(albw_frame + 0x30))
  #define local_6c (*(undefined4 *)(albw_frame + 0x54))
  #define local_68 ((undefined1 *)(albw_frame + 0x58))
  #define afStack_30 ((float *)(albw_frame + 0x90))
  local_c0 = DAT_00191eb4;
  puStack_bc = DAT_00191eb8;
  local_b8 = DAT_00191eb8;
  local_b0 = DAT_00191eb8;
  local_ac = DAT_00191eb4;
  local_a8 = DAT_00191eb8;
  local_a0 = DAT_00191eb8;
  local_9c = DAT_00191eb8;
  local_98 = DAT_00191eb4;
  local_b4 = *(undefined4 *)(param_1 + 0x3d0);
  local_a4 = *(float *)(param_1 + 0x3d4);
  local_94 = *(undefined4 *)(param_1 + 0x3d8);
  fVar3 = DAT_00191eb4;
  puVar4 = DAT_00191eb8;
  func_0048B5D4(afStack_30,DAT_00191ebc,(uint)*(byte *)(param_1 + 0x428) << 0x1e);
  func_00491404(afStack_90,afStack_30);
  func_00492078((float *)local_68,&local_c0,afStack_90);
  iVar1 = *(int *)(param_1 + 0x41c);
  uVar2 = *(uint *)(iVar1 + 0x164) | 0x40000000;
  *(uint *)(iVar1 + 0x164) = uVar2;
  func_001151EC((undefined4 *)(iVar1 + 0x80),(undefined4 *)local_68);
  func_00169A80(*(int **)(param_1 + 0x420),extraout_r1,uVar2,in_r3);
  func_00168E9C(*(int **)(param_1 + 0x420),*(int *)(param_1 + 0x41c),(int *)0x0);
  if (*(char *)(param_1 + 0x424) == '\0') {
    if ((*(char *)(param_1 + 0x425) == '\0') && (*(int *)(param_1 + 0x418) < 0x15)) {
      *(float *)(*(int *)(*(int *)(param_1 + 0x420) + 0x14) + 0x10) = fVar3;
      *(undefined1 *)(param_1 + 0x425) = 1;
    }
    if ((*(char *)(param_1 + 0x426) == '\0') && (*(int *)(param_1 + 0x418) < 0xb)) {
      if (*(int *)(param_1 + 0x344) != 0) {
        func_004A1CDC(*(int *)(param_1 + 0x344));
      }
      *(undefined1 *)(param_1 + 0x426) = 1;
    }
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x420) + 0x14);
    if (*(char *)(iVar1 + 0x1c) == '\0') {
      if (*(float *)(iVar1 + 0x10) < ALBW_AS_F32(puVar4)) {
        if (ALBW_AS_F32(puVar4) < *(float *)(iVar1 + 8)) goto LAB_00191ea0;
      }
      else if (*(float *)(iVar1 + 8) != *(float *)(iVar1 + 0x14)) goto LAB_00191ea0;
      local_b8 = &local_b4;
      puStack_bc = (undefined4 *)0x3;
      local_6c = 10;
      local_68[0] = 0;
      local_c0 = 1.4013e-45;
      local_b4 = 1;
      local_a8 = DAT_00191ec0;
      local_a0 = (undefined4 *)((uint)in_r3 | 0xff);
      local_b0 = puVar4;
      local_ac = fVar3;
      local_a4 = fVar3;
      func_0016898C(*(int *)(param_1 + 0x420),(uint *)&local_c0);
      iVar1 = *(int *)(*(int *)(param_1 + 0x420) + 0x14);
      if (*(float *)(iVar1 + 8) != ALBW_AS_F32(puVar4)) {
        *(undefined4 **)(iVar1 + 8) = puVar4;
        *(undefined1 *)(iVar1 + 0x26) = 1;
      }
      *(undefined4 **)(*(int *)(*(int *)(param_1 + 0x420) + 0x14) + 0x10) = puVar4;
      *(undefined1 *)(param_1 + 0x424) = 0;
    }
  }
LAB_00191ea0:
  return func_004CEAF0(*(int *)(param_1 + 0x41c));
}

