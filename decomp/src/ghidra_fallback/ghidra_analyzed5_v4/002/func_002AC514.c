#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_002ADFE4(int param_1,int param_2,undefined1 param_3,undefined4 param_4,int param_5);
extern int func_002AE780(int param_1);
extern int func_004F7D10(void);
extern int func_004FA890(int param_1);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern float func_004FB2F0(int param_1,float fparam_0);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern float DAT_002ac70c;
extern float DAT_002ac710;
extern undefined4 DAT_002ac714;
extern float DAT_002ac718;
extern float DAT_002ac71c;
extern float DAT_002ac720;
extern uint DAT_002ac724;
extern float DAT_002ac750;
extern int DAT_002ac754;
extern undefined DAT_002ac758;
extern char s_SE_EN_DAMAGE_FIRE_002ac73c[];
extern char s_SE_EN_DAMAGE_LAVA_002ac728[];
extern char s__SE_EN_FR_LAUNCH_002ac75b[];
extern char s_cf_002ac75b[];
extern undefined4 _DAT_002ac758;

// USA 002AC514 <- EU 002AC4F0 (Ghidra, non-matching)
// GLOBAL DAT_002ac70c float
// GLOBAL DAT_002ac710 float
// GLOBAL DAT_002ac714 undefined4
// GLOBAL DAT_002ac718 float
// GLOBAL DAT_002ac71c float
// GLOBAL DAT_002ac720 float
// GLOBAL DAT_002ac724 uint
// GLOBAL DAT_002ac750 float
// GLOBAL DAT_002ac754 int
// GLOBAL DAT_002ac758 undefined
// GLOBAL s_cf_002ac75b string
// GLOBAL s_SE_EN_DAMAGE_FIRE_002ac73c string
// GLOBAL s_SE_EN_DAMAGE_LAVA_002ac728 string

/* WARNING: Variable defined which should be unmapped: objStack_38 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_002AC514(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define objStack_38 ((uint *)(albw_frame + 0x8))
  #define local_30 (*(uint *)(albw_frame + 0x10))
  #define local_2c (*(char * *)(albw_frame + 0x14))
  func_002AE780(param_1);
  fVar8 = DAT_002ac70c;
  *(ushort *)(param_1 + 0x38) = *(ushort *)(param_1 + 0x38) & 0xfff7 | 1;
  *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) = *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) | 1;
  *(uint *)(*(int *)(param_1 + 0x34) + 0x59c) = *(uint *)(*(int *)(param_1 + 0x34) + 0x59c) | 0x800;
  if ((*(byte *)(param_1 + 5) - 0x15 < 8) && (iVar5 = func_004F7D10(), iVar5 != 0)) {
    fVar8 = DAT_002ac710;
  }
  *(float *)(param_1 + 0x40) = fVar8;
  uVar1 = DAT_002ac714;
  *(undefined4 *)(param_1 + 0x2c) = 0x3c;
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = 0;
  fVar3 = DAT_002ac720;
  fVar2 = DAT_002ac71c;
  fVar9 = DAT_002ac718;
  iVar5 = *(int *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(iVar5 + 0x500);
  *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(iVar5 + 0x3d4);
  *(float *)(param_1 + 0x17c) = *(float *)(iVar5 + 0x3d4) + fVar9;
  uVar4 = DAT_002ac724;
  if (fVar8 != fVar9) {
    fVar6 = fVar9;
    fVar7 = fVar9;
    do {
      fVar8 = fVar8 - fVar2;
      if (fVar8 < -fVar3) {
        fVar8 = -fVar3;
      }
      fVar6 = fVar6 + fVar8;
      if (fVar7 < fVar6) {
        fVar7 = fVar6;
      }
    } while (fVar9 <= fVar6);
  }
  objStack_38[0] = DAT_002ac724;
  if (*(byte *)(param_1 + 5) - 0x15 < 8) {
    objStack_38[1] = (uint)s_SE_EN_DAMAGE_LAVA_002ac728;
    func_00150A84(*(int **)(param_1 + 0x34),(int *)objStack_38,0);
  }
  else {
    objStack_38[1] = (uint)s_SE_EN_DAMAGE_FIRE_002ac73c;
    func_00150A84(*(int **)(param_1 + 0x34),(int *)objStack_38,0);
  }
  fVar8 = DAT_002ac750;
  *(undefined4 *)(param_1 + 0x16c) = 0x11;
  *(float *)(param_1 + 0x170) = fVar8;
  *(undefined4 *)(param_1 + 0x168) = 0;
  objStack_38[0] = 1;
  func_002ADFE4(param_1,0xb,1,1,1);
  func_004FB2F0(*(int *)(param_1 + 0x34),fVar8);
  iVar5 = (int)*(char *)(DAT_002ac754 + *(int *)(param_1 + 0x34));
  if (-1 < iVar5) {
    func_004FC07C(*(int *)(param_1 + 0x34),iVar5,0xffffffff,1);
  }
  if (-1 < *(short *)(param_1 + 0x18c)) {
    func_004FABDC(*(int *)(param_1 + 0x34),(int)*(short *)(param_1 + 0x18c),0xffffffff,0);
  }
  *(float *)(param_1 + 0x1e4) = fVar9;
  *(undefined1 *)(param_1 + 0x1e8) = 0;
  *(float *)(param_1 + 0x1e4) = *(float *)(*(int *)(param_1 + 0x34) + 0x3d4) + ALBW_AS_F32(_DAT_002ac758);
  func_004FA890(*(int *)(param_1 + 0x34));
  *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) =
       *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) | 0xc0000000;
  local_2c = s__SE_EN_FR_LAUNCH_002ac75b + 1;
  local_30 = uVar4;
  return func_00150A84(*(int **)(param_1 + 0x34),(int *)&local_30,0);
}

