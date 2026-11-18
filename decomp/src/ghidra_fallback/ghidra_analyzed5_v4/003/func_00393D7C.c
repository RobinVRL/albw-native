#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001DDDE8(int param_1,float *param_2,int param_3,float fparam_0);
extern int func_001E8268(int param_1,int *param_2,undefined4 *param_3,undefined4 *param_4);
extern int func_003616E4(int param_1);
extern int func_00393850(int param_1);
extern int func_00394234(void);
extern void func_004AD9E8(int param_1,uint param_2,uint param_3,uint param_4,float fparam_0);
extern int func_004BDB64(int param_1,float *param_2);
extern int func_004D8548(float *param_1,float *param_2,float *param_3,float fparam_0,float fparam_1, float fparam_2,float fparam_3,float fparam_4);
extern int func_00518F90(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_00581B9C(int param_1);
extern int func_00582250(int param_1);
extern int func_0058DB88(int param_1);
extern float DAT_00394108;
extern undefined4 DAT_0039410c;
extern float DAT_00394110;
extern int *DAT_00394114;
extern float DAT_00394118;
extern int *DAT_0039411c;
extern int *DAT_00394120;
extern undefined4 *DAT_00394124;
extern int DAT_00394128;
extern int *DAT_0039412c;
extern undefined4 DAT_00394130;
extern int *DAT_00394134;
extern int DAT_00394138;
extern uint *DAT_0039413c;
extern undefined4 DAT_00394140;
extern undefined4 *DAT_00394144;

// USA 00393D7C <- EU 00393D58 (Ghidra, non-matching)
// GLOBAL DAT_00394108 float
// GLOBAL DAT_0039410c undefined4
// GLOBAL DAT_00394110 float
// GLOBAL DAT_00394114 int *
// GLOBAL DAT_00394118 float
// GLOBAL DAT_0039411c int *
// GLOBAL DAT_00394120 int *
// GLOBAL DAT_00394124 undefined4 *
// GLOBAL DAT_00394128 int
// GLOBAL DAT_0039412c int *
// GLOBAL DAT_00394130 undefined4
// GLOBAL DAT_00394134 int *
// GLOBAL DAT_00394138 int
// GLOBAL DAT_0039413c uint *
// GLOBAL DAT_00394140 undefined4
// GLOBAL DAT_00394144 undefined4 *

undefined4 func_00393D7C(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  uint *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  float *pfVar14;
  float *pfVar15;
  uint in_fpscr;
  float fVar16;
  float fparam_0;
  undefined4 uVar17;
  
  uVar7 = DAT_00394140;
  puVar8 = DAT_0039413c;
  piVar4 = DAT_00394134;
  puVar12 = DAT_00394124;
  piVar3 = DAT_00394120;
  piVar2 = DAT_0039411c;
  piVar1 = DAT_00394114;
  pfVar14 = (float *)(param_1 + 0xb24);
  iVar11 = *DAT_00394120;
  iVar6 = *DAT_0039411c;
  pfVar15 = (float *)(param_1 + 0xb18);
  switch(param_2) {
  case 0:
    if (*(short *)(DAT_00394128 + param_1) != 0) {
      return 0;
    }
    func_003616E4(iVar6);
    return 1;
  case 1:
    fVar16 = (float)VectorUnsignedToFloat
                              (*(undefined4 *)(param_1 + 0xb50),(byte)(in_fpscr >> 0x15) & 3);
    func_004D8548((float *)(param_1 + 0xb30),pfVar15,pfVar14,fVar16,DAT_00394118,DAT_00394118,
                  DAT_00394108,DAT_00394118);
    if (*(int *)(*piVar3 + 0x18) != 0) {
      func_001E8268(*(int *)(*piVar3 + 0x18),(int *)(param_1 + 0xb10),
                    (undefined4 *)(param_1 + 0xb30),puVar12);
    }
    uVar10 = *(uint *)(param_1 + 0xb50);
    if (*(uint *)(param_1 + 0xb54) <= uVar10) {
      func_004AD9E8(*DAT_0039412c,2,0,1,fVar16);
      return 1;
    }
    goto LAB_00393e70;
  case 2:
    uVar7 = func_00393850(param_1);
    return uVar7;
  case 3:
    uVar10 = *(uint *)(param_1 + 0xb68);
    if (*(uint *)(param_1 + 0xb6c) <= uVar10) {
      uVar10 = *(uint *)(param_1 + 0x2a0);
      if ((int)uVar10 < 0) {
        return 0;
      }
      iVar11 = *DAT_0039412c;
      uVar7 = DAT_0039410c;
      iVar6 = func_00581B9C(iVar11);
      if ((iVar6 == 1) && (puVar8 = (uint *)func_00582250(iVar11), uVar10 < *puVar8)) {
        iVar6 = *(int *)(puVar8[2] + uVar10 * 4);
      }
      else {
        iVar6 = 0;
      }
      *pfVar15 = *(float *)(param_1 + 0xb30);
      *(undefined4 *)(param_1 + 0xb1c) = *(undefined4 *)(param_1 + 0xb34);
      *(undefined4 *)(param_1 + 0xb20) = *(undefined4 *)(param_1 + 0xb38);
      iVar11 = 0;
      if (*(int *)(iVar6 + 0x28) != 0) {
        if (*(uint *)(iVar6 + 0x20) < 3) {
          iVar11 = 0;
        }
        else {
          iVar11 = *(int *)(*(int *)(iVar6 + 0x28) + 8);
        }
      }
      *pfVar14 = *(float *)(iVar11 + 0x18);
      *(undefined4 *)(param_1 + 0xb28) = *(undefined4 *)(iVar11 + 0x1c);
      *(undefined4 *)(param_1 + 0xb2c) = *(undefined4 *)(iVar11 + 0x20);
      *(undefined4 *)(param_1 + 0xb54) = 0xf0;
      *(undefined4 *)(param_1 + 0xb58) = uVar7;
      *(undefined4 *)(param_1 + 0xb50) = 0;
      return 1;
    }
    break;
  case 4:
    fparam_0 = (float)VectorUnsignedToFloat
                                (*(undefined4 *)(param_1 + 0xb50),(byte)(in_fpscr >> 0x15) & 3);
    fVar16 = DAT_00394118;
    func_004D8548((float *)(param_1 + 0xb30),pfVar15,pfVar14,fparam_0,DAT_00394118,DAT_00394118,
                  DAT_00394108,DAT_00394118);
    if (*(int *)(*piVar3 + 0x18) != 0) {
      func_001E8268(*(int *)(*piVar3 + 0x18),(int *)(param_1 + 0xb10),
                    (undefined4 *)(param_1 + 0xb30),puVar12);
    }
    uVar7 = DAT_00394130;
    uVar10 = *(uint *)(param_1 + 0xb50);
    if (*(uint *)(param_1 + 0xb54) <= uVar10) {
      pfVar14 = *(float **)(*piVar2 + 0x20);
      bVar5 = false;
      if (*pfVar14 == fVar16) {
        bVar5 = pfVar14[2] == fVar16;
      }
      if (!bVar5) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0xb6c) = 0x78;
      *(undefined4 *)(param_1 + 0xb70) = uVar7;
      *(undefined4 *)(param_1 + 0xb68) = 0;
      func_00394234();
      return 1;
    }
LAB_00393e70:
    *(uint *)(param_1 + 0xb50) = uVar10 + 1;
    return 0;
  case 5:
    uVar10 = *(uint *)(param_1 + 0xb68);
    if (*(uint *)(param_1 + 0xb6c) <= uVar10) {
      puVar12 = *(undefined4 **)(DAT_00394138 + *DAT_00394134);
      uVar17 = DAT_0039410c;
      fVar16 = DAT_00394110;
      if (*(undefined4 **)(*DAT_00394134 + 0x3dbc8) != puVar12) {
        do {
          puVar13 = (undefined4 *)*puVar12;
          if ((puVar13 != (undefined4 *)0x0) && (*(char *)((int)puVar13 + 0x2d7) == '\0')) {
            if (((*puVar8 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_0039413c), iVar6 != 0)) {
              *DAT_00394144 = uVar7;
            }
            iVar6 = (**(code **)*puVar13)(puVar13,DAT_00394144);
            puVar9 = (undefined4 *)0x0;
            if (iVar6 != 0) {
              puVar9 = puVar13;
            }
            if ((puVar9 != (undefined4 *)0x0) && (*(int *)(*piVar3 + 0x18) != 0)) {
              func_004BDB64((int)puVar9,(float *)(*(int *)(*piVar3 + 0x18) + 0x1b0));
            }
          }
          puVar12 = puVar12 + 1;
        } while (*(undefined4 **)(*piVar4 + 0x3dbc8) != puVar12);
      }
      if (*(int *)(*piVar3 + 0x18) != 0) {
        func_001DDDE8(*piVar2,(float *)(*(int *)(*piVar3 + 0x18) + 0x1b0),3,fVar16);
      }
      *(undefined4 *)(param_1 + 0xb6c) = 0xf0;
      *(undefined4 *)(param_1 + 0xb70) = uVar17;
      *(undefined4 *)(param_1 + 0xb68) = 0;
      return 1;
    }
    break;
  case 6:
    if (*(int *)(iVar11 + 0x18) != 0) {
      param_2 = 3;
      func_001DDDE8(iVar6,(float *)(*(int *)(iVar11 + 0x18) + 0x1b0),3,DAT_00394110);
    }
    uVar10 = *(uint *)(param_1 + 0xb68);
    if (*(uint *)(param_1 + 0xb6c) <= uVar10) {
      func_00518F90(*piVar1,*(uint *)(param_1 + 0xb6c),param_2,param_4);
      return 1;
    }
    break;
  case 7:
    if (*(int *)(iVar11 + 0x18) != 0) {
      func_001DDDE8(iVar6,(float *)(*(int *)(iVar11 + 0x18) + 0x1b0),3,DAT_00394110);
    }
    bVar5 = func_0058DB88(*piVar1);
    if (bVar5) {
      *(undefined1 *)(param_1 + 0xbb9) = 1;
      return 1;
    }
    return 0;
  case 8:
    if (*(int *)(iVar11 + 0x18) == 0) {
      return 0;
    }
    func_001DDDE8(iVar6,(float *)(*(int *)(iVar11 + 0x18) + 0x1b0),3,DAT_00394110);
    return 0;
  default:
    return 1;
  }
  *(uint *)(param_1 + 0xb68) = uVar10 + 1;
  return 0;
}

