#include "ghidra_types.h"

extern int func_003DC398(void);
extern int func_00419924(void);
extern int func_0056D550(int param_1);
extern int func_00691F30(uint param_1,uint param_2);
extern uint DAT_00415428;
extern uint DAT_0041542c;
extern uint DAT_00415430;
extern float DAT_00415434;
extern float DAT_00415438;
extern int DAT_0041543c;

// USA 0041522C <- EU 0041520C (Ghidra, non-matching)
// GLOBAL DAT_00415428 uint
// GLOBAL DAT_0041542c uint
// GLOBAL DAT_00415430 uint
// GLOBAL DAT_00415434 float
// GLOBAL DAT_00415438 float
// GLOBAL DAT_0041543c int

void func_0041522C(uint *param_1,uint *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  float *pfVar11;
  uint uVar12;
  float fVar13;
  
  if (*(char *)((int)param_1 + 0x1f6) == '\x01') {
    uVar4 = *param_2;
    uVar8 = param_2[1];
    uVar9 = *param_1;
    *param_1 = uVar4 + uVar9;
    param_1[1] = uVar8 + param_1[1] + (uint)CARRY4(uVar4,uVar9);
    param_1[2] = param_1[2] + 1;
    iVar5 = func_003DC398();
    param_1[3] = iVar5 + param_1[3];
    if ((char)param_1[0x6d] == '\x01') {
      uVar4 = param_2[1];
      uVar2 = (ulonglong)*param_2 * 3 +
              ((ulonglong)
               (((int)uVar4 >> 0x1f) * DAT_00415428 +
               (int)((ulonglong)DAT_00415428 * (ulonglong)uVar4 >> 0x20)) << 0x20 |
              (ulonglong)DAT_00415428 * (ulonglong)uVar4 & 0xffffffff) +
              CONCAT44(uVar4 * 3,(int)((ulonglong)DAT_00415428 * (ulonglong)*param_2 >> 0x20));
      uVar8 = (uint)(uVar2 >> 0x20);
      iVar5 = (int)uVar8 >> 0x1f;
      lVar3 = (ulonglong)DAT_0041542c * (ulonglong)uVar8 +
              CONCAT44(iVar5 * DAT_0041542c,
                       (int)((ulonglong)DAT_0041542c * (uVar2 & 0xffffffff) >> 0x20));
      lVar1 = (ulonglong)DAT_00415430 * (uVar2 & 0xffffffff);
      uVar12 = (uint)((ulonglong)lVar3 >> 0x20);
      uVar9 = (uint)((ulonglong)DAT_00415430 * (ulonglong)uVar8);
      uVar4 = (int)((ulonglong)lVar1 >> 0x20) + (uint)CARRY4((uint)lVar3,(uint)lVar1);
      iVar10 = ((int)uVar4 >> 0x1f) + ((int)uVar12 >> 0x1f) + (uint)CARRY4(uVar4,uVar12) +
               iVar5 * DAT_00415430 + (int)((ulonglong)DAT_00415430 * (ulonglong)uVar8 >> 0x20) +
               (uint)CARRY4(uVar4 + uVar12,uVar9);
      uVar4 = uVar4 + uVar12 + uVar9 >> 7 | iVar10 * 0x2000000;
      fVar6 = ALBW_AS_F32(func_00691F30(uVar4 + -iVar5,(iVar10 >> 7) + (uint)CARRY4(uVar4,-iVar5)));
      pfVar11 = (float *)(param_1 + 4);
      fVar6 = fVar6 * DAT_00415434;
      if ((fVar6 < DAT_00415438) || (DAT_0041543c < (int)ALBW_AS_U32(fVar6))) {
        param_1[0x6c] = param_1[0x6c] + 1;
      }
      fVar13 = *pfVar11;
      if (*pfVar11 < fVar6) {
        fVar13 = fVar6;
      }
      iVar5 = (int)fVar6;
      *pfVar11 = fVar13;
      if (iVar5 < 0x65) {
        pfVar11[iVar5 + 2] = ALBW_AS_F32(((int)ALBW_AS_U32(pfVar11[iVar5 + 2]) + 1));
      }
      param_1[0x6b] = param_1[0x6b] + 1;
      param_1[5] = (uint)ALBW_AS_U32((ALBW_AS_F32(param_1[5]) + fVar6));
      if ((param_1[0x7e] != 0) && ((int)param_1[0x81] < (int)param_1[0x80])) {
        pfVar11 = (float *)(param_1[0x7e] + param_1[0x81] * 8);
        puVar7 = func_00419924();
        iVar5 = func_0056D550((int)puVar7);
        *(char *)(pfVar11 + 1) = (char)iVar5;
        *(char *)((int)pfVar11 + 5) = (char)param_1[0x7f];
        *pfVar11 = fVar6;
        param_1[0x81] = param_1[0x81] + 1;
      }
      param_1[0x7f] = 0;
    }
  }
  return;
}

