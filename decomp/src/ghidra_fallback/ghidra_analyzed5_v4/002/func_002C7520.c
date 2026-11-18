#include "ghidra_types.h"

extern int func_004905E0(float fparam_0);
extern float DAT_002c768c;
extern int DAT_002c7690;

// USA 002C7520 <- EU 002C74FC (Ghidra, non-matching)
// GLOBAL DAT_002c768c float
// GLOBAL DAT_002c7690 int

undefined4 func_002C7520(int param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  short sVar4;
  int iVar3;
  bool bVar5;
  uint in_fpscr;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar7 = *(float *)(param_2 + 8);
  if (fVar7 <= DAT_002c768c) {
    fVar7 = -fVar7;
  }
  if ((int)ALBW_AS_U32(fVar7) < DAT_002c7690) {
    fVar8 = *(float *)(param_2 + 0xc);
    fVar7 = *(float *)(param_2 + 4);
    uVar6 = in_fpscr & 0xfffffff | (uint)(fVar8 == DAT_002c768c) << 0x1e;
    bVar5 = false;
    if (SUB41(uVar6 >> 0x1e,0)) {
      uVar6 = in_fpscr & 0xfffffff | (uint)(fVar7 == DAT_002c768c) << 0x1e;
      bVar5 = SUB41(uVar6 >> 0x1e,0);
    }
    fVar9 = DAT_002c768c;
    if (bVar5) {
      sVar4 = 0;
    }
    else {
      uVar6 = uVar6 & 0xfffffff;
      if (NAN(fVar8) || NAN(DAT_002c768c)) {
        if (NAN(fVar7) || NAN(DAT_002c768c)) {
          uVar6 = uVar6 | (uint)(fVar8 == fVar7) << 0x1e | (uint)(fVar7 <= fVar8) << 0x1d;
          bVar2 = (byte)(uVar6 >> 0x18);
          if ((bool)(bVar2 >> 5 & 1) && !(bool)(bVar2 >> 6)) {
            iVar3 = func_004905E0(fVar8 / fVar7);
            sVar4 = (short)((uint)(-0x40000000 - iVar3) >> 0x10);
          }
          else {
            iVar3 = func_004905E0(fVar7 / fVar8);
            sVar4 = (short)((uint)(iVar3 + -0x80000000) >> 0x10);
          }
        }
        else {
          fVar8 = -fVar8;
          uVar1 = uVar6 | (uint)(fVar8 < fVar7) << 0x1f;
          uVar6 = uVar1 | (uint)(NAN(fVar8) || NAN(fVar7)) << 0x1c;
          if ((byte)(uVar1 >> 0x1f) == ((byte)(uVar6 >> 0x1c) & 1)) {
            iVar3 = func_004905E0(fVar7 / fVar8);
            sVar4 = (short)((uint)(-0x80000000 - iVar3) >> 0x10);
          }
          else {
            iVar3 = func_004905E0(fVar8 / fVar7);
            sVar4 = (short)((uint)(iVar3 + 0x40000000) >> 0x10);
          }
        }
      }
      else if (NAN(fVar7) || NAN(DAT_002c768c)) {
        fVar7 = -fVar7;
        uVar1 = uVar6 | (uint)(fVar8 < fVar7) << 0x1f;
        uVar6 = uVar1 | (uint)(NAN(fVar8) || NAN(fVar7)) << 0x1c;
        if ((byte)(uVar1 >> 0x1f) == ((byte)(uVar6 >> 0x1c) & 1)) {
          iVar3 = func_004905E0(fVar7 / fVar8);
          sVar4 = (short)((uint)-iVar3 >> 0x10);
        }
        else {
          iVar3 = func_004905E0(fVar8 / fVar7);
          sVar4 = (short)((uint)(iVar3 + -0x40000000) >> 0x10);
        }
      }
      else {
        uVar1 = uVar6 | (uint)(fVar8 < fVar7) << 0x1f;
        uVar6 = uVar1 | (uint)(NAN(fVar8) || NAN(fVar7)) << 0x1c;
        if ((byte)(uVar1 >> 0x1f) == ((byte)(uVar6 >> 0x1c) & 1)) {
          iVar3 = func_004905E0(fVar7 / fVar8);
          sVar4 = (short)((uint)iVar3 >> 0x10);
        }
        else {
          iVar3 = func_004905E0(fVar8 / fVar7);
          sVar4 = (short)((uint)(0x40000000 - iVar3) >> 0x10);
        }
      }
    }
    iVar3 = *(int *)(param_1 + 1000);
    if (*(char *)(param_1 + 0x468) == '\0') {
      iVar3 = iVar3 + -0x80000000;
    }
    fVar7 = (float)VectorSignedToFloat((int)(short)((short)((uint)iVar3 >> 0x10) - sVar4),
                                       (byte)(uVar6 >> 0x15) & 3);
    if (fVar7 <= fVar9) {
      fVar7 = -fVar7;
    }
    if ((int)fVar7 * 0x10000 < 0x20000000) {
      *(undefined1 *)(param_1 + 0x469) = 1;
    }
  }
  return 0;
}

