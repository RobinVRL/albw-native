#include "ghidra_types.h"

extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_003E6DD4(int param_1,float *param_2);
extern int func_00491D78(float *param_1,float *param_2,float *param_3,float *param_4);
extern float DAT_004a320c;
extern undefined4 DAT_004a3210;

// USA 004A3138 <- EU 004A3110 (Ghidra, non-matching)
// GLOBAL DAT_004a320c float
// GLOBAL DAT_004a3210 undefined4

void func_004A3138(int param_1,undefined4 *param_2,float fparam_0)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define local_a8 (*(float *)(albw_frame + 0x8))
  #define local_a4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_a0 (*(undefined4 *)(albw_frame + 0x10))
  #define local_9c (*(undefined4 *)(albw_frame + 0x14))
  #define local_98 (*(undefined4 *)(albw_frame + 0x18))
  #define fStack_94 (*(float *)(albw_frame + 0x1c))
  #define local_90 (*(undefined4 *)(albw_frame + 0x20))
  #define local_8c (*(undefined4 *)(albw_frame + 0x24))
  #define local_88 (*(undefined4 *)(albw_frame + 0x28))
  #define local_84 (*(undefined4 *)(albw_frame + 0x2c))
  #define fStack_80 (*(float *)(albw_frame + 0x30))
  #define local_7c (*(undefined4 *)(albw_frame + 0x34))
  #define local_74 (*(float *)(albw_frame + 0x3c))
  #define uStack_70 (*(undefined4 *)(albw_frame + 0x40))
  #define uStack_6c (*(undefined4 *)(albw_frame + 0x44))
  #define local_60 (*(float *)(albw_frame + 0x50))
  #define local_5c (*(float *)(albw_frame + 0x54))
  #define local_58 (*(float *)(albw_frame + 0x58))
  #define local_54 (*(float *)(albw_frame + 0x5c))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x60))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x64))
  #define afStack_48 ((float *)(albw_frame + 0x68))
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    local_60 = *(float *)(iVar1 + 0x3c) * fparam_0;
    local_5c = local_60;
    local_58 = local_60;
    func_00115D70(&local_54,(float *)(iVar1 + 0x40),fparam_0);
    local_74 = local_54;
    uStack_70 = uStack_50;
    uStack_6c = uStack_4c;
    func_00491D78(afStack_48,&local_60,(float *)(iVar1 + 0x4c),&local_74);
    local_a8 = DAT_004a320c;
    local_a4 = DAT_004a3210;
    local_a0 = DAT_004a3210;
    local_98 = DAT_004a3210;
    fStack_94 = DAT_004a320c;
    local_90 = DAT_004a3210;
    local_88 = DAT_004a3210;
    local_84 = DAT_004a3210;
    fStack_80 = DAT_004a320c;
    local_9c = *param_2;
    local_8c = param_2[1];
    local_7c = param_2[2];
    func_001157FC(&local_a8,&local_a8,afStack_48);
    iVar1 = *(int *)(param_1 + 0x20);
    if (((iVar1 != 0) && (*(int *)(param_1 + 0x24) == *(int *)(iVar1 + 0xc))) &&
       (0 < *(int *)(iVar1 + 4))) {
      func_003E6DD4(iVar1,&local_a8);
    }
  }
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xfffffffe;
  return;
}

