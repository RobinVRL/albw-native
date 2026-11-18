#include "ghidra_types.h"

extern int func_004A8030(int param_1,int *param_2,uint param_3);
extern uint DAT_002760bc;
extern undefined4 DAT_002760c0;
extern float DAT_002760c4;
extern int *DAT_002760c8;

// USA 00275FF4 <- EU 0027601C (Ghidra, non-matching)
// GLOBAL DAT_002760bc uint
// GLOBAL DAT_002760c0 undefined4
// GLOBAL DAT_002760c4 float
// GLOBAL DAT_002760c8 int *

void func_00275FF4(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(int *)(albw_frame + 0x8))
  #define local_44 (*(int *)(albw_frame + 0xc))
  #define local_40 (*(undefined4 *)(albw_frame + 0x10))
  #define local_3c (*(undefined4 *)(albw_frame + 0x14))
  #define local_38 (*(uint *)(albw_frame + 0x18))
  #define local_34 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2c (*(uint *)(albw_frame + 0x24))
  #define local_28 (*(undefined4 *)(albw_frame + 0x28))
  #define local_24 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_20 (*(undefined1 *)(albw_frame + 0x30))
  #define local_1f (*(undefined1 *)(albw_frame + 0x31))
  piVar1 = DAT_002760c8;
  fVar3 = DAT_002760c4;
  local_38 = DAT_002760bc | param_3 & 0xffff0000;
  local_48 = 0;
  local_40 = 0;
  local_3c = 0;
  local_34 = 0xff;
  uStack_30 = 0;
  local_24 = DAT_002760c0;
  local_44 = param_1 + 0x15b58;
  local_20 = 0;
  local_1f = 1;
  *(float *)(param_1 + 0x15b6c) = DAT_002760c4;
  local_2c = param_3;
  local_28 = param_2;
  iVar2 = func_004A8030(*piVar1,&local_48,param_4);
  if (iVar2 != 0) {
    fVar3 = *(float *)(param_1 + 0x15b6c);
  }
  return;
}

