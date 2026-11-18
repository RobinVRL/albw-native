#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_001b5580;
extern float DAT_001b5584;
extern float DAT_001b5588;
extern float DAT_001b558c;
extern float DAT_001b5590;
extern float DAT_001b5594;

// USA 001B546C <- EU 001B546C (Ghidra, non-matching)
// GLOBAL DAT_001b5580 int *
// GLOBAL DAT_001b5584 float
// GLOBAL DAT_001b5588 float
// GLOBAL DAT_001b558c float
// GLOBAL DAT_001b5590 float
// GLOBAL DAT_001b5594 float

void func_001B546C(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  bool bVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define local_30 (*(float *)(albw_frame + 0x10))
  fVar1 = DAT_001b5584;
  puVar4 = *(undefined4 **)(param_1 + 0x994);
  iVar2 = *DAT_001b5580;
  puVar5 = puVar4 + *(int *)(param_1 + 0x98c);
  if (puVar4 != puVar5) {
    fVar12 = DAT_001b558c;
    fVar13 = DAT_001b5590;
    fVar10 = DAT_001b5588;
    fVar11 = DAT_001b5594;
    do {
      if ((*(uint *)*puVar4 != 0) &&
         (iVar3 = func_0052FBA0(iVar2 + 0x3dbbc,*(uint *)*puVar4), iVar3 != 0)) {
        func_00115C70(&local_38,(float *)(param_1 + 0x3d0),(float *)(iVar3 + 0x3d0));
        fVar8 = local_38 * local_38 + local_30 * local_30;
        bVar7 = SBORROW4((int)ALBW_AS_U32(fVar1),(int)ALBW_AS_U32(fVar8));
        iVar3 = (int)ALBW_AS_U32(fVar1) - (int)ALBW_AS_U32(fVar8);
        bVar6 = fVar1 == fVar8;
        if ((int)ALBW_AS_U32(fVar8) < (int)ALBW_AS_U32(fVar1)) {
          bVar7 = SBORROW4((int)ALBW_AS_U32(fVar8),0x34000000);
          iVar3 = (int)ALBW_AS_U32(fVar8) + -0x34000000;
          bVar6 = fVar8 == 1.1920929e-07;
        }
        if (!bVar6 && iVar3 < 0 == bVar7) {
          fVar9 = SQRT(local_38 * local_38 + local_34 * local_34 + local_30 * local_30);
          if (fVar11 < fVar9) {
            fVar9 = ((fVar10 - SQRT(fVar8)) * fVar12 * fVar13) / fVar9;
            local_38 = local_38 * fVar9;
            local_34 = local_34 * fVar9;
            local_30 = local_30 * fVar9;
          }
          func_00115C54((float *)(param_1 + 0x3dc),(float *)(param_1 + 0x3dc),&local_38);
        }
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 != puVar5);
  }
  return;
}

