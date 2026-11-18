// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00290774(int param_1,undefined4 param_2);
extern int func_0036166C(int param_1,undefined1 param_2);
extern int func_004356B4(int *param_1);
extern int func_0043625C(int *param_1,undefined4 *param_2);
extern int func_004ED9C8(int param_1);
extern int func_006649C8(undefined4 *param_1,undefined1 param_2);
extern float DAT_00306110;
extern float DAT_00306114;
extern float DAT_00306118;
extern float DAT_0030611c;
extern int *DAT_00306120;

// USA 00305F0C <- EU 00305EE8 (Ghidra, non-matching)
// GLOBAL DAT_00306110 float
// GLOBAL DAT_00306114 float
// GLOBAL DAT_00306118 float
// GLOBAL DAT_0030611c float
// GLOBAL DAT_00306120 int *

void func_00305F0C(int param_1,float fparam_0)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define local_2c (*(float *)(albw_frame + 0x14))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x1c))
  fVar5 = DAT_00306110;
  if (*(uint *)(param_1 + 0x4bc) < *(uint *)(param_1 + 0x4c0)) {
    *(uint *)(param_1 + 0x4bc) = *(uint *)(param_1 + 0x4bc) + 1;
  }
  if (*(uint *)(param_1 + 0x4bc) < *(uint *)(param_1 + 0x4c0)) {
    uVar1 = 1;
    *(undefined1 *)(param_1 + 0x4c8) = 1;
    *(undefined1 *)(*(int *)(param_1 + 0x444) + 0x44) = 1;
    uVar2 = *(uint *)(param_1 + 0x4c0);
    if (uVar2 != 0) {
      uVar1 = *(uint *)(param_1 + 0x4bc);
    }
    fVar4 = fVar5;
    if ((uVar2 != 0 && uVar1 != 0) && (fVar4 = DAT_00306114, uVar1 < uVar2)) {
      fVar4 = (float)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
      fVar4 = fVar4 * *(float *)(param_1 + 0x4c4);
    }
    fVar4 = fVar4 * *(float *)(param_1 + 0x4b0);
    *(float *)(param_1 + 0x4ac) = fVar4;
    if (*(int *)(param_1 + 0x44c) != 0) {
      *(float *)(*(int *)(param_1 + 0x44c) + 0x5c) = fVar4;
      local_38 = fVar5;
      local_34 = fVar4 * DAT_00306118;
      local_30 = fVar5;
      iVar3 = *(int *)(param_1 + 0x44c);
      func_00115C54(&local_2c,(float *)(param_1 + 0x3d0),&local_38);
      *(float *)(iVar3 + 4) = local_2c;
      *(undefined4 *)(iVar3 + 8) = uStack_28;
      *(undefined4 *)(iVar3 + 0xc) = uStack_24;
      func_004356B4(*(int **)(param_1 + 0x44c));
    }
    fVar4 = DAT_0030611c;
    if (*(int *)(param_1 + 0x450) != 0) {
      local_34 = *(float *)(param_1 + 0x4ac);
      *(float *)(*(int *)(param_1 + 0x450) + 0x5c) = local_34;
      local_34 = local_34 * fVar4;
      iVar3 = *(int *)(param_1 + 0x450);
      local_38 = fVar5;
      local_30 = fVar5;
      func_00115C54(&local_2c,(float *)(param_1 + 0x3d0),&local_38);
      *(float *)(iVar3 + 4) = local_2c;
      *(undefined4 *)(iVar3 + 8) = uStack_28;
      *(undefined4 *)(iVar3 + 0xc) = uStack_24;
      func_004356B4(*(int **)(param_1 + 0x450));
    }
    if (*(int *)(param_1 + 0x448) != 0) {
      func_0043625C(*(int **)(*(int *)(param_1 + 0x448) + 0x14),(undefined4 *)(param_1 + 0x3d0));
      func_004ED9C8(*(int *)(param_1 + 0x448));
    }
    if (**(int **)(param_1 + 0x454) != 0) {
      iVar3 = *DAT_00306120;
      if (*(char *)(param_1 + 0x4a8) == '\0') {
        if (iVar3 != 0) {
          func_0036166C(iVar3,*(undefined4 *)(param_1 + 1000));
        }
      }
      else if (iVar3 != 0) {
        func_00290774(iVar3,*(undefined4 *)(param_1 + 1000));
      }
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x4c8) = 0;
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x438) + 0x14);
  if (*(char *)(iVar3 + 0x1c) == '\0') {
    if (*(float *)(iVar3 + 0x10) < fVar5) {
      if (fVar5 < *(float *)(iVar3 + 8)) {
        return;
      }
    }
    else if (*(float *)(iVar3 + 8) != *(float *)(iVar3 + 0x14)) {
      return;
    }
    *(undefined1 *)(param_1 + 0x4c8) = 0;
    func_006649C8((undefined4 *)(param_1 + 0x410),0);
  }
  return;
}

