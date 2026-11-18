#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004905E0(float fparam_0);
extern int func_0054C998(int param_1,int param_2);
extern int func_0058E2B8(int *param_1);
extern float DAT_0052ecf4;
extern float DAT_0052ecf8;
extern int DAT_0052ecfc;

// USA 0052EB98 <- EU 0052EB70 (Ghidra, non-matching)
// GLOBAL DAT_0052ecf4 float
// GLOBAL DAT_0052ecf8 float
// GLOBAL DAT_0052ecfc int

bool func_0052EB98(int param_1,float *param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uint in_fpscr;
  uint uVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define afStack_20 ((float *)(albw_frame + 0x0))
  #define fStack_18 (*(float *)(albw_frame + 0x8))
  iVar3 = *(int *)(param_1 + 0x10);
  func_00115C70(afStack_20,param_2,(float *)(iVar3 + 0x3d0));
  iVar3 = func_0054C998(*(int *)(iVar3 + 0x5fc),*(int *)(iVar3 + 1000));
  uVar6 = in_fpscr & 0xfffffff | (uint)(fStack_18 == DAT_0052ecf4) << 0x1e;
  bVar5 = false;
  if (SUB41(uVar6 >> 0x1e,0)) {
    uVar6 = in_fpscr & 0xfffffff | (uint)(afStack_20[0] == DAT_0052ecf4) << 0x1e;
    bVar5 = SUB41(uVar6 >> 0x1e,0);
  }
  if (bVar5) {
    iVar4 = 0;
  }
  else {
    uVar6 = uVar6 & 0xfffffff;
    if (NAN(fStack_18) || NAN(DAT_0052ecf4)) {
      if (NAN(afStack_20[0]) || NAN(DAT_0052ecf4)) {
        uVar6 = uVar6 | (uint)(fStack_18 == afStack_20[0]) << 0x1e |
                (uint)(afStack_20[0] <= fStack_18) << 0x1d;
        bVar2 = (byte)(uVar6 >> 0x18);
        if ((bool)(bVar2 >> 5 & 1) && !(bool)(bVar2 >> 6)) {
          iVar4 = func_004905E0(fStack_18 / afStack_20[0]);
          iVar4 = -0x40000000 - iVar4;
        }
        else {
          iVar4 = func_004905E0(afStack_20[0] / fStack_18);
          iVar4 = iVar4 + -0x80000000;
        }
      }
      else {
        fStack_18 = -fStack_18;
        uVar1 = uVar6 | (uint)(fStack_18 < afStack_20[0]) << 0x1f;
        uVar6 = uVar1 | (uint)(NAN(fStack_18) || NAN(afStack_20[0])) << 0x1c;
        if ((byte)(uVar1 >> 0x1f) == ((byte)(uVar6 >> 0x1c) & 1)) {
          iVar4 = func_004905E0(afStack_20[0] / fStack_18);
          iVar4 = -0x80000000 - iVar4;
        }
        else {
          iVar4 = func_004905E0(fStack_18 / afStack_20[0]);
          iVar4 = iVar4 + 0x40000000;
        }
      }
    }
    else if (NAN(afStack_20[0]) || NAN(DAT_0052ecf4)) {
      afStack_20[0] = -afStack_20[0];
      uVar1 = uVar6 | (uint)(fStack_18 < afStack_20[0]) << 0x1f;
      uVar6 = uVar1 | (uint)(NAN(fStack_18) || NAN(afStack_20[0])) << 0x1c;
      if ((byte)(uVar1 >> 0x1f) == ((byte)(uVar6 >> 0x1c) & 1)) {
        iVar4 = func_004905E0(afStack_20[0] / fStack_18);
        iVar4 = -iVar4;
      }
      else {
        iVar4 = func_004905E0(fStack_18 / afStack_20[0]);
        iVar4 = iVar4 + -0x40000000;
      }
    }
    else {
      uVar1 = uVar6 | (uint)(fStack_18 < afStack_20[0]) << 0x1f;
      uVar6 = uVar1 | (uint)(NAN(fStack_18) || NAN(afStack_20[0])) << 0x1c;
      if ((byte)(uVar1 >> 0x1f) == ((byte)(uVar6 >> 0x1c) & 1)) {
        iVar4 = func_004905E0(afStack_20[0] / fStack_18);
      }
      else {
        iVar4 = func_004905E0(fStack_18 / afStack_20[0]);
        iVar4 = 0x40000000 - iVar4;
      }
    }
  }
  afStack_20[0] = ALBW_AS_F32((iVar3 - iVar4));
  iVar3 = func_0058E2B8((int *)afStack_20);
  fVar7 = (float)VectorUnsignedToFloat(iVar3,(byte)(uVar6 >> 0x15) & 3);
  return (int)ALBW_AS_U32((fVar7 * DAT_0052ecf8)) < DAT_0052ecfc;
}

