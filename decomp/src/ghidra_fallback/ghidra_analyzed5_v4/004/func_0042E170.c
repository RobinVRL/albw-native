#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0042A260(int param_1,int param_2,int param_3);
extern int func_0042CBE4(int param_1,float *param_2,int param_3,float fparam_0);
extern int func_00435B54(undefined4 *param_1,undefined4 *param_2);
extern float DAT_0042e2b8;
extern undefined4 DAT_0042e2bc;
extern float DAT_0042e2c0;
extern undefined4 DAT_0042e2c4;

// USA 0042E170 <- EU 0042E150 (Ghidra, non-matching)
// GLOBAL DAT_0042e2b8 float
// GLOBAL DAT_0042e2bc undefined4
// GLOBAL DAT_0042e2c0 float
// GLOBAL DAT_0042e2c4 undefined4

undefined4 func_0042E170(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  float fparam_0;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x100];
  #define local_f8 ((undefined4 *)(albw_frame + 0x8))
  #define local_f0 (*(undefined4 *)(albw_frame + 0x10))
  #define local_ec (*(float *)(albw_frame + 0x14))
  #define uStack_e8 (*(undefined8 *)(albw_frame + 0x18))
  #define local_d4 (*(float *)(albw_frame + 0x2c))
  #define local_d0 (*(undefined2 *)(albw_frame + 0x30))
  #define local_cc (*(undefined4 *)(albw_frame + 0x34))
  #define local_c8 (*(undefined4 *)(albw_frame + 0x38))
  #define local_c0 (*(undefined4 *)(albw_frame + 0x40))
  #define local_bc (*(undefined4 *)(albw_frame + 0x44))
  #define local_b8 (*(undefined1 *)(albw_frame + 0x48))
  #define uStack_a8 (*(undefined4 *)(albw_frame + 0x58))
  #define local_a4 (*(float *)(albw_frame + 0x5c))
  #define local_a0 (*(undefined4 *)(albw_frame + 0x60))
  #define local_9c (*(undefined4 *)(albw_frame + 0x64))
  #define local_50 (*(float *)(albw_frame + 0xb0))
  #define local_4c (*(float *)(albw_frame + 0xb4))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0xb8))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0xbc))
  #define local_40 (*(float *)(albw_frame + 0xc0))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0xc4))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0xc8))
  #define local_34 (*(float *)(albw_frame + 0xcc))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0xd0))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0xd4))
  local_f8[0] = 6;
  puVar1 = (undefined4 *)func_00435B54(&uStack_a8,local_f8);
  fparam_0 = DAT_0042e2b8;
  *puVar1 = DAT_0042e2bc;
  puVar1[0x16] = ALBW_AS_U32(fparam_0);
  local_a4 = *(float *)(param_1 + 4);
  local_a0 = *(undefined4 *)(param_1 + 8);
  local_9c = *(undefined4 *)(param_1 + 0xc);
  local_50 = SQRT(*(float *)(param_1 + 0x58) * *(float *)(param_1 + 0x58) +
                  *(float *)(param_1 + 0x5c) * *(float *)(param_1 + 0x5c) +
                  *(float *)(param_1 + 0x60) * *(float *)(param_1 + 0x60)) * DAT_0042e2c0;
  local_f0 = DAT_0042e2c4;
  local_d4 = fparam_0;
  local_f8[0] = 0x1f;
  local_cc = 0;
  local_c8 = 0;
  local_d0 = 0x1f;
  local_c0 = 0;
  local_bc = 0;
  local_b8 = 0;
  iVar2 = func_0042A260((int)&uStack_a8,param_2,(int)&local_f0);
  if (iVar2 != 0) {
    fVar3 = local_ec;
    func_00115D70(&local_34,&local_ec,local_50 - local_d4);
    local_4c = local_34;
    uStack_48 = uStack_30;
    uStack_44 = uStack_2c;
    func_00115C70(&local_34,&local_a4,&local_4c);
    local_40 = local_34;
    uStack_3c = uStack_30;
    uStack_38 = uStack_2c;
    iVar2 = func_0042CBE4(param_1,&local_40,param_3,fparam_0);
    if (iVar2 != 0) {
      if (param_3 != 0) {
        *(float *)(param_3 + 4) = fVar3;
        *(int *)(param_3 + 8) = (int)uStack_e8;
        *(int *)(param_3 + 0xc) = (int)((ulonglong)uStack_e8 >> 0x20);
      }
      return 1;
    }
  }
  return 0;
}

