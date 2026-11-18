#include "ghidra_types.h"

extern int func_0051E5B8(int param_1);
extern int func_0051E5D8(int param_1);
extern int func_0057D2C4(int *param_1,float *param_2,float *param_3);
extern int func_005801EC(int param_1,float *param_2,float *param_3);
extern int *DAT_00588fa8;

// USA 00588F28 <- EU 00588F00 (Ghidra, non-matching)
// GLOBAL DAT_00588fa8 int *

byte func_00588F28(undefined4 param_1,float *param_2,float fparam_0,float fparam_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  byte bVar4;
  byte bVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_2c (*(float *)(albw_frame + 0x4))
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define afStack_20 ((float *)(albw_frame + 0x10))
  piVar3 = DAT_00588fa8;
  iVar2 = func_0051E5B8(*DAT_00588fa8);
  func_005801EC(iVar2,afStack_20,param_2);
  piVar3 = (int *)func_0051E5D8(*piVar3);
  func_0057D2C4(piVar3,&local_2c,afStack_20);
  if (local_2c < -fparam_0) {
    bVar1 = 4;
  }
  else {
    bVar1 = 0;
  }
  if (fparam_0 < local_2c) {
    bVar4 = 8;
  }
  else {
    bVar4 = 0;
  }
  if (local_28 < -fparam_1) {
    bVar5 = 2;
  }
  else {
    bVar5 = 0;
  }
  return bVar1 | bVar4 | fparam_1 < local_28 | bVar5;
}

