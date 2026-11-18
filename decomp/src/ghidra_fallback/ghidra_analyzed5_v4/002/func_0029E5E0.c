// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern float func_00115DC8(float *param_1);
extern int func_001514C8(int param_1);
extern int func_00292184(int param_1,undefined4 param_2);
extern int func_0053FD30(int param_1,int param_2);
extern int func_00556E64(int param_1);
extern int *DAT_0029e764;
extern uint DAT_0029e768;
extern float DAT_0029e76c;
extern int DAT_0029e770;

// USA 0029E5E0 <- EU 0029E5BC (Ghidra, non-matching)
// GLOBAL DAT_0029e764 int *
// GLOBAL DAT_0029e768 uint
// GLOBAL DAT_0029e76c float
// GLOBAL DAT_0029e770 int

undefined4 func_0029E5E0(int param_1)

{
  uint uVar1;
  bool bVar2;
  ushort uVar3;
  int iVar4;
  float *pfVar5;
  uint extraout_r1;
  int iVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  iVar4 = func_001514C8(param_1);
  if (iVar4 == 0) {
    iVar4 = *DAT_0029e764;
    bVar2 = func_00556E64(iVar4);
    if (!bVar2) {
LAB_0029e640:
      iVar6 = func_0053FD30(*(int *)(iVar4 + 0x14),0);
      if ((iVar6 == 0) && ((*(ushort *)(param_1 + 0x2e) & 0xff) != 1)) {
        return 0;
      }
      return func_00292184(*(int *)(iVar4 + 0x14),param_1);
    }
    if ((*(ushort *)(param_1 + 0x2e) & 0xff) == 5) {
      local_20 = *(float *)(*(int *)(iVar4 + 0x28) + 0x10);
      local_28 = *(float *)(*(int *)(iVar4 + 0x28) + 8);
      local_24 = DAT_0029e76c;
      fVar9 = DAT_0029e76c;
      func_00115DC8(&local_28);
      fVar8 = *(float *)(param_1 + 0x460) * local_28 + *(float *)(param_1 + 0x464) * local_24 +
              *(float *)(param_1 + 0x468) * local_20;
      if (fVar8 <= fVar9) {
        fVar8 = -fVar8;
      }
      if ((int)ALBW_AS_U32(fVar8) <= DAT_0029e770) {
        if (((*(ushort *)(param_1 + 0x2e) & 0xff) != 5) ||
           ((uVar3 = *(ushort *)(param_1 + 0x30) & 0xff, uVar3 != 5 &&
            ((uVar3 != 6 && uVar3 != 7) && uVar3 != 8)))) goto LAB_0029e640;
        pfVar5 = *(float **)(iVar4 + 0x1c);
        fVar9 = *pfVar5;
        fVar8 = pfVar5[1];
        fVar10 = pfVar5[2];
        iVar6 = *(int *)(param_1 + 0x414);
        bVar2 = *(float *)(iVar6 + 0x34) == fVar9;
        bVar7 = fVar9 <= *(float *)(iVar6 + 0x34);
        if (!bVar7 || bVar2) {
          bVar2 = fVar9 == *(float *)(iVar6 + 0x40);
          bVar7 = *(float *)(iVar6 + 0x40) <= fVar9;
        }
        if (!bVar7 || bVar2) {
          bVar2 = *(float *)(iVar6 + 0x38) == fVar8;
          bVar7 = fVar8 <= *(float *)(iVar6 + 0x38);
          if (!bVar7 || bVar2) {
            bVar2 = fVar8 == *(float *)(iVar6 + 0x44);
            bVar7 = *(float *)(iVar6 + 0x44) <= fVar8;
          }
          if (!bVar7 || bVar2) {
            bVar2 = *(float *)(iVar6 + 0x3c) == fVar10;
            bVar7 = fVar10 <= *(float *)(iVar6 + 0x3c);
            if (!bVar7 || bVar2) {
              bVar2 = fVar10 == *(float *)(iVar6 + 0x48);
              bVar7 = *(float *)(iVar6 + 0x48) <= fVar10;
            }
            if (!bVar7 || bVar2) goto LAB_0029e640;
          }
        }
      }
    }
    else {
      iVar6 = **(int **)(iVar4 + 0x24);
      uVar11 = func_00114608(DAT_0029e768,extraout_r1);
      uVar1 = (uint)((int)uVar11 + iVar6) >> 0x1d;
      if ((uVar1 != 1 && uVar1 != 3) && (uVar1 != 5 && uVar1 != 7)) goto LAB_0029e640;
    }
  }
  return 0;
}

