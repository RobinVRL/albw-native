#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern float DAT_00281e48;
extern undefined4 DAT_00281e4c;
extern undefined4 DAT_00281e50;

// USA 00281D18 <- EU 00281D40 (Ghidra, non-matching)
// GLOBAL DAT_00281e48 float
// GLOBAL DAT_00281e4c undefined4
// GLOBAL DAT_00281e50 undefined4

void func_00281D18(int param_1)

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
  if (*piVar1 == 3) {
    in_r1 = (uint)*(byte *)(piVar1 + 7);
  }
  if (*piVar1 == 3 && in_r1 == 0) {
    if (ALBW_AS_F32(piVar1[4]) < DAT_00281e48) {
      if (DAT_00281e48 < ALBW_AS_F32(piVar1[2])) goto LAB_00281e30;
    }
    else if (ALBW_AS_F32(piVar1[2]) != ALBW_AS_F32(piVar1[5])) goto LAB_00281e30;
    puStack_78 = &local_74;
    local_80[1] = 3;
    local_2c = 10;
    local_28 = 0;
    local_74 = 4;
    local_80[0] = 1;
    local_70 = DAT_00281e48;
    local_6c = DAT_00281e4c;
    local_68 = DAT_00281e50;
    local_60 = unaff_r8 | 0xff;
    local_64 = DAT_00281e4c;
    uVar2 = DAT_00281e4c;
    func_0016898C(*(int *)(param_1 + 0x7ac),local_80);
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x7ac) + 0x14) + 0x1c) = 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x7ac) + 0x14) + 0x10) = uVar2;
  }
LAB_00281e30:
  if (*(int *)(param_1 + 0x960) == 0x3c) {
    *(undefined1 *)(param_1 + 0x990) = 1;
  }
  return;
}

