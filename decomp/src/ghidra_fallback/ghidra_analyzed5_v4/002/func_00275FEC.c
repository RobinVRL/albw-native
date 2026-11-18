#include "ghidra_types.h"

extern int func_004A8030(int param_1,int *param_2,uint param_3);
extern uint DAT_002760bc;
extern undefined4 DAT_002760c0;
extern float DAT_002760c4;
extern int *DAT_002760c8;

// USA 00275FEC <- EU 00276014 (Ghidra, non-matching)
// GLOBAL DAT_002760bc uint
// GLOBAL DAT_002760c0 undefined4
// GLOBAL DAT_002760c4 float
// GLOBAL DAT_002760c8 int *

float func_00275FEC(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define iStack_48 (*(int *)(albw_frame + 0x8))
  #define iStack_44 (*(int *)(albw_frame + 0xc))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_38 (*(uint *)(albw_frame + 0x18))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_2c (*(uint *)(albw_frame + 0x24))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x28))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x2c))
  #define uStack_20 (*(undefined1 *)(albw_frame + 0x30))
  #define uStack_1f (*(undefined1 *)(albw_frame + 0x31))
  piVar1 = DAT_002760c8;
  fVar4 = DAT_002760c4;
  iVar2 = *(int *)(param_1 + 0x38);
  uStack_38 = DAT_002760bc | param_3 & 0xffff0000;
  iStack_48 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_34 = 0xff;
  uStack_30 = 0;
  uStack_24 = DAT_002760c0;
  iStack_44 = iVar2 + 0x15b58;
  uStack_20 = 0;
  uStack_1f = 1;
  *(float *)(iVar2 + 0x15b6c) = DAT_002760c4;
  uStack_2c = param_3;
  uStack_28 = param_2;
  iVar3 = func_004A8030(*piVar1,&iStack_48,param_4);
  if (iVar3 != 0) {
    fVar4 = *(float *)(iVar2 + 0x15b6c);
  }
  return fVar4;
}

