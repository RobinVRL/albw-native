#include "ghidra_types.h"

extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_003E6DD4(int param_1,float *param_2);
extern int func_00491D78(float *param_1,float *param_2,float *param_3,float *param_4);
extern float DAT_004a3108;
extern undefined4 DAT_004a310c;

// USA 004A3018 <- EU 004A2FF0 (Ghidra, non-matching)
// GLOBAL DAT_004a3108 float
// GLOBAL DAT_004a310c undefined4

void func_004A3018(int param_1,undefined4 *param_2,float *param_3)

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
  #define local_64 (*(float *)(albw_frame + 0x4c))
  #define uStack_60 (*(undefined4 *)(albw_frame + 0x50))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x54))
  #define local_58 (*(float *)(albw_frame + 0x58))
  #define local_54 (*(float *)(albw_frame + 0x5c))
  #define local_50 (*(float *)(albw_frame + 0x60))
  #define afStack_48 ((float *)(albw_frame + 0x68))
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    local_58 = *(float *)(iVar1 + 0x40) * *param_3;
    local_54 = *(float *)(iVar1 + 0x44) * param_3[1];
    local_50 = *(float *)(iVar1 + 0x48) * param_3[2];
    func_00115D70(&local_64,param_3,*(float *)(iVar1 + 0x3c));
    local_74 = local_64;
    uStack_70 = uStack_60;
    uStack_6c = uStack_5c;
    func_00491D78(afStack_48,&local_74,(float *)(iVar1 + 0x4c),&local_58);
    local_a8 = DAT_004a3108;
    local_a4 = DAT_004a310c;
    local_a0 = DAT_004a310c;
    local_98 = DAT_004a310c;
    fStack_94 = DAT_004a3108;
    local_90 = DAT_004a310c;
    local_88 = DAT_004a310c;
    local_84 = DAT_004a310c;
    fStack_80 = DAT_004a3108;
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

