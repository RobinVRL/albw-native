#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_00246FD0(int param_1,undefined4 param_2);
extern int func_0026FC20(int param_1,int param_2,int *param_3,undefined4 *param_4);
extern int func_003521F0(int param_1,undefined4 param_2);
extern int func_004CF478(int param_1,int param_2);
extern float fRam00247820;
extern float fRam00247824;
extern float fRam00247828;
extern undefined4 uRam0024781c;
extern int *piRam0024782c;
extern undefined4 DAT_00247810;
extern undefined4 DAT_00247814;
extern undefined4 DAT_00247818;

// USA 002476E4 <- EU 002476E4 (Ghidra, non-matching)
// GLOBAL DAT_00247810 undefined4
// GLOBAL DAT_00247814 undefined4
// GLOBAL DAT_00247818 undefined4
// GLOBAL UNK_0024781c undefined4
// GLOBAL UNK_00247820 float
// GLOBAL UNK_00247824 float
// GLOBAL UNK_00247828 float
// GLOBAL UNK_0024782c int *

undefined4 func_002476E4(int param_1)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  undefined4 extraout_r1;
  uint unaff_r6;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_80 ((uint *)(albw_frame + 0x0))
  #define local_78 (*(undefined4 * *)(albw_frame + 0x8))
  #define local_74 (*(undefined4 *)(albw_frame + 0xc))
  #define local_70 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_6c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_68 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_64 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_60 (*(uint *)(albw_frame + 0x20))
  #define local_2c (*(undefined4 *)(albw_frame + 0x54))
  #define local_28 (*(undefined1 *)(albw_frame + 0x58))
  #define aiStack_24 ((int *)(albw_frame + 0x5c))
  func_003521F0(param_1 + 0x324,(int)*(char *)(param_1 + 0x40c));
  local_80[1] = 3;
  local_78 = &local_74;
  local_60 = unaff_r6 | 0xff;
  local_2c = 10;
  local_28 = 0;
  local_80[0] = 1;
  local_74 = 0;
  local_70 = DAT_00247814;
  uStack_6c = DAT_00247810;
  uStack_68 = DAT_00247818;
  uStack_64 = DAT_00247810;
  uVar6 = DAT_00247810;
  func_0016898C(*(int *)(param_1 + 0x438),local_80);
  *(undefined4 *)(param_1 + 0x4b8) = *(undefined4 *)(param_1 + 0x3d4);
  func_004CF478(*(int *)(param_1 + 0x434),1);
  uVar7 = uRam0024781c;
  *(undefined1 *)(*(int *)(param_1 + 0x44c) + 0x61) = 1;
  *(undefined1 *)(*(int *)(param_1 + 0x448) + 0x61) = 1;
  *(undefined4 *)(param_1 + 0x450) = uVar6;
  *(undefined4 *)(param_1 + 0x454) = uVar7;
  *(undefined4 *)(param_1 + 0x458) = uVar6;
  func_00246FD0(param_1,extraout_r1);
  fVar2 = fRam00247828;
  fVar1 = fRam00247824;
  fVar4 = *(float *)(param_1 + 0x4b4);
  fVar5 = fVar4 * fRam00247820;
  *(float *)(param_1 + 0x4b0) = fVar4;
  *(float *)(param_1 + 0x45c) = -(fVar1 * fVar4);
  *(float *)(param_1 + 0x460) = fVar5 * fVar2;
  piVar3 = piRam0024782c;
  *(undefined4 *)(param_1 + 0x464) = uVar7;
  aiStack_24[0] = *(int *)(param_1 + 0x2cc);
  return func_0026FC20(*(int *)(*piVar3 + 0xf9c),(int)(char)*(undefined2 *)(param_1 + 0x4de),aiStack_24,
                (undefined4 *)(param_1 + 0x3d0));
}

