#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_001692F8(int param_1,uint *param_2);
extern int func_004BCBE0(int param_1,int *param_2,undefined4 param_3);
extern int func_004C00F4(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern undefined4 DAT_00284b3c;
extern float DAT_00284b40;
extern float DAT_00284b44;

// USA 0028482C <- EU 00284854 (Ghidra, non-matching)
// GLOBAL DAT_00284b3c undefined4
// GLOBAL DAT_00284b40 float
// GLOBAL DAT_00284b44 float

undefined4 func_0028482C(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  float *pfVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  float *pfVar9;
  uint unaff_r10;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  _Alignas(8) unsigned char albw_frame[0xf0];
  #define local_e8 ((uint *)(albw_frame + 0x8))
  #define local_e0 (*(undefined4 * *)(albw_frame + 0x10))
  #define local_dc (*(undefined4 *)(albw_frame + 0x14))
  #define local_d8 (*(float *)(albw_frame + 0x18))
  #define local_d4 (*(float *)(albw_frame + 0x1c))
  #define local_d0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_cc (*(float *)(albw_frame + 0x24))
  #define local_c8 (*(uint *)(albw_frame + 0x28))
  #define local_94 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_90 (*(undefined1 *)(albw_frame + 0x60))
  #define local_8c ((uint *)(albw_frame + 0x64))
  #define local_84 (*(int * *)(albw_frame + 0x6c))
  #define local_80 (*(int *)(albw_frame + 0x70))
  #define local_7c (*(float *)(albw_frame + 0x74))
  #define local_78 (*(float *)(albw_frame + 0x78))
  #define local_74 (*(undefined4 *)(albw_frame + 0x7c))
  #define local_70 (*(float *)(albw_frame + 0x80))
  #define local_6c (*(uint *)(albw_frame + 0x84))
  #define local_38 (*(undefined4 *)(albw_frame + 0xb8))
  #define local_34 (*(undefined1 *)(albw_frame + 0xbc))
  iVar1 = func_004BCBE0(param_1,param_2,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(short *)(param_1 + 0x2e) == 0) {
    iVar1 = 0;
    fVar10 = DAT_00284b44;
    fVar11 = DAT_00284b40;
    uVar12 = DAT_00284b3c;
    do {
      piVar8 = (int *)(*(int *)(param_1 + 0x790) + iVar1 * 0xc);
      (**(code **)(*piVar8 + 8))(piVar8);
      (**(code **)(*piVar8 + 8))(piVar8);
      pfVar9 = (float *)piVar8[1];
      (**(code **)(*param_2 + 8))(param_2);
      pfVar4 = (float *)param_2[1];
      if (pfVar9 == pfVar4) {
LAB_00284984:
        local_80 = (int)*(char *)(*(int *)(param_1 + 0x790) + iVar1 * 0xc + 8);
        local_84 = &local_80;
        local_8c[1] = 3;
        local_38 = 0;
        local_34 = 0;
        local_8c[0] = 1;
        local_6c = unaff_r10 | 0xff;
        local_7c = fVar10;
        local_78 = fVar11;
        local_74 = uVar12;
        local_70 = fVar11;
        func_0016898C(*(int *)(param_1 + 0x7b4),local_8c);
        iVar1 = *(int *)(param_1 + 0x7b4);
        uVar7 = 0;
        if (0 < *(int *)(iVar1 + 0xc)) {
          do {
            uVar5 = *(uint *)(iVar1 + 0xc);
            iVar2 = iVar1 + 0xc;
            uVar6 = uVar5;
            if (uVar7 < uVar5) {
              uVar6 = *(uint *)(iVar1 + 0x14);
              iVar2 = uVar7 * 5;
            }
            if (uVar7 < uVar5) {
              iVar2 = uVar6 + iVar2 * 8;
            }
            else {
              iVar2 = *(int *)(iVar2 + 8);
            }
            if (fVar10 <= fVar11) {
              *(float *)(iVar2 + 0xc) = fVar10;
              *(float *)(iVar2 + 8) = fVar10;
            }
            else {
              *(float *)(iVar2 + 0xc) = *(float *)(iVar2 + 0x14);
              *(float *)(iVar2 + 8) = *(float *)(iVar2 + 0x14);
            }
            uVar7 = uVar7 + 1;
            *(float *)(iVar2 + 0x10) = fVar11;
            *(undefined4 *)(iVar2 + 0x18) = 0;
            *(undefined1 *)(iVar2 + 0x26) = 1;
            *(undefined1 *)(iVar2 + 0x25) = 1;
          } while ((int)uVar7 < *(int *)(iVar1 + 0xc));
        }
        func_00168E9C(*(int **)(param_1 + 0x7b4),*(int *)(param_1 + 0x7a0),(int *)0x0);
        return 1;
      }
      iVar2 = 0;
      do {
        if (*(char *)(piVar8[1] + iVar2) != *(char *)((int)pfVar4 + iVar2)) break;
        if (*(char *)(piVar8[1] + iVar2) == '\0') goto LAB_00284984;
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x40001);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0xb);
    piVar8 = *(int **)(param_1 + 0x7b4);
    uVar7 = 0;
    if (0 < piVar8[3]) {
      do {
        uVar5 = piVar8[3];
        piVar3 = piVar8 + 3;
        uVar6 = uVar5;
        if (uVar7 < uVar5) {
          uVar6 = piVar8[5];
          piVar3 = (int *)(uVar7 * 5);
        }
        if (uVar7 < uVar5) {
          iVar1 = uVar6 + (int)piVar3 * 8;
        }
        else {
          iVar1 = piVar3[2];
        }
        pfVar4 = (float *)(iVar1 + 8);
        if (fVar10 <= fVar11) {
          *(float *)(iVar1 + 0xc) = fVar10;
          *pfVar4 = fVar10;
        }
        else {
          *(float *)(iVar1 + 0xc) = *(float *)(iVar1 + 0x14);
          *pfVar4 = *(float *)(iVar1 + 0x14);
        }
        *(float *)(iVar1 + 0x10) = fVar11;
        *(undefined4 *)(iVar1 + 0x18) = 0;
        *(undefined1 *)(iVar1 + 0x26) = 1;
        *(undefined1 *)(iVar1 + 0x25) = 1;
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < piVar8[3]);
    }
    func_004C00F4(param_1,pfVar4,uVar7,piVar8);
    local_e8[1] = 3;
    local_e0 = &local_dc;
    local_c8 = (uint)piVar8 | 0xff;
    local_94 = 10;
    local_90 = 0;
    local_dc = 0xffffffff;
    local_e8[0] = 1;
    local_d8 = fVar10;
    local_d4 = fVar11;
    local_d0 = uVar12;
    local_cc = fVar11;
    func_001692F8(*(int *)(param_1 + 0x7b4),local_e8);
  }
  return 1;
}

