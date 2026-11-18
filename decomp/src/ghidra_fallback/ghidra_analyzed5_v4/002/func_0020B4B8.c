#include "ghidra_types.h"

extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_0058A8F0(int param_1);
extern float func_0058AA40(int param_1);
extern float func_0058AC38(int param_1);
extern int func_0065D630(undefined4 *param_1,undefined1 param_2);
extern int DAT_0020b55c;
extern undefined4 DAT_0020b560;
extern float DAT_0020b564;

// USA 0020B4B8 <- EU 0020B4B8 (Ghidra, non-matching)
// GLOBAL DAT_0020b55c int
// GLOBAL DAT_0020b560 undefined4
// GLOBAL DAT_0020b564 float

void func_0020B4B8(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c (*(undefined4 *)(albw_frame + 0x4))
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  fVar3 = func_0058AA40(param_1);
  fVar4 = func_0058AC38(param_1);
  uVar5 = DAT_0020b560;
  if ((int)ALBW_AS_U32((fVar3 / fVar4)) < DAT_0020b55c) {
    func_004D80A4(&local_20,*(int *)(param_1 + 1000) + 0x80000000,DAT_0020b564);
    *(float *)(param_1 + 0x3dc) = local_20;
    *(undefined4 *)(param_1 + 0x3e4) = local_18;
    local_1c = uVar5;
  }
  else {
    *(undefined4 *)(param_1 + 0x3e4) = DAT_0020b560;
    *(undefined4 *)(param_1 + 0x3dc) = uVar5;
  }
  iVar1 = func_0058A8F0(param_1);
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 0xd19) == '\0') {
      uVar2 = 0x10;
    }
    else {
      uVar2 = 0x24;
    }
    func_0065D630((undefined4 *)(param_1 + 0x8bc),uVar2);
  }
  return;
}

