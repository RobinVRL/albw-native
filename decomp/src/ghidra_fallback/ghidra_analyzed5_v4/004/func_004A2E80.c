#include "ghidra_types.h"

extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_003E6DD4(int param_1,float *param_2);
extern int func_00491D78(float *param_1,float *param_2,float *param_3,float *param_4);

// USA 004A2E80 <- EU 004A2E58 (Ghidra, non-matching)

void func_004A2E80(int param_1,float *param_2,float fparam_0)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define local_a4 (*(float *)(albw_frame + 0xc))
  #define uStack_a0 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_9c (*(undefined4 *)(albw_frame + 0x14))
  #define local_90 (*(float *)(albw_frame + 0x20))
  #define local_8c (*(float *)(albw_frame + 0x24))
  #define local_88 (*(float *)(albw_frame + 0x28))
  #define local_84 (*(float *)(albw_frame + 0x2c))
  #define uStack_80 (*(undefined4 *)(albw_frame + 0x30))
  #define uStack_7c (*(undefined4 *)(albw_frame + 0x34))
  #define afStack_78 ((float *)(albw_frame + 0x38))
  #define afStack_48 ((float *)(albw_frame + 0x68))
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    local_90 = *(float *)(iVar1 + 0x3c) * fparam_0;
    local_8c = local_90;
    local_88 = local_90;
    func_00115D70(&local_84,(float *)(iVar1 + 0x40),fparam_0);
    local_a4 = local_84;
    uStack_a0 = uStack_80;
    uStack_9c = uStack_7c;
    func_00491D78(afStack_78,&local_90,(float *)(iVar1 + 0x4c),&local_a4);
    func_001157FC(afStack_48,param_2,afStack_78);
    iVar1 = *(int *)(param_1 + 0x20);
    if (((iVar1 != 0) && (*(int *)(param_1 + 0x24) == *(int *)(iVar1 + 0xc))) &&
       (0 < *(int *)(iVar1 + 4))) {
      func_003E6DD4(iVar1,afStack_48);
    }
  }
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xfffffffe;
  return;
}

