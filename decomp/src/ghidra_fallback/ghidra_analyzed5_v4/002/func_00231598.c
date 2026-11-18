#include "ghidra_types.h"

extern int func_001672F8(int param_1,uint param_2,float fparam_0,float fparam_1);
extern int func_002313DC(int param_1);
extern int func_00231524(int param_1);
extern int func_0031BEC0(int param_1,int param_2);
extern float DAT_00231770;

// USA 00231598 <- EU 00231598 (Ghidra, non-matching)
// GLOBAL DAT_00231770 float

void func_00231598(int param_1)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int in_r12;
  bool bVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  
  uVar4 = 0;
  uVar3 = (5 - (uint)*(byte *)(*(int *)(param_1 + 0x208) + 0x78)) * 0x1000000 >> 0x16;
  if (uVar3 != 0) {
    do {
      piVar2 = (int *)(param_1 + 0x168);
      if (uVar4 < 0x14) {
        piVar2 = piVar2 + uVar4;
      }
      if (*(char *)(*piVar2 + 0xe1) != '\0') {
        piVar2 = (int *)(param_1 + 0x168);
        if (uVar4 < 0x14) {
          piVar2 = piVar2 + uVar4;
        }
        iVar5 = *piVar2;
        *(undefined1 *)(iVar5 + 0xe3) = 1;
        cVar1 = *(char *)(iVar5 + 0xd);
        bVar6 = cVar1 == '\0';
        if (bVar6) {
          cVar1 = *(char *)(iVar5 + 0xe);
        }
        if ((!bVar6 || cVar1 != '\0') && (*(char *)(iVar5 + 0x3c) == '\0')) {
          func_00231524(iVar5 + 200);
          func_0031BEC0(iVar5 + 0x78,1);
        }
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)uVar3);
    if (0x13 < (int)uVar4) goto LAB_002316b0;
  }
  do {
    piVar2 = (int *)(param_1 + 0x168);
    if (uVar4 < 0x14) {
      piVar2 = piVar2 + uVar4;
    }
    if (*(char *)(*piVar2 + 0xe1) != '\0') {
      piVar2 = (int *)(param_1 + 0x168);
      if (uVar4 < 0x14) {
        piVar2 = piVar2 + uVar4;
      }
      iVar5 = *piVar2;
      *(undefined1 *)(iVar5 + 0xe3) = 0;
      cVar1 = *(char *)(iVar5 + 0xd);
      bVar6 = cVar1 == '\0';
      if (bVar6) {
        cVar1 = *(char *)(iVar5 + 0xe);
      }
      if ((!bVar6 || cVar1 != '\0') && (*(char *)(iVar5 + 0x3c) == '\0')) {
        func_002313DC(iVar5 + 200);
        func_0031BEC0(iVar5 + 0x78,0);
      }
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 0x14);
LAB_002316b0:
  fVar7 = (float)VectorUnsignedToFloat
                           ((uint)*(byte *)(*(int *)(param_1 + 0x208) + 0x78),
                            (byte)(in_fpscr >> 0x15) & 3);
  if ((*(int *)(param_1 + 0x1e4) != 0) && (-1 < *(short *)(param_1 + 0x1de))) {
    fVar9 = DAT_00231770;
    func_001672F8(*(int *)(param_1 + 0x1e4),(int)*(short *)(param_1 + 0x1de),DAT_00231770,
                  DAT_00231770);
    iVar5 = *(int *)(param_1 + 0x1e4);
    uVar3 = (uint)*(short *)(param_1 + 0x1de);
    uVar4 = *(uint *)(iVar5 + 8);
    if (uVar3 < uVar4) {
      in_r12 = *(int *)(iVar5 + 0xc);
    }
    if (uVar3 < uVar4) {
      in_r12 = in_r12 + uVar3 * 0x38;
    }
    else {
      in_r12 = *(int *)(iVar5 + 0xc);
    }
    fVar8 = fVar7;
    if (fVar9 > fVar7) {
      fVar8 = fVar9;
    }
    if ((fVar9 <= fVar7) && (*(float *)(in_r12 + 0x20) < fVar8)) {
      fVar8 = *(float *)(in_r12 + 0x20);
    }
    if (uVar3 < uVar4) {
      iVar5 = *(int *)(iVar5 + 0xc) + uVar3 * 0x38;
    }
    else {
      iVar5 = *(int *)(iVar5 + 0xc);
    }
    *(float *)(iVar5 + 0x14) = fVar8;
    *(float *)(*(int *)(iVar5 + 0x10) + 0x10) = fVar8;
  }
  return;
}

