#include "ghidra_types.h"

extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int *DAT_0034f918;
extern int *DAT_0034f91c;
extern int *DAT_0034f920;
extern int *DAT_0034f924;
extern int *DAT_0034f928;
extern int *DAT_0034f92c;
extern int *DAT_0034f930;
extern float DAT_0034f934;
extern float DAT_0034f938;
extern float DAT_0034f93c;
extern float DAT_0034f940;
extern int *DAT_0034f944;

// USA 0034F760 <- EU 0034F73C (Ghidra, non-matching)
// GLOBAL DAT_0034f918 int *
// GLOBAL DAT_0034f91c int *
// GLOBAL DAT_0034f920 int *
// GLOBAL DAT_0034f924 int *
// GLOBAL DAT_0034f928 int *
// GLOBAL DAT_0034f92c int *
// GLOBAL DAT_0034f930 int *
// GLOBAL DAT_0034f934 float
// GLOBAL DAT_0034f938 float
// GLOBAL DAT_0034f93c float
// GLOBAL DAT_0034f940 float
// GLOBAL DAT_0034f944 int *

undefined4 func_0034F760(int param_1,int param_2)

{
  uint uVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar2 = *(ushort *)(param_2 + 0x20);
  if ((((uVar2 & 0x800) == 0) && ((uVar2 & 0x1f) != 6)) && ((uVar2 & 0x7e0) != 0x1c0)) {
    iVar4 = func_0052FBA0(*DAT_0034f918 + 0x3dbbc,*(uint *)(param_2 + 0x28));
    if (iVar4 == 0) {
      return 0;
    }
    iVar4 = func_00588BE4(iVar4);
    if (((((iVar4 != *DAT_0034f91c) && (iVar4 != *DAT_0034f920)) &&
         ((iVar4 != *DAT_0034f924 && ((iVar4 != *DAT_0034f928 && (iVar4 != *DAT_0034f92c)))))) &&
        (iVar4 != *DAT_0034f930)) &&
       ((uint)ALBW_AS_U32(DAT_0034f934) <
        (uint)ALBW_AS_U32((*(float *)(param_2 + 4) * *(float *)(param_1 + 0x1f8) +
               *(float *)(param_2 + 8) * *(float *)(param_1 + 0x1fc) +
              *(float *)(param_2 + 0xc) * *(float *)(param_1 + 0x200))))) {
      fVar7 = *(float *)(param_2 + 0x10) - *(float *)(param_1 + 0x204);
      fVar8 = *(float *)(param_2 + 0x14) - *(float *)(param_1 + 0x208);
      bVar3 = false;
      fVar10 = *(float *)(param_2 + 0x18) - *(float *)(param_1 + 0x20c);
      fVar9 = *(float *)(param_1 + 0x21c);
      fVar8 = fVar7 * fVar7 + fVar8 * fVar8 + fVar10 * fVar10;
      bVar5 = DAT_0034f938 < fVar9;
      bVar6 = NAN(DAT_0034f938) || NAN(fVar9);
      fVar7 = DAT_0034f938;
      if (DAT_0034f938 <= fVar9) {
        bVar5 = fVar9 < fVar8;
        bVar6 = NAN(fVar9) || NAN(fVar8);
        fVar7 = fVar8;
      }
      if (fVar7 != fVar9 && bVar5 == bVar6) {
        bVar3 = true;
        fVar7 = DAT_0034f93c;
        if (*(char *)(param_1 + 0x220) == '\0') {
          fVar7 = DAT_0034f940;
        }
        if ((fVar8 < fVar7 * fVar7) && ((*(ushort *)(param_2 + 0x20) & 0x1f) == 4)) {
          uVar1 = (*(ushort *)(param_2 + 0x20) & 0x7e0) >> 5;
          if (uVar1 == 5) {
            return 0;
          }
          if (uVar1 == 2) {
            return 0;
          }
        }
      }
      if (*(char *)(param_1 + 0x130) != '\0') {
        *(undefined1 *)(*DAT_0034f944 + 0xbf4c) = 1;
      }
      if (bVar3) {
        *(float *)(param_1 + 0x21c) = fVar8;
        *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_2 + 0x10);
        *(undefined4 *)(param_1 + 0x214) = *(undefined4 *)(param_2 + 0x14);
        *(undefined4 *)(param_1 + 0x218) = *(undefined4 *)(param_2 + 0x18);
        return 1;
      }
    }
  }
  return 0;
}

