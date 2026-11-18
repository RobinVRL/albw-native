#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern float func_0049216C(float *param_1,uint *param_2,float *param_3);
extern int func_004A2D1C(int param_1,float *param_2);
extern int func_004A8030(int param_1,int *param_2,uint param_3);
extern int func_004D7F70(float *param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int *DAT_00242ab8;
extern undefined4 *DAT_00242abc;
extern int *DAT_00242ac0;
extern undefined4 *DAT_00242ac4;
extern int *DAT_00242ac8;
extern undefined4 *DAT_00242acc;
extern int *DAT_00242ad0;
extern undefined4 *DAT_00242ad4;
extern int *DAT_00242ad8;
extern undefined4 *DAT_00242adc;
extern float DAT_00242ae0;
extern float DAT_00242ae4;
extern undefined4 *DAT_00242ae8;
extern uint DAT_00242aec;
extern undefined4 DAT_00242af0;
extern int *DAT_00242af4;
extern float DAT_00242af8;

// USA 00242844 <- EU 00242844 (Ghidra, non-matching)
// GLOBAL DAT_00242ab8 int *
// GLOBAL DAT_00242abc undefined4 *
// GLOBAL DAT_00242ac0 int *
// GLOBAL DAT_00242ac4 undefined4 *
// GLOBAL DAT_00242ac8 int *
// GLOBAL DAT_00242acc undefined4 *
// GLOBAL DAT_00242ad0 int *
// GLOBAL DAT_00242ad4 undefined4 *
// GLOBAL DAT_00242ad8 int *
// GLOBAL DAT_00242adc undefined4 *
// GLOBAL DAT_00242ae0 float
// GLOBAL DAT_00242ae4 float
// GLOBAL DAT_00242ae8 undefined4 *
// GLOBAL DAT_00242aec uint
// GLOBAL DAT_00242af0 undefined4
// GLOBAL DAT_00242af4 int *
// GLOBAL DAT_00242af8 float

void func_00242844(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint unaff_r6;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define local_a4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_a0 (*(float *)(albw_frame + 0x10))
  #define local_9c (*(undefined4 *)(albw_frame + 0x14))
  #define local_98 (*(undefined4 * *)(albw_frame + 0x18))
  #define local_94 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_90 (*(undefined4 *)(albw_frame + 0x20))
  #define local_8c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_88 (*(uint *)(albw_frame + 0x28))
  #define local_84 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_80 (*(undefined4 *)(albw_frame + 0x30))
  #define local_7c (*(undefined4 * *)(albw_frame + 0x34))
  #define local_78 (*(undefined4 * *)(albw_frame + 0x38))
  #define local_74 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_70 (*(undefined1 *)(albw_frame + 0x40))
  #define local_6f (*(undefined1 *)(albw_frame + 0x41))
  #define local_68 (*(undefined4 *)(albw_frame + 0x48))
  #define local_64 (*(float *)(albw_frame + 0x4c))
  #define uStack_60 (*(undefined4 *)(albw_frame + 0x50))
  #define local_5c (*(undefined4 *)(albw_frame + 0x54))
  #define local_58 (*(float *)(albw_frame + 0x58))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_50 (*(uint *)(albw_frame + 0x60))
  #define local_4c (*(undefined4 *)(albw_frame + 0x64))
  #define local_48 (*(undefined4 *)(albw_frame + 0x68))
  #define afStack_40 ((float *)(albw_frame + 0x70))
  iVar2 = func_00588BE4(param_1);
  puVar1 = DAT_00242abc;
  if (iVar2 == *DAT_00242ab8) {
    *(undefined4 *)(param_1 + 0x430) = *DAT_00242abc;
    *(undefined4 *)(param_1 + 0x434) = puVar1[1];
    *(undefined4 *)(param_1 + 0x438) = puVar1[2];
  }
  else {
    iVar2 = func_00588BE4(param_1);
    puVar1 = DAT_00242ac4;
    if (iVar2 == *DAT_00242ac0) {
      *(undefined4 *)(param_1 + 0x430) = *DAT_00242ac4;
      *(undefined4 *)(param_1 + 0x434) = puVar1[1];
      *(undefined4 *)(param_1 + 0x438) = puVar1[2];
    }
    else {
      iVar2 = func_00588BE4(param_1);
      puVar1 = DAT_00242acc;
      if (iVar2 == *DAT_00242ac8) {
        *(undefined4 *)(param_1 + 0x430) = *DAT_00242acc;
        *(undefined4 *)(param_1 + 0x434) = puVar1[1];
        *(undefined4 *)(param_1 + 0x438) = puVar1[2];
      }
      else {
        iVar2 = func_00588BE4(param_1);
        puVar1 = DAT_00242ad4;
        if (iVar2 == *DAT_00242ad0) {
          *(undefined4 *)(param_1 + 0x430) = *DAT_00242ad4;
          *(undefined4 *)(param_1 + 0x434) = puVar1[1];
          *(undefined4 *)(param_1 + 0x438) = puVar1[2];
        }
        else {
          iVar2 = func_00588BE4(param_1);
          puVar1 = DAT_00242adc;
          if (iVar2 != *DAT_00242ad8) {
            return;
          }
          *(undefined4 *)(param_1 + 0x430) = *DAT_00242adc;
          *(undefined4 *)(param_1 + 0x434) = puVar1[1];
          *(undefined4 *)(param_1 + 0x438) = puVar1[2];
        }
      }
    }
  }
  func_004D7F70((float *)(param_1 + 0x430),*(uint *)(param_1 + 1000));
  func_00115C54((float *)(param_1 + 0x430),(float *)(param_1 + 0x430),(float *)(param_1 + 0x3d0));
  local_5c = *(undefined4 *)(param_1 + 0x430);
  uStack_54 = *(undefined4 *)(param_1 + 0x438);
  local_58 = *(float *)(param_1 + 0x434) - DAT_00242ae0;
  local_68 = *(undefined4 *)(param_1 + 0x430);
  uStack_60 = *(undefined4 *)(param_1 + 0x438);
  local_64 = *(float *)(param_1 + 0x434) - DAT_00242ae4;
  local_a4 = *DAT_00242ae8;
  local_a0 = ALBW_AS_F32(DAT_00242ae8[1]);
  local_9c = DAT_00242ae8[2];
  uStack_88 = DAT_00242aec | unaff_r6 & 0xffff0000;
  local_94 = 0;
  local_90 = 0;
  local_8c = 0;
  local_80 = 0;
  local_74 = DAT_00242af0;
  local_70 = 0;
  local_78 = &local_5c;
  local_7c = &local_68;
  local_6f = 1;
  local_84 = 0x82;
  local_98 = &local_a4;
  iVar2 = func_004A8030(*DAT_00242af4,(int *)&local_98,0xff);
  if (iVar2 != 0) {
    *(float *)(param_1 + 0x434) = local_64 + local_a0 + DAT_00242af8;
  }
  local_4c = *(undefined4 *)(param_1 + 1000);
  local_50 = 0;
  local_48 = 0;
  func_0049216C(afStack_40,&local_50,(float *)(param_1 + 0x430));
  iVar2 = *(int *)(param_1 + 0x428);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == *(int *)(param_1 + 0x42c))) {
    func_004A2D1C(iVar2,afStack_40);
  }
  return;
}

