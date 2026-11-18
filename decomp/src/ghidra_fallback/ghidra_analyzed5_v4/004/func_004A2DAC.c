#include "ghidra_types.h"

extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_003E6DD4(int param_1,float *param_2);
extern int func_00491D78(float *param_1,float *param_2,float *param_3,float *param_4);

// USA 004A2DAC <- EU 004A2D84 (Ghidra, non-matching)

void func_004A2DAC(int param_1,float *param_2,float *param_3)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define local_a4 (*(float *)(albw_frame + 0xc))
  #define uStack_a0 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_9c (*(undefined4 *)(albw_frame + 0x14))
  #define local_94 (*(float *)(albw_frame + 0x1c))
  #define uStack_90 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_8c (*(undefined4 *)(albw_frame + 0x24))
  #define local_88 (*(float *)(albw_frame + 0x28))
  #define local_84 (*(float *)(albw_frame + 0x2c))
  #define local_80 (*(float *)(albw_frame + 0x30))
  #define afStack_78 ((float *)(albw_frame + 0x38))
  #define afStack_48 ((float *)(albw_frame + 0x68))
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    local_88 = *(float *)(iVar1 + 0x40) * *param_3;
    local_84 = *(float *)(iVar1 + 0x44) * param_3[1];
    local_80 = *(float *)(iVar1 + 0x48) * param_3[2];
    func_00115D70(&local_94,param_3,*(float *)(iVar1 + 0x3c));
    local_a4 = local_94;
    uStack_a0 = uStack_90;
    uStack_9c = uStack_8c;
    func_00491D78(afStack_78,&local_a4,(float *)(iVar1 + 0x4c),&local_88);
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

