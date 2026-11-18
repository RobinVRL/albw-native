#include "ghidra_types.h"

extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0043672C(int param_1,undefined4 *param_2);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_0051D020(undefined4 *param_1,undefined4 *param_2);
extern undefined4 uRam00157744;
extern float DAT_00157738;
extern float DAT_0015773c;
extern float DAT_00157740;

// USA 0015762C <- EU 00157630 (Ghidra, non-matching)
// GLOBAL DAT_00157738 float
// GLOBAL DAT_0015773c float
// GLOBAL DAT_00157740 float
// GLOBAL UNK_00157744 undefined4

void func_0015762C(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define local_2c (*(float *)(albw_frame + 0x14))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_20 (*(float *)(albw_frame + 0x20))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x28))
  local_38 = DAT_00157738;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x80;
  if (*(char *)(param_1 + 0xa28) == '\0') {
    local_34 = local_38;
    local_30 = local_38;
    fVar2 = DAT_00157740;
    func_0043672C((int)*(char *)(param_1 + 0x8e0),&local_38);
    func_00115D70(&local_20,&local_38,fVar2);
    local_2c = local_20;
    uStack_28 = uStack_1c;
    uStack_24 = uStack_18;
    func_0051D020((undefined4 *)(param_1 + 0x3dc),&local_2c);
  }
  else {
    local_34 = local_38;
    local_30 = local_38;
    fVar2 = DAT_0015773c;
    func_0043672C((int)*(char *)(param_1 + 0x8e0),&local_38);
    func_00115D70(&local_20,&local_38,fVar2);
    local_2c = local_20;
    uStack_28 = uStack_1c;
    uStack_24 = uStack_18;
    func_0051D020((undefined4 *)(param_1 + 0x3dc),&local_2c);
  }
  func_004FABDC(param_1,2,0,0);
  uVar1 = uRam00157744;
  *(undefined4 *)(param_1 + 0x8e8) = 0x78;
  *(undefined4 *)(param_1 + 0x8ec) = uVar1;
  *(undefined4 *)(param_1 + 0x8e4) = 0;
  return;
}

