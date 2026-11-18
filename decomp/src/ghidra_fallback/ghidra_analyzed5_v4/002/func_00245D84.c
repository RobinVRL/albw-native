#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern float DAT_00245e8c;
extern undefined4 DAT_00245e90;
extern undefined4 DAT_00245e94;

// USA 00245D84 <- EU 00245D84 (Ghidra, non-matching)
// GLOBAL DAT_00245e8c float
// GLOBAL DAT_00245e90 undefined4
// GLOBAL DAT_00245e94 undefined4

void func_00245D84(int param_1)

{
  int *piVar1;
  uint in_r1;
  uint unaff_r8;
  undefined4 uVar2;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_80 ((uint *)(albw_frame + 0x0))
  #define puStack_78 (*(undefined4 * *)(albw_frame + 0x8))
  #define local_74 (*(undefined4 *)(albw_frame + 0xc))
  #define local_70 (*(float *)(albw_frame + 0x10))
  #define local_6c (*(undefined4 *)(albw_frame + 0x14))
  #define local_68 (*(undefined4 *)(albw_frame + 0x18))
  #define local_64 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_60 (*(uint *)(albw_frame + 0x20))
  #define local_2c (*(undefined4 *)(albw_frame + 0x54))
  #define local_28 (*(undefined1 *)(albw_frame + 0x58))
  piVar1 = *(int **)(*(int *)(param_1 + 0x7ac) + 0x14);
  if (*piVar1 == 1) {
    in_r1 = (uint)*(byte *)(piVar1 + 7);
  }
  if (*piVar1 == 1 && in_r1 == 0) {
    if (ALBW_AS_F32(piVar1[4]) < DAT_00245e8c) {
      if (DAT_00245e8c < ALBW_AS_F32(piVar1[2])) goto LAB_00245e74;
    }
    else if (ALBW_AS_F32(piVar1[2]) != ALBW_AS_F32(piVar1[5])) goto LAB_00245e74;
    puStack_78 = &local_74;
    local_80[1] = 3;
    local_2c = 10;
    local_28 = 0;
    local_74 = 2;
    local_80[0] = 1;
    local_70 = DAT_00245e8c;
    local_6c = DAT_00245e90;
    local_68 = DAT_00245e94;
    local_60 = unaff_r8 | 0xff;
    local_64 = DAT_00245e90;
    uVar2 = DAT_00245e90;
    func_0016898C(*(int *)(param_1 + 0x7ac),local_80);
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x7ac) + 0x14) + 0x1c) = 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x7ac) + 0x14) + 0x10) = uVar2;
  }
LAB_00245e74:
  if (*(int *)(param_1 + 0x960) == 0x3c) {
    *(undefined1 *)(param_1 + 0x990) = 1;
  }
  return;
}

