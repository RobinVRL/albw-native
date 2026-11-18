#include "ghidra_types.h"

extern float DAT_005674d4;

// USA 00567198 <- EU 00567170 (Ghidra, non-matching)
// GLOBAL DAT_005674d4 float

undefined4 func_00567198(int *param_1,ushort *param_2,int *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  float *pfVar10;
  uint uVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 local_30;
  
  iVar5 = param_1[1];
  if (iVar5 <= (int)(uint)*param_2) {
    return 0;
  }
  local_30 = 0;
  *(undefined1 *)((int)param_2 + 3) = 0;
  *(undefined1 *)(param_2 + 1) = 0;
  fVar4 = DAT_005674d4;
  iVar9 = *param_1;
  uVar6 = (uint)*param_2;
  do {
    uVar11 = uVar6;
    pbVar8 = (byte *)(iVar9 + uVar11 * 8);
    pfVar10 = (float *)(*param_3 + uVar11 * 0x18);
    if ((*(char *)(param_4 + 0x1e) == '\0') ||
       (((((*param_4 <= pfVar10[3] && (*pfVar10 <= param_4[3])) && (param_4[1] <= pfVar10[4])) &&
         ((pfVar10[1] <= param_4[4] && (param_4[2] <= pfVar10[5])))) && (pfVar10[2] <= param_4[5])))
       ) {
      bVar12 = true;
      iVar7 = 0;
      if (*(byte *)((int)param_4 + 0x79) != 0) {
        do {
          fVar16 = param_4[iVar7 * 4 + 6];
          fVar17 = param_4[iVar7 * 4 + 7];
          fVar13 = pfVar10[3];
          fVar1 = *pfVar10;
          if (fVar16 < DAT_005674d4) {
            fVar13 = *pfVar10;
            fVar1 = pfVar10[3];
          }
          fVar18 = param_4[iVar7 * 4 + 8];
          fVar14 = pfVar10[4];
          fVar2 = pfVar10[1];
          if (fVar17 < DAT_005674d4) {
            fVar14 = pfVar10[1];
            fVar2 = pfVar10[4];
          }
          fVar15 = pfVar10[5];
          fVar3 = pfVar10[2];
          if (fVar18 < DAT_005674d4) {
            fVar15 = pfVar10[2];
            fVar3 = pfVar10[5];
          }
          if (DAT_005674d4 <
              fVar17 * fVar2 + fVar18 * fVar3 + param_4[iVar7 * 4 + 9] + fVar16 * fVar1)
          goto LAB_00567328;
          if ((bVar12) &&
             (DAT_005674d4 <=
              fVar17 * fVar14 + fVar18 * fVar15 + param_4[iVar7 * 4 + 9] + fVar16 * fVar13)) {
            bVar12 = false;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)(uint)*(byte *)((int)param_4 + 0x79));
        if ((!bVar12) && (uVar6 = (uint)*pbVar8, uVar6 != uVar11)) goto LAB_0056732c;
      }
      uVar6 = (uint)pbVar8[2];
      local_30 = 1;
      *(byte *)(param_2 + 1) = pbVar8[3];
      *(byte *)((int)param_2 + 3) = pbVar8[4];
      break;
    }
LAB_00567328:
    uVar6 = (uint)pbVar8[2];
LAB_0056732c:
  } while (uVar6 != uVar11);
  if (uVar6 != uVar11) {
    do {
      pbVar8 = (byte *)(iVar9 + uVar6 * 8);
      pfVar10 = (float *)(*param_3 + uVar6 * 0x18);
      if ((*(char *)(param_4 + 0x1e) != '\0') &&
         ((((pfVar10[3] < *param_4 || (param_4[3] < *pfVar10)) || (pfVar10[4] < param_4[1])) ||
          (((param_4[4] < pfVar10[1] || (pfVar10[5] < param_4[2])) || (param_4[5] < pfVar10[2]))))))
      {
LAB_005674bc:
        *param_2 = (ushort)pbVar8[2];
        return 1;
      }
      bVar12 = true;
      iVar7 = 0;
      if (*(char *)((int)param_4 + 0x79) == '\0') {
LAB_00567528:
        uVar11 = (uint)pbVar8[2];
        *(byte *)((int)param_2 + 3) = (pbVar8[4] + pbVar8[3]) - (char)param_2[1];
      }
      else {
        do {
          fVar16 = param_4[iVar7 * 4 + 6];
          fVar17 = param_4[iVar7 * 4 + 7];
          fVar13 = pfVar10[3];
          fVar1 = *pfVar10;
          if (fVar16 < fVar4) {
            fVar13 = *pfVar10;
            fVar1 = pfVar10[3];
          }
          fVar18 = param_4[iVar7 * 4 + 8];
          fVar14 = pfVar10[4];
          fVar2 = pfVar10[1];
          if (fVar17 < fVar4) {
            fVar14 = pfVar10[1];
            fVar2 = pfVar10[4];
          }
          fVar15 = pfVar10[5];
          fVar3 = pfVar10[2];
          if (fVar18 < fVar4) {
            fVar15 = pfVar10[2];
            fVar3 = pfVar10[5];
          }
          if (fVar4 < fVar17 * fVar2 + fVar18 * fVar3 + param_4[iVar7 * 4 + 9] + fVar16 * fVar1)
          goto LAB_005674bc;
          if ((bVar12) &&
             (fVar4 <= fVar17 * fVar14 + fVar18 * fVar15 + param_4[iVar7 * 4 + 9] + fVar16 * fVar13)
             ) {
            bVar12 = false;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)(uint)*(byte *)((int)param_4 + 0x79));
        if ((bVar12) || (uVar11 = (uint)*pbVar8, uVar11 == uVar6)) goto LAB_00567528;
      }
      bVar12 = uVar11 != uVar6;
      uVar6 = uVar11;
    } while (bVar12);
  }
  *param_2 = (ushort)iVar5;
  return local_30;
}

