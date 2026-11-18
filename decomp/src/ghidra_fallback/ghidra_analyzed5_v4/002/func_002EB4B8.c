#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_002EEB98(int param_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004EAA68(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0054FAC0(int param_1,uint param_2);
extern int DAT_002eb570;
extern float DAT_002eb574;
extern undefined4 DAT_002eb578;
extern undefined4 DAT_002eb57c;
extern undefined4 *DAT_002eb580;

// USA 002EB4B8 <- EU 002EB494 (Ghidra, non-matching)
// GLOBAL DAT_002eb570 int
// GLOBAL DAT_002eb574 float
// GLOBAL DAT_002eb578 undefined4
// GLOBAL DAT_002eb57c undefined4
// GLOBAL DAT_002eb580 undefined4 *

undefined4 func_002EB4B8(int param_1)

{
  float fparam_0;
  int iVar1;
  uint *puVar2;
  undefined4 extraout_r1;
  int *piVar3;
  undefined4 uVar4;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define aiStack_80 ((int *)(albw_frame + 0x0))
  #define fStack_24 (*(float *)(albw_frame + 0x5c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x60))
  func_002EEB98(param_1);
  iVar1 = DAT_002eb570;
  *(undefined1 *)(param_1 + 0xe0e) = 0;
  *(undefined1 *)(param_1 + 0xe2c) = 0;
  iVar1 = func_0054FAC0(param_1 + 0xe30,*(uint *)(iVar1 + param_1));
  fparam_0 = DAT_002eb574;
  *(undefined4 *)(param_1 + 0xe00) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(param_1 + 0xe04) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(param_1 + 0xe08) = *(undefined4 *)(param_1 + 0x3d8);
  func_004D80A4(&fStack_24,iVar1 + 0x80000000,fparam_0);
  local_20 = DAT_002eb578;
  uVar4 = DAT_002eb578;
  func_00115C54((float *)(param_1 + 0xbe4),&fStack_24,(float *)(param_1 + 0x3d0));
  *(undefined4 *)(param_1 + 0x3dc) = uVar4;
  *(undefined4 *)(param_1 + 0x3e0) = uVar4;
  *(undefined4 *)(param_1 + 0x3e4) = uVar4;
  *(undefined4 *)(param_1 + 0xb7c) = 0;
  uVar4 = DAT_002eb57c;
  *(undefined4 *)(param_1 + 0x125c) = 0x1e;
  *(undefined4 *)(param_1 + 0x1260) = uVar4;
  *(undefined4 *)(param_1 + 0x1258) = 0;
  piVar3 = (int *)0x0;
  puVar2 = (uint *)func_002C11E8(aiStack_80,0xb,0,0);
  iVar1 = *(int *)(param_1 + 0xdb4);
  func_0016898C(iVar1,puVar2);
  return func_004EAA68(*DAT_002eb580,extraout_r1,iVar1,piVar3);
}

