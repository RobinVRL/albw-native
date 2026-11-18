#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_004A97F8(int param_1,float *param_2,float *param_3,int *param_4,uint param_5);
extern int func_0068B2DC(float *param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3, float fparam_4,float fparam_5);
extern undefined DAT_00000006;
extern float DAT_004a82d0;
extern int DAT_004a82d4;
extern uint *DAT_004a82d8;

// USA 004A8030 <- EU 004A8008 (Ghidra, non-matching)
// GLOBAL DAT_00000006 undefined
// GLOBAL DAT_004a82d0 float
// GLOBAL DAT_004a82d4 int
// GLOBAL DAT_004a82d8 uint *

int func_004A8030(int param_1,int *param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  float *pfVar11;
  uint uVar12;
  float *pfVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define afStack_58 ((float *)(albw_frame + 0x8))
  #define afStack_4c ((float *)(albw_frame + 0x14))
  #define local_40 (*(float * *)(albw_frame + 0x20))
  #define local_38 (*(int *)(albw_frame + 0x28))
  #define local_30 (*(int *)(albw_frame + 0x30))
  #define piStack_2c (*(int * *)(albw_frame + 0x34))
  #define local_28 (*(uint *)(albw_frame + 0x38))
  local_30 = param_1;
  piStack_2c = param_2;
  local_28 = param_3;
  func_0068B2DC(afStack_58,DAT_004a82d0,DAT_004a82d0,DAT_004a82d0,DAT_004a82d0,DAT_004a82d0,
                DAT_004a82d0);
  iVar1 = DAT_004a82d4;
  if (((*(uint *)(DAT_004a82d4 + 0x20) & 1) == 0) &&
     (iVar4 = func_00100174((int *)(DAT_004a82d4 + 0x20)), puVar2 = DAT_004a82d8, iVar4 != 0)) {
    puVar14 = DAT_004a82d8 + 3;
    *DAT_004a82d8 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    func_0010B3EC(puVar2,100,(int)puVar14);
  }
  iVar3 = local_30;
  iVar4 = 0;
  *(undefined1 *)(local_30 + 0xbf4c) = 0;
  local_40 = (float *)0x0;
  local_38 = local_30 + 0xbf3c;
  do {
    pfVar13 = local_40;
    if ((local_28 & 1 << ((uint)local_40 & 0xff)) != 0) {
      iVar5 = *(int *)(local_38 + 0xc);
      for (iVar15 = *(int *)(local_38 + 4) - iVar5; puVar2 = DAT_004a82d8,
          iVar15 != local_38 - *(int *)(local_38 + 0xc);
          iVar15 = *(int *)(iVar5 + iVar15 + 4) - iVar5) {
        iVar10 = iVar15 + 0xb4;
        iVar6 = iVar15 + 0xb4;
        if (local_40 < &DAT_00000006) {
          iVar10 = iVar10 + (int)pfVar13 * 0xc;
          iVar6 = iVar15 + 0xb4 + (int)pfVar13 * 0xc;
        }
        for (iVar6 = *(int *)(iVar6 + 4); iVar6 != iVar10; iVar6 = *(int *)(iVar6 + 4)) {
          piVar9 = *(int **)(iVar6 + 8);
          *(int **)(iVar1 + 8) = piVar9;
          uVar8 = piVar9[8];
          bVar17 = param_2[3] != uVar8;
          if (bVar17) {
            uVar8 = (uint)*(byte *)(piVar9 + 0x11);
          }
          if (bVar17 && uVar8 != 0) {
            pfVar11 = (float *)0x0;
            if (*param_2 != 0) {
              pfVar11 = afStack_58;
            }
            iVar7 = (**(code **)(*piVar9 + 0xc))(piVar9,pfVar11,param_2);
            pfVar11 = (float *)(uint)*(byte *)(iVar3 + 0xbf4c);
            if (iVar7 != 0) {
              iVar4 = 1;
            }
            if (pfVar11 != (float *)0x0) goto LAB_004a825c;
          }
          *(undefined4 *)(iVar1 + 8) = 0;
        }
      }
      *DAT_004a82d8 = 0;
      if ((float *)param_2[7] != (float *)0x0) {
        func_004A97F8(local_30,(float *)param_2[8],(float *)param_2[7],(int *)puVar2,(uint)local_40)
        ;
      }
      uVar8 = *puVar2;
      uVar16 = 0;
      if (0 < (int)uVar8) {
        do {
          if (uVar16 < *DAT_004a82d8) {
            iVar5 = *(int *)(DAT_004a82d8[2] + uVar16 * 4);
            iVar15 = *(int *)(DAT_004a82d8[2] + uVar16 * 4);
          }
          else {
            iVar5 = 0;
            iVar15 = 0;
          }
          for (iVar15 = *(int *)(iVar15 + 4); iVar15 != iVar5; iVar15 = *(int *)(iVar15 + 4)) {
            piVar9 = *(int **)(iVar15 + 8);
            *(int **)(iVar1 + 8) = piVar9;
            uVar12 = piVar9[8];
            bVar17 = param_2[3] != uVar12;
            if (bVar17) {
              uVar12 = (uint)*(byte *)(piVar9 + 0x11);
            }
            if (bVar17 && uVar12 != 0) {
              pfVar13 = (float *)0x0;
              if (*param_2 != 0) {
                pfVar13 = afStack_58;
              }
              iVar10 = (**(code **)(*piVar9 + 0xc))(piVar9,pfVar13,param_2);
              pfVar11 = (float *)(uint)*(byte *)(iVar3 + 0xbf4c);
              if (iVar10 != 0) {
                iVar4 = 1;
              }
              if (pfVar11 != (float *)0x0) goto LAB_004a825c;
            }
            *(undefined4 *)(iVar1 + 8) = 0;
          }
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < (int)uVar8);
      }
    }
    pfVar11 = (float *)((int)local_40 + 1);
    local_40 = pfVar11;
  } while ((int)pfVar11 < 6);
LAB_004a8298:
  if (iVar4 != 0) {
    pfVar11 = (float *)*param_2;
  }
  if (iVar4 != 0 && pfVar11 != (float *)0x0) {
    func_00115C54(pfVar11,pfVar11,afStack_58);
    func_00115C54((float *)*param_2,(float *)*param_2,afStack_4c);
  }
  return iVar4;
LAB_004a825c:
  *(undefined4 *)(iVar1 + 8) = 0;
  goto LAB_004a8298;
}

