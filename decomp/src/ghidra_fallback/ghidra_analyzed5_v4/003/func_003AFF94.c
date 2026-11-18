#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_0026FC20(int param_1,int param_2,int *param_3,undefined4 *param_4);
extern int func_004A8BFC(int param_1,int param_2,uint param_3);
extern int func_004EABB8(int param_1,int *param_2,undefined4 *param_3);
extern float DAT_003b0138;
extern float DAT_003b013c;
extern undefined4 DAT_003b0140;
extern int *DAT_003b0144;
extern int *DAT_003b0148;
extern int *DAT_003b014c;
extern int DAT_003b0150;
extern char s_SE_PL_Kandelaar_SWING_003b0170[];
extern char s_SE_PL_Kandelaar_SWING_Lv2_003b0154[];

// USA 003AFF94 <- EU 003AFF70 (Ghidra, non-matching)
// GLOBAL DAT_003b0138 float
// GLOBAL DAT_003b013c float
// GLOBAL DAT_003b0140 undefined4
// GLOBAL DAT_003b0144 int *
// GLOBAL DAT_003b0148 int *
// GLOBAL DAT_003b014c int *
// GLOBAL DAT_003b0150 int
// GLOBAL s_SE_PL_Kandelaar_SWING_003b0170 string
// GLOBAL s_SE_PL_Kandelaar_SWING_Lv2_003b0154 string

undefined4 func_003AFF94(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint in_r12;
  float fVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define local_a4 ((uint *)(albw_frame + 0xc))
  #define local_9c (*(undefined4 * *)(albw_frame + 0x14))
  #define local_98 (*(undefined4 *)(albw_frame + 0x18))
  #define local_94 (*(float *)(albw_frame + 0x1c))
  #define fStack_90 (*(float *)(albw_frame + 0x20))
  #define uStack_8c (*(undefined4 *)(albw_frame + 0x24))
  #define fStack_88 (*(float *)(albw_frame + 0x28))
  #define local_84 (*(uint *)(albw_frame + 0x2c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x60))
  #define local_4c (*(undefined1 *)(albw_frame + 0x64))
  #define local_44 ((int *)(albw_frame + 0x6c))
  #define local_3c (*(undefined4 *)(albw_frame + 0x74))
  #define local_38 (*(undefined4 *)(albw_frame + 0x78))
  #define local_34 (*(undefined4 *)(albw_frame + 0x7c))
  #define local_30 (*(int *)(albw_frame + 0x80))
  #define local_2c (*(char * *)(albw_frame + 0x84))
  local_a4[1] = 3;
  local_9c = &local_98;
  local_50 = 10;
  local_4c = 0;
  local_98 = 0;
  local_a4[0] = 1;
  local_84 = in_r12 | 0xff;
  local_94 = DAT_003b013c;
  fStack_90 = DAT_003b0138;
  uStack_8c = DAT_003b0140;
  fStack_88 = DAT_003b0138;
  fVar4 = DAT_003b013c;
  fVar5 = DAT_003b0138;
  func_0016898C(*(int *)(param_1 + 0x44),local_a4);
  iVar1 = *(int *)(param_1 + 0x44);
  uVar2 = 0;
  if (0 < *(int *)(iVar1 + 0xc)) {
    do {
      iVar3 = *(int *)(iVar1 + 0x14);
      if (uVar2 < *(uint *)(iVar1 + 0xc)) {
        iVar3 = iVar3 + uVar2 * 0x28;
      }
      if (fVar4 <= fVar5) {
        *(float *)(iVar3 + 0xc) = fVar4;
        *(float *)(iVar3 + 8) = fVar4;
      }
      else {
        *(float *)(iVar3 + 0xc) = *(float *)(iVar3 + 0x14);
        *(float *)(iVar3 + 8) = *(float *)(iVar3 + 0x14);
      }
      uVar2 = uVar2 + 1;
      *(float *)(iVar3 + 0x10) = fVar5;
      *(undefined4 *)(iVar3 + 0x18) = 0;
      *(undefined1 *)(iVar3 + 0x26) = 1;
      *(undefined1 *)(iVar3 + 0x25) = 1;
    } while ((int)uVar2 < *(int *)(iVar1 + 0xc));
  }
  iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x8d4) + 0x24) + 0x14) +
          *(int *)(*(int *)(param_1 + 4) + 0x8f8) * 0x30;
  local_3c = *(undefined4 *)(iVar1 + 0xc);
  local_38 = *(undefined4 *)(iVar1 + 0x1c);
  local_34 = *(undefined4 *)(iVar1 + 0x2c);
  local_44[0] = *(int *)(*(int *)(param_1 + 4) + 0x2cc);
  func_0026FC20(*(int *)(*DAT_003b0144 + 0xf9c),9,local_44,&local_3c);
  func_004A8BFC(*DAT_003b0148,param_1 + 0xd8,3);
  local_30 = DAT_003b0150;
  if (*(char *)(param_1 + 0xc) < '\x02') {
    local_2c = s_SE_PL_Kandelaar_SWING_003b0170;
    return func_004EABB8(*DAT_003b014c,&local_30,(undefined4 *)0x0);
  }
  local_2c = s_SE_PL_Kandelaar_SWING_Lv2_003b0154;
  return func_004EABB8(*DAT_003b014c,&local_30,(undefined4 *)0x0);
}

