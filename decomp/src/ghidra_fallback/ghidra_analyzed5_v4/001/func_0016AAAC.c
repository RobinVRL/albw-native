// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_001B74C0(int param_1);
extern int func_0026F910(int param_1);
extern int func_0026FB60(int param_1,int *param_2,uint param_3,int param_4,undefined4 param_5, undefined4 param_6);
extern int func_00270D04(uint *param_1,uint param_2,int param_3,int *param_4,undefined4 *param_5, undefined8 param_6,int param_7);
extern int func_00273210(int param_1,short *param_2);
extern int func_003FA6B0(int *param_1);
extern int func_0051E6AC(int param_1);
extern int func_00522E00(int param_1);
extern int func_005569BC(int param_1);
extern int func_00556A04();
extern int func_00556E64(int param_1);
extern int *DAT_0016af08;
extern int *DAT_0016af0c;
extern uint DAT_0016af10;
extern int *DAT_0016af14;
extern int *DAT_0016af18;

// USA 0016AAAC <- EU 0016AAAC (Ghidra, non-matching)
// GLOBAL DAT_0016af08 int *
// GLOBAL DAT_0016af0c int *
// GLOBAL DAT_0016af10 uint
// GLOBAL DAT_0016af14 int *
// GLOBAL DAT_0016af18 int *

