#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0013CF3C(int param_1);
extern int func_0013DC0C(int param_1);
extern int func_0014EEB8(int param_1,undefined4 *param_2,undefined4 param_3,float fparam_0);
extern int func_00392E48(undefined4 *param_1,int param_2,undefined4 *param_3,undefined1 param_4);
extern int func_00520EE4(int param_1);
extern int func_00520FF8(int param_1);
extern int func_0052108C(int param_1);
extern int func_005211D8(int param_1);
extern int func_0065743C(undefined4 *param_1,undefined1 param_2);
extern float DAT_0013e280;
extern float DAT_0013e284;
extern float DAT_0013e288;
extern undefined4 DAT_0013e28c;
extern float DAT_0013e290;
extern undefined4 DAT_0013e294;

// USA 0013E0BC <- EU 0013E0BC (Ghidra, non-matching)
// GLOBAL DAT_0013e280 float
// GLOBAL DAT_0013e284 float
// GLOBAL DAT_0013e288 float
// GLOBAL DAT_0013e28c undefined4
// GLOBAL DAT_0013e290 float
// GLOBAL DAT_0013e294 undefined4

undefined4 func_0013E0BC(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  func_0013CF3C(param_1);
  func_0013DC0C(param_1);
  *(float *)(param_1 + 0x3e0) = *(float *)(param_1 + 0x3e0) - DAT_0013e280;
  func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3dc));
  func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x578));
  fVar6 = DAT_0013e288;
  fVar5 = DAT_0013e284;
  local_28 = DAT_0013e288;
  local_24 = DAT_0013e284;
  local_20 = DAT_0013e288;
  *(float *)(param_1 + 0x56c) = DAT_0013e288;
  *(float *)(param_1 + 0x570) = fVar6;
  *(float *)(param_1 + 0x574) = fVar6;
  *(float *)(param_1 + 0x578) = fVar6;
  *(float *)(param_1 + 0x57c) = fVar6;
  *(float *)(param_1 + 0x580) = fVar6;
  uVar1 = DAT_0013e28c;
  *(undefined1 *)(param_1 + 0x62e) = 1;
  iVar3 = func_0014EEB8(param_1,&local_28,uVar1,fVar5);
  if (iVar3 == 0) {
    iVar3 = func_0052108C(param_1);
    if (((iVar3 != 0) || (iVar3 = func_00520FF8(param_1), iVar3 != 0)) ||
       (iVar3 = func_00520EE4(param_1), uVar1 = DAT_0013e294, iVar3 != 0)) {
LAB_0013e268:
      return func_0065743C((undefined4 *)(param_1 + 0x4f8),7);
    }
    if (*(uint *)(param_1 + 0x528) < *(uint *)(param_1 + 0x52c)) {
      *(uint *)(param_1 + 0x528) = *(uint *)(param_1 + 0x528) + 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x52c) = 8;
      *(undefined4 *)(param_1 + 0x530) = uVar1;
      *(undefined4 *)(param_1 + 0x528) = 0;
      uVar4 = func_00392E48((undefined4 *)(param_1 + 0x3d0),1,(undefined4 *)0x0,0);
      if ((uVar4 < 2) || (uVar4 == 2 || uVar4 == 5)) goto LAB_0013e268;
    }
  }
  else {
    *(float *)(param_1 + 0x3dc) = fVar6;
    *(float *)(param_1 + 0x3e0) = fVar6;
    *(float *)(param_1 + 0x3e4) = fVar6;
    fVar5 = *(float *)(param_1 + 0x3d4) - DAT_0013e290;
    *(float *)(param_1 + 0x3d4) = fVar5;
    if (*(char *)(param_1 + 0x62e) == '\x01') {
      *(undefined4 *)(param_1 + 0x554) = *(undefined4 *)(param_1 + 0x3d0);
      *(float *)(param_1 + 0x558) = fVar5;
      *(undefined4 *)(param_1 + 0x55c) = *(undefined4 *)(param_1 + 0x3d8);
    }
  }
  bVar2 = func_005211D8(param_1);
  if (bVar2) {
    *(undefined1 *)(param_1 + 0x2d7) = 1;
  }
  return 0;
}

