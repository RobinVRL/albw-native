#include "ghidra_types.h"

extern int func_004905E0(float fparam_0);
extern int func_004F4A68();
extern int func_004FB220(int param_1,int param_2,int param_3);
extern float DAT_00501efc;
extern int DAT_00501f00;

// USA 00501D50 <- EU 00501D28 (Ghidra, non-matching)
// GLOBAL DAT_00501efc float
// GLOBAL DAT_00501f00 int

undefined4 func_00501D50(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;
  uint in_fpscr;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  iVar2 = func_004FB220(param_1,*(ushort *)(param_2 + 0x20) & 0x1f,
                        (*(ushort *)(param_2 + 0x20) & 0x7e0) >> 5);
  if (iVar2 == 0) {
    fVar7 = *(float *)(param_2 + 8);
    if (fVar7 <= DAT_00501efc) {
      fVar7 = -fVar7;
    }
    if ((int)ALBW_AS_U32(fVar7) < DAT_00501f00) {
      fVar8 = *(float *)(param_2 + 0xc);
      fVar7 = *(float *)(param_2 + 4);
      uVar6 = in_fpscr & 0xfffffff | (uint)(fVar8 == DAT_00501efc) << 0x1e;
      bVar5 = false;
      if (SUB41(uVar6 >> 0x1e,0)) {
        uVar6 = in_fpscr & 0xfffffff | (uint)(fVar7 == DAT_00501efc) << 0x1e;
        bVar5 = SUB41(uVar6 >> 0x1e,0);
      }
      fVar9 = DAT_00501efc;
      if (bVar5) {
        uVar3 = 0;
      }
      else {
        uVar6 = uVar6 & 0xfffffff;
        if (NAN(fVar8) || NAN(DAT_00501efc)) {
          if (NAN(fVar7) || NAN(DAT_00501efc)) {
            uVar6 = uVar6 | (uint)(fVar8 == fVar7) << 0x1e | (uint)(fVar7 <= fVar8) << 0x1d;
            bVar1 = (byte)(uVar6 >> 0x18);
            if ((bool)(bVar1 >> 5 & 1) && !(bool)(bVar1 >> 6)) {
              iVar2 = func_004905E0(fVar8 / fVar7);
              uVar3 = 0xc0000000 - iVar2;
            }
            else {
              iVar2 = func_004905E0(fVar7 / fVar8);
              uVar3 = iVar2 + 0x80000000;
            }
          }
          else {
            fVar8 = -fVar8;
            uVar3 = uVar6 | (uint)(fVar8 < fVar7) << 0x1f;
            uVar6 = uVar3 | (uint)(NAN(fVar8) || NAN(fVar7)) << 0x1c;
            if ((byte)(uVar3 >> 0x1f) == ((byte)(uVar6 >> 0x1c) & 1)) {
              iVar2 = func_004905E0(fVar7 / fVar8);
              uVar3 = 0x80000000 - iVar2;
            }
            else {
              iVar2 = func_004905E0(fVar8 / fVar7);
              uVar3 = iVar2 + 0x40000000;
            }
          }
        }
        else if (NAN(fVar7) || NAN(DAT_00501efc)) {
          fVar7 = -fVar7;
          uVar3 = uVar6 | (uint)(fVar8 < fVar7) << 0x1f;
          uVar6 = uVar3 | (uint)(NAN(fVar8) || NAN(fVar7)) << 0x1c;
          if ((byte)(uVar3 >> 0x1f) == ((byte)(uVar6 >> 0x1c) & 1)) {
            iVar2 = func_004905E0(fVar7 / fVar8);
            uVar3 = -iVar2;
          }
          else {
            iVar2 = func_004905E0(fVar8 / fVar7);
            uVar3 = iVar2 + 0xc0000000;
          }
        }
        else {
          uVar3 = uVar6 | (uint)(fVar8 < fVar7) << 0x1f;
          uVar6 = uVar3 | (uint)(NAN(fVar8) || NAN(fVar7)) << 0x1c;
          if ((byte)(uVar3 >> 0x1f) == ((byte)(uVar6 >> 0x1c) & 1)) {
            uVar3 = func_004905E0(fVar7 / fVar8);
          }
          else {
            iVar2 = func_004905E0(fVar8 / fVar7);
            uVar3 = 0x40000000 - iVar2;
          }
        }
      }
      fVar7 = (float)VectorSignedToFloat((int)(short)((short)((uint)(*(int *)(param_1 + 1000) +
                                                                    -0x80000000) >> 0x10) -
                                                     (short)(uVar3 >> 0x10)),
                                         (byte)(uVar6 >> 0x15) & 3);
      if (fVar7 <= fVar9) {
        fVar7 = -fVar7;
      }
      if ((int)fVar7 * 0x10000 < 0x60000000) {
        *(uint *)(param_1 + 0xa64) = *(int *)(param_1 + 0xa64) + (uVar3 >> 0x10);
        *(char *)(param_1 + 0xa68) = *(char *)(param_1 + 0xa68) + '\x01';
      }
    }
    uVar4 = func_004F4A68(param_1,param_2);
    return uVar4;
  }
  return 0;
}