void func_0016AAAC(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int *piVar5;
  byte *pbVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  float fVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  ulonglong uVar17;
  
  *(undefined1 *)(param_1 + 0xfa6) = 0;
  piVar10 = DAT_0016af08;
  if ((((*(char *)(param_1 + 0xfa8) == '\0') && (*(char *)(param_1 + 0xfa7) == '\0')) &&
      (*(int *)(param_1 + 0xf74) != 0)) && (*(int *)(*DAT_0016af08 + 0x28) != 0)) {
    func_00273210(*DAT_0016af0c,(short *)0x1);
    uVar4 = 0;
    do {
      iVar8 = param_1 + 0x284;
      if (uVar4 < 0x33) {
        iVar8 = param_1 + 0x284 + uVar4 * 0x38;
      }
      uVar4 = uVar4 + 1;
      *(undefined1 *)(iVar8 + 0x15) = 1;
    } while ((int)uVar4 < 0x33);
    piVar9 = (int *)(param_1 + 0xf9c);
    if (*(char *)(*piVar10 + 0x22) == '\0') {
      uVar4 = 0;
      do {
        piVar10 = piVar9;
        if (uVar4 < 2) {
          piVar10 = piVar9 + uVar4;
        }
        func_0026F910(*piVar10);
        piVar10 = piVar9;
        if (uVar4 < 2) {
          piVar10 = piVar9 + uVar4;
        }
        uVar4 = uVar4 + 1;
        if (*(char *)(*piVar10 + 0x71) != '\0') {
          *(undefined1 *)(param_1 + 0xfa6) = 1;
        }
      } while ((int)uVar4 < 2);
      uVar4 = 0;
      if (0 < *(int *)(param_1 + 0x90)) {
        do {
          if (uVar4 < *(uint *)(param_1 + 0x90)) {
            iVar8 = *(int *)(*(int *)(param_1 + 0x98) + uVar4 * 4);
          }
          else {
            iVar8 = 0;
          }
          func_001B74C0(iVar8);
          uVar4 = uVar4 + 1;
        } while ((int)uVar4 < *(int *)(param_1 + 0x90));
      }
    }
    piVar10 = *(int **)(param_1 + 0x74);
    uVar17 = (ulonglong)DAT_0016af10;
    uVar4 = 0;
    do {
      piVar5 = (int *)(param_1 + 0x284);
      if (uVar4 < 0x33) {
        piVar5 = (int *)(param_1 + 0x284 + uVar4 * 0x38);
      }
      iVar8 = 0;
      do {
        iVar1 = iVar8 * 0x20;
        iVar8 = iVar8 + 1;
        *(undefined1 *)(*piVar10 + (uVar4 & 0xffff) * 0x100 + iVar1 + 0x1c) = 0;
      } while (iVar8 < 8);
      if ((*piVar5 != 0) && (*(char *)((int)piVar5 + 0x15) != '\0')) {
        if ((char)piVar5[5] == '\0') {
          *(undefined4 *)(*(int *)(param_1 + 0x10) + (uVar4 & 0xffff) * 0x278 + 0x234) = 0xff000000;
        }
        else {
          fVar12 = ALBW_AS_F32(uVar17);
          uVar11 = VectorFloatToUnsigned(ALBW_AS_F32(piVar5[7]) * fVar12,3);
          uVar16 = VectorFloatToUnsigned(ALBW_AS_F32(piVar5[6]) * fVar12,3);
          uVar13 = VectorFloatToUnsigned(ALBW_AS_F32(piVar5[8]) * fVar12,3);
          iVar8 = VectorFloatToUnsigned(ALBW_AS_F32(piVar5[9]) * fVar12,3);
          *(uint *)(*(int *)(param_1 + 0x10) + (uVar4 & 0xffff) * 0x278 + 0x234) =
               (uVar11 & 0xff) << 8 | uVar16 & 0xff | (uVar13 & 0xff) << 0x10 | iVar8 << 0x18;
        }
        if ((((*(byte *)(*piVar5 + 0x50) & 2) != 0) || (*(char *)((int)piVar5 + 0x16) != '\0')) ||
           (*(char *)(param_1 + 0xfa4) != '\0')) {
          pbVar6 = (byte *)(*(int *)(param_1 + 0x10) + (uVar4 & 0xffff) * 0x278);
          *pbVar6 = *pbVar6 | 1;
        }
        iVar8 = *(int *)(param_1 + 0x10) + (uVar4 & 0xffff) * 0x278;
        *(undefined4 *)(iVar8 + 0x168) = 0;
        *(undefined4 *)(iVar8 + 0x16c) = 0;
        uVar11 = 0;
        if (*(char *)((int)piVar5 + 0x17) != '\0') {
          uVar13 = 0;
          do {
            piVar7 = piVar9;
            if (uVar13 < 2) {
              piVar7 = piVar9 + uVar13;
            }
            cVar2 = func_0026FB60(*piVar7,(int *)(param_1 + 0x10),uVar4 & 0xffff,uVar11 & 0xffff,
                                  param_2,param_3);
            if (cVar2 != '\0') {
              uVar11 = uVar11 + 1;
            }
            uVar13 = uVar13 + 1;
          } while ((int)uVar13 < 2);
        }
        func_00270D04((uint *)*piVar5,uVar4,uVar11,(int *)(param_1 + 0x10),piVar5 + 2,
                      CONCAT44(param_3,param_2),(int)(char)piVar5[5]);
        *(undefined1 *)((int)piVar5 + 0x15) = 0;
        *(undefined1 *)((int)piVar5 + 0x16) = 0;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 0x33);
    func_003FA6B0(*(int **)(param_1 + 0x74));
    piVar10 = DAT_0016af14;
    *(undefined1 *)(param_1 + 0xfa9) = 0;
    *(undefined1 *)(param_1 + 0xfaa) = 0;
    *(undefined1 *)(param_1 + 0xfab) = 1;
    *(undefined4 *)(param_1 + 0xf78) = 0;
    iVar8 = *piVar10;
    if ((((iVar8 != 0) && (bVar3 = func_00556E64(iVar8), !bVar3)) &&
        (bVar3 = func_005569BC(iVar8), !bVar3)) && (iVar8 = func_00556A04(iVar8), iVar8 == 0)) {
      iVar8 = func_0051E6AC(*DAT_0016af18);
      fVar12 = *(float *)(iVar8 + 8);
      fVar15 = *(float *)(iVar8 + 0x18);
      fVar14 = *(float *)(iVar8 + 0x28);
      uVar4 = func_00522E00(param_1);
      piVar10 = (int *)(param_1 + 0x284);
      if (uVar4 < 0x33) {
        piVar10 = (int *)(param_1 + 0x284 + uVar4 * 0x38);
      }
      if (*(int *)*piVar10 == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)((int *)*piVar10)[2];
      }
      *(float *)(param_1 + 0xf88) =
           fVar12 * *(float *)(iVar8 + 0x40) + fVar15 * *(float *)(iVar8 + 0x44) +
           fVar14 * *(float *)(iVar8 + 0x48);
      return;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xfab) = 0;
  }
  return;
}

