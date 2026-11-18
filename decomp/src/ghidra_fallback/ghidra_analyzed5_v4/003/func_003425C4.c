#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern float func_002760A4(int param_1,undefined4 *param_2);
extern int func_003418E0(int param_1,undefined4 *param_2,undefined1 param_3);
extern float DAT_003426b4;
extern undefined4 DAT_003426b8;
extern int *DAT_003426bc;

// USA 003425C4 <- EU 003425A0 (Ghidra, non-matching)
// GLOBAL DAT_003426b4 float
// GLOBAL DAT_003426b8 undefined4
// GLOBAL DAT_003426bc int *

int func_003425C4(int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x4))
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x14))
  #define local_18 (*(float *)(albw_frame + 0x18))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x20))
  iVar1 = func_003418E0(param_1,(undefined4 *)(param_1 + 0x68),0);
  if (iVar1 == 0) {
    iVar1 = param_1 + 0x68;
  }
  else {
    iVar1 = 0;
    do {
      iVar2 = func_003418E0(param_1,(undefined4 *)(param_1 + iVar1 * 0x28 + 0x90),0);
      if (iVar2 == 0) {
        return param_1 + iVar1 * 0x28 + 0x90;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 4);
    *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x68);
    uStack_2c = DAT_003426b8;
    local_30 = DAT_003426b4;
    *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_1 + 0x6c);
    *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_1 + 0x70);
    *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 0x74);
    *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_1 + 0x78);
    *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_1 + 0x7c);
    *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x80);
    *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_1 + 0x84);
    *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_1 + 0x88);
    *(undefined1 *)(param_1 + 0x154) = 0;
    local_28 = local_30;
    func_00115C54(&local_18,(float *)(param_1 + 0x68),&local_30);
    local_24 = local_18;
    uStack_20 = uStack_14;
    uStack_1c = uStack_10;
    fVar3 = func_002760A4(*DAT_003426bc,&local_24);
    if (fVar3 != -3.4028235e+38) {
      *(float *)(param_1 + 0x134) = fVar3;
    }
    iVar1 = param_1 + 0x130;
  }
  return iVar1;
}

