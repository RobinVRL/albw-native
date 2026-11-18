#include "ghidra_types.h"

extern float func_002760A4(int param_1,undefined4 *param_2);
extern undefined4 func_0028D580(uint *param_1,int param_2,undefined1 param_3,undefined1 param_4,uint param_5);
extern int func_0052E8A0(int param_1);
extern int func_0053EDD8(int param_1);
extern float func_0053EE30(int param_1);
extern int func_0058E2B8(int *param_1);
extern int DAT_002d1644;
extern float DAT_002d1648;
extern float DAT_002d164c;
extern int *DAT_002d1650;

// USA 002D1418 <- EU 002D13F4 (Ghidra, non-matching)
// GLOBAL DAT_002d1644 int
// GLOBAL DAT_002d1648 float
// GLOBAL DAT_002d164c float
// GLOBAL DAT_002d1650 int *

undefined4 func_002D1418(int *param_1)

{
  _Alignas(8) unsigned char albw_frame[0x30]; /* entry_sp - 0x30 .. entry_sp + 0x0 */
#define stack0xffffffd8 (*(undefined4 *)(albw_frame + 0x8))
  char cVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint in_fpscr;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  #define local_24 ((int *)(albw_frame + 0xc))
  iVar6 = param_1[2];
  fVar9 = func_0053EE30(iVar6 + 0x5c);
  fVar11 = DAT_002d1648;
  fVar10 = DAT_002d1648;
  if (DAT_002d1644 < (int)ALBW_AS_U32(fVar9)) {
    fVar10 = DAT_002d164c;
  }
  *(float *)(iVar6 + 0x100) = fVar10;
  if ((char)param_1[6] == '\0') {
    fVar10 = *(float *)(param_1[4] + 4);
    uVar5 = in_fpscr & 0xfffffff | (uint)(fVar10 < fVar11) << 0x1f |
            (uint)(fVar10 == fVar11) << 0x1e;
    uVar8 = uVar5 | (uint)(NAN(fVar10) || NAN(fVar11)) << 0x1c;
    iVar7 = *(int *)(param_1[2] + 0xac);
    bVar2 = (byte)(uVar5 >> 0x18);
    if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(uVar8 >> 0x1c) & 1)) {
      bVar3 = func_0052E8A0(*param_1);
      if (bVar3) {
        *(float *)(param_1[4] + 4) = fVar11;
        return 0;
      }
      iVar4 = param_1[1];
      if (((*(byte *)(iVar4 + 0x324) & 1) == 0 && (*(byte *)(iVar4 + 0x324) & 8) == 0) &&
         (*(char *)(iVar4 + 0x168) == '\0')) {
        fVar10 = func_002760A4(*DAT_002d1650,(undefined4 *)param_1[3]);
        cVar1 = *(char *)((int)param_1 + 0x19);
        fVar10 = *(float *)(param_1[3] + 4) - fVar10;
        if (cVar1 != '\0') {
          iVar6 = 0x40000000;
        }
        if (cVar1 == '\0') {
          iVar6 = -0x40000000;
        }
        if (ALBW_AS_F32(param_1[7]) == fVar11) {
          uVar5 = uVar8 & 0xfffffff | (uint)(fVar10 < fVar11) << 0x1f;
          if (fVar10 == fVar11 || SUB41(uVar5 >> 0x1f,0) != (NAN(fVar10) || NAN(fVar11))) {
            *(int *)(param_1[2] + 0xac) = iVar6;
          }
          else {
            if (cVar1 == '\0') {
              iVar7 = iVar7 + -0x16c16c0;
            }
            else {
              iVar7 = iVar7 + 0x16c16c0;
            }
            *(int *)(param_1[2] + 0xac) = iVar7;
            fVar11 = (float)VectorSignedToFloat(iVar7 - iVar6,(byte)(uVar5 >> 0x15) & 3);
            param_1[7] = (int)ALBW_AS_U32((fVar11 / fVar10));
          }
        }
        else {
          fVar11 = (float)VectorSignedToFloat(iVar6,(byte)((uVar8 & 0xfffffff) >> 0x15) & 3);
          iVar7 = (int)(fVar11 + fVar10 * ALBW_AS_F32(param_1[7]));
          uVar5 = func_0058E2B8((int *)&stack0xffffffd8);
          local_24[0] = iVar7 - iVar6;
          uVar8 = func_0058E2B8(local_24);
          if (uVar8 < uVar5) {
            *(int *)(param_1[2] + 0xac) = iVar7;
          }
        }
      }
      else {
        if (((*(uint *)(iVar4 + 0x328) & 0x80) != 0) && (*(char *)(iVar4 + 0x33c) == '\f')) {
          return 0;
        }
        if (*(char *)((int)param_1 + 0x19) == '\0') {
          iVar6 = 0x40;
        }
        else {
          iVar6 = 0x41;
        }
        *(undefined4 *)(param_1[2] + 0xac) = 0;
        iVar7 = param_1[2];
        func_0028D580((uint *)(iVar7 + 0x3c),iVar6,1,0,6);
        func_0028D580((uint *)(iVar7 + 0x5c),iVar6,1,0,6);
        *(undefined1 *)(param_1 + 6) = 1;
      }
    }
    else {
      if (*(char *)((int)param_1 + 0x19) == '\0') {
        iVar7 = iVar7 + -0x16c16c0;
      }
      else {
        iVar7 = iVar7 + 0x16c16c0;
      }
      *(int *)(param_1[2] + 0xac) = iVar7;
    }
  }
  else {
    iVar6 = func_0053EDD8(param_1[2] + 0x3c);
    if (iVar6 != 0) {
      return 0;
    }
  }
  return 1;
}

