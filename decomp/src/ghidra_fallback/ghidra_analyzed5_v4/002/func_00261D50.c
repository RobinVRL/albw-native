#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00436700(int param_1,undefined4 *param_2);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_0051D020(undefined4 *param_1,undefined4 *param_2);
extern int func_0058A7D4(void);
extern undefined4 DAT_00261e44;
extern float DAT_00261e48;
extern float DAT_00261e4c;

// USA 00261D50 <- EU 00261D78 (Ghidra, non-matching)
// GLOBAL DAT_00261e44 undefined4
// GLOBAL DAT_00261e48 float
// GLOBAL DAT_00261e4c float

undefined4 func_00261D50(int param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  float fparam_0;
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
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x80;
  puVar2 = (uint *)func_0058A7D4();
  uVar3 = func_00111A64(puVar2);
  uVar1 = DAT_00261e44;
  *(char *)(param_1 + 0x8e0) = (char)((ulonglong)uVar3 * 4 >> 0x20);
  *(undefined4 *)(param_1 + 0x8e8) = 0xa0;
  *(undefined4 *)(param_1 + 0x8ec) = uVar1;
  fparam_0 = DAT_00261e48;
  *(undefined4 *)(param_1 + 0x8e4) = 0;
  local_38 = DAT_00261e4c;
  local_34 = DAT_00261e4c;
  local_30 = DAT_00261e4c;
  func_00436700((int)*(char *)(param_1 + 0x8e0),&local_38);
  func_00115D70(&local_20,&local_38,fparam_0);
  local_2c = local_20;
  uStack_28 = uStack_1c;
  uStack_24 = uStack_18;
  func_0051D020((undefined4 *)(param_1 + 0x3dc),&local_2c);
  return func_004FABDC(param_1,1,0xffffffff,0);
}

