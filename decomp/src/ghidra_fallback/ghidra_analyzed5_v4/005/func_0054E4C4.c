#include "ghidra_types.h"

extern float func_00275FEC(int param_1,undefined4 param_2,uint param_3,uint param_4);
extern float DAT_0054e610;
extern uint DAT_0054e614;
extern float DAT_0054e618;
extern float DAT_0054e61c;
extern int *DAT_0054e620;

// USA 0054E4C4 <- EU 0054E49C (Ghidra, non-matching)
// GLOBAL DAT_0054e610 float
// GLOBAL DAT_0054e614 uint
// GLOBAL DAT_0054e618 float
// GLOBAL DAT_0054e61c float
// GLOBAL DAT_0054e620 int *

float func_0054E4C4(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  uint in_fpscr;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float in_s18;
  float fVar12;
  float fVar13;
  float fVar14;
  ulonglong uVar15;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(undefined4 *)(albw_frame + 0x0))
  #define local_4c (*(float *)(albw_frame + 0x4))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x8))
  #define local_44 (*(undefined4 *)(albw_frame + 0xc))
  #define local_40 (*(float *)(albw_frame + 0x10))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x14))
  piVar2 = DAT_0054e620;
  iVar4 = 0;
  uVar15 = (ulonglong)DAT_0054e614;
  fVar13 = DAT_0054e618;
  fVar14 = DAT_0054e610;
  fVar12 = DAT_0054e61c;
  do {
    fVar10 = fVar14;
    if (iVar4 != 3) {
      fVar10 = fVar13;
    }
    if (iVar4 == 0) {
      in_s18 = ALBW_AS_F32(uVar15);
    }
    fVar8 = (float)VectorSignedToFloat(iVar4 + 1,(byte)(in_fpscr >> 0x15) & 3);
    if (iVar4 != 0) {
      in_s18 = fVar13;
    }
    iVar3 = *piVar2;
    fVar10 = fVar8 * fVar12 - fVar10;
    fVar8 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
    in_s18 = fVar8 * fVar12 - in_s18;
    if (iVar3 == 0) {
      fVar8 = ALBW_AS_F32(param_2[1]);
    }
    fVar11 = -in_s18;
    if (iVar3 != 0) {
      local_50 = *param_2;
      uStack_48 = param_2[2];
      local_4c = ALBW_AS_F32(param_2[1]) + fVar10;
      local_44 = *param_2;
      uStack_3c = param_2[2];
      local_40 = ALBW_AS_F32(param_2[1]) - fVar11;
      fVar8 = func_00275FEC(iVar3,&local_50,(uint)&local_44,param_3);
    }
    local_4c = ALBW_AS_F32(param_2[1]);
    fVar9 = fVar8 - local_4c;
    uVar7 = in_fpscr & 0xfffffff | (uint)(fVar11 == fVar9) << 0x1e | (uint)(fVar9 <= fVar11) << 0x1d
    ;
    bVar1 = (byte)(uVar7 >> 0x18);
    bVar5 = (bool)(bVar1 >> 6);
    bVar6 = (bool)(bVar1 >> 5 & 1);
    if (!bVar6 || bVar5) {
      uVar7 = in_fpscr & 0xfffffff | (uint)(fVar9 == fVar10) << 0x1e |
              (uint)(fVar10 <= fVar9) << 0x1d;
      bVar1 = (byte)(uVar7 >> 0x18);
      bVar5 = (bool)(bVar1 >> 6);
      bVar6 = (bool)(bVar1 >> 5 & 1);
    }
    if (!bVar6 || bVar5) {
      return fVar8;
    }
    iVar3 = *piVar2;
    if (iVar3 != 0) {
      local_50 = *param_2;
      uStack_48 = param_2[2];
      local_4c = local_4c + fVar11;
      local_44 = *param_2;
      uStack_3c = param_2[2];
      local_40 = ALBW_AS_F32(param_2[1]) - fVar10;
      local_4c = func_00275FEC(iVar3,&local_50,(uint)&local_44,param_3);
    }
    fVar8 = local_4c - ALBW_AS_F32(param_2[1]);
    in_fpscr = uVar7 & 0xfffffff | (uint)(-fVar10 == fVar8) << 0x1e |
               (uint)(fVar8 <= -fVar10) << 0x1d;
    bVar1 = (byte)(in_fpscr >> 0x18);
    if ((!(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6)) &&
       (uVar7 = uVar7 & 0xfffffff | (uint)(in_s18 < fVar8) << 0x1f,
       in_fpscr = uVar7 | (uint)(NAN(in_s18) || NAN(fVar8)) << 0x1c,
       (byte)(uVar7 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1))) {
      return local_4c;
    }
    if (iVar4 == 3) {
      return local_4c;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  return ALBW_AS_F32(param_2[1]);
}

