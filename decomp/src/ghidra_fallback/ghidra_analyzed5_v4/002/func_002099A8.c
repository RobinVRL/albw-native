#include "ghidra_types.h"

extern int func_0036BE78();
extern int func_004D838C(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2);
extern int func_0065D630(undefined4 *param_1,undefined1 param_2);
extern float DAT_00209ab0;
extern float DAT_00209ab4;
extern float DAT_00209ab8;
extern float DAT_00209abc;
extern float DAT_00209ac0;
extern undefined4 DAT_00209ac4;
extern float DAT_00209ac8;
extern float DAT_00209acc;
extern float DAT_00209ad0;

// USA 002099A8 <- EU 002099A8 (Ghidra, non-matching)
// GLOBAL DAT_00209ab0 float
// GLOBAL DAT_00209ab4 float
// GLOBAL DAT_00209ab8 float
// GLOBAL DAT_00209abc float
// GLOBAL DAT_00209ac0 float
// GLOBAL DAT_00209ac4 undefined4
// GLOBAL DAT_00209ac8 float
// GLOBAL DAT_00209acc float
// GLOBAL DAT_00209ad0 float

void func_002099A8(int param_1)

{
  float fparam_2;
  float fparam_1;
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(float *)(albw_frame + 0x14))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x1c))
  fparam_1 = DAT_00209abc;
  fparam_2 = DAT_00209ab8;
  if (0x28 < *(int *)(param_1 + 0x8bc)) {
    *(float *)(param_1 + 0x574) =
         *(float *)(param_1 + 0x574) + (DAT_00209ab0 - *(float *)(param_1 + 0x574)) * DAT_00209ab4;
    local_28 = *(float *)(param_1 + 0x3d0);
    uStack_20 = *(undefined4 *)(param_1 + 0x3d8);
    local_24 = *(undefined4 *)(param_1 + 0xb88);
    func_004D838C((float *)(param_1 + 0xb84),&local_28,DAT_00209ac0,fparam_1,fparam_2);
    uStack_18 = DAT_00209ac4;
    *(float *)(param_1 + 0xd24) = *(float *)(param_1 + 0xb84);
    *(undefined4 *)(param_1 + 0xd28) = *(undefined4 *)(param_1 + 0xb88);
    *(undefined4 *)(param_1 + 0xd2c) = *(undefined4 *)(param_1 + 0xb8c);
    local_1c = *(float *)(param_1 + 8);
    uStack_14 = *(undefined4 *)(param_1 + 0x10);
    iVar1 = func_004D838C((float *)(param_1 + 0x3d0),&local_1c,DAT_00209ad0,DAT_00209acc,
                          DAT_00209ac8);
    if (iVar1 != 0) {
      if (*(uint *)(param_1 + 0xd50) <= *(uint *)(param_1 + 0xd4c)) {
        func_0065D630((undefined4 *)(param_1 + 0x8bc),0xd);
      }
      if (*(uint *)(param_1 + 0xd4c) < *(uint *)(param_1 + 0xd50)) {
        *(uint *)(param_1 + 0xd4c) = *(uint *)(param_1 + 0xd4c) + 1;
      }
    }
    func_0036BE78(param_1 + 0xa7c);
  }
  return;
}

