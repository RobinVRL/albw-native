#include "ghidra_types.h"

extern int func_004D7F70(float *param_1,uint param_2);
extern undefined8 func_0058A474(undefined4 param_1,uint param_2);
extern int DAT_001a5ed4;
extern int DAT_001a5ed8;
extern float DAT_001a5edc;
extern undefined4 DAT_001a5ee0;
extern undefined4 DAT_001a5ee4;

// USA 001A5E58 <- EU 001A5E58 (Ghidra, non-matching)
// GLOBAL DAT_001a5ed4 int
// GLOBAL DAT_001a5ed8 int
// GLOBAL DAT_001a5edc float
// GLOBAL DAT_001a5ee0 undefined4
// GLOBAL DAT_001a5ee4 undefined4

void func_001A5E58(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define local_14 (*(float *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  uVar3 = func_0058A474(param_1,0x32);
  local_18 = DAT_001a5edc;
  local_14 = DAT_001a5edc;
  uStack_10 = DAT_001a5ee0;
  iVar2 = DAT_001a5ed4;
  if ((int)uVar3 == 0) {
    iVar2 = DAT_001a5ed8;
  }
  func_004D7F70(&local_18,*(int *)(param_1 + 0x940) + iVar2);
  uVar1 = DAT_001a5ee4;
  *(float *)(param_1 + 0x934) = local_18;
  *(float *)(param_1 + 0x938) = local_14;
  *(undefined4 *)(param_1 + 0x93c) = uStack_10;
  *(undefined4 *)(param_1 + 0x938) = uVar1;
  *(undefined1 *)(*(int *)(param_1 + 0x900) + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x904) = 2;
  return;
}

