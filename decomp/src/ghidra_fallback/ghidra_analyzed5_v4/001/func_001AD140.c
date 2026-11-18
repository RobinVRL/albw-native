// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004905E0(float fparam_0);
extern void func_004F48F0(int param_1);
extern void func_004F5588(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F70A8(int *param_1);
extern int func_004F8998(int *param_1,int param_2,char *param_3);
extern int func_0051D27C(int *param_1,int param_2,int param_3);
extern int func_0051D37C(int *param_1,int param_2,int param_3);
extern int func_00521184();
extern int func_00588BE4(int param_1);
extern int func_0058E2B8(int *param_1);
extern int func_0065AC0C(undefined4 *param_1,undefined1 param_2);
extern float DAT_001ad528;
extern int DAT_001ad52c;
extern float DAT_001ad530;
extern float DAT_001ad534;
extern float DAT_001ad538;
extern int *DAT_001ad53c;
extern int *DAT_001ad540;
extern int *DAT_001ad544;
extern int *DAT_001ad548;
extern int *DAT_001ad54c;
extern int *DAT_001ad550;
extern int *DAT_001ad554;

// USA 001AD140 <- EU 001AD140 (Ghidra, non-matching)
// GLOBAL DAT_001ad528 float
// GLOBAL DAT_001ad52c int
// GLOBAL DAT_001ad530 float
// GLOBAL DAT_001ad534 float
// GLOBAL DAT_001ad538 float
// GLOBAL DAT_001ad53c int *
// GLOBAL DAT_001ad540 int *
// GLOBAL DAT_001ad544 int *
// GLOBAL DAT_001ad548 int *
// GLOBAL DAT_001ad54c int *
// GLOBAL DAT_001ad550 int *
// GLOBAL DAT_001ad554 int *

void func_001AD140(int *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  float *pfVar6;
  int *piVar7;
  bool bVar8;
  bool bVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  float fVar12;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define aiStack_20 ((int *)(albw_frame + 0x0))
  iVar2 = func_004F70A8(param_1);
  if (iVar2 != 0) {
    piVar7 = param_1 + 0x22f;
    if ((char)param_1[0x230] != '\v' && (char)param_1[0x230] != '\f') {
      iVar2 = func_004F8998(param_1,0,(char *)0x0);
      if (iVar2 != 0) {
        func_0065AC0C(piVar7,0xb);
      }
      iVar2 = DAT_001ad52c;
      fVar11 = DAT_001ad528;
      cVar1 = (char)param_1[0x230];
      if ((cVar1 != '\v' && cVar1 != '\f') && cVar1 != '\x01') {
        uVar3 = param_1[0x23c] + 0x2d82d80;
        param_1[0x23c] = uVar3;
        iVar2 = iVar2 + (uVar3 >> 0x18) * 0x10;
        fVar10 = (float)VectorUnsignedToFloat(uVar3 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
        param_1[0x15d] =
             (int)ALBW_AS_U32((DAT_001ad534 +
                  (*(float *)(iVar2 + 8) + *(float *)(iVar2 + 0xc) * fVar10 * fVar11) * DAT_001ad530
                  ));
      }
    }
    pfVar6 = (float *)param_1[0x234];
    uVar3 = *(uint *)(param_1[0x236] + (char)param_1[0x230] * 8 + 4);
    piVar4 = (int *)(param_1[0x236] + (char)param_1[0x230] * 8);
    piVar5 = (int *)((int)pfVar6 + ((int)uVar3 >> 1));
    if ((uVar3 & 1) != 0) {
      piVar4 = (int *)(*piVar4 + *piVar5);
    }
    (*(code *)*piVar4)(piVar5);
    iVar2 = *piVar7;
    *piVar7 = iVar2 + 1;
    if (param_1[0x233] != 0) {
      fVar11 = (float)VectorUnsignedToFloat(iVar2 + 1,(byte)(in_fpscr >> 0x15) & 3);
      func_00352210(param_1[0x233],1,fVar11);
    }
    fVar11 = DAT_001ad538;
    param_1[0xf8] = (int)ALBW_AS_U32(DAT_001ad538);
    param_1[0xf5] = param_1[0xdb];
    func_004F48F0((int)param_1);
    func_004F5588((int)param_1);
    iVar2 = func_00588BE4((int)param_1);
    piVar7 = DAT_001ad540;
    if (iVar2 == *DAT_001ad53c) {
      fVar10 = ALBW_AS_F32(param_1[0xf7]);
      bVar8 = false;
      if (fVar10 == fVar11) {
        bVar8 = ALBW_AS_F32(param_1[0xf8]) == fVar11;
      }
      bVar9 = false;
      if (bVar8) {
        bVar9 = ALBW_AS_F32(param_1[0xf9]) == fVar11;
      }
      if (!bVar9) {
        fVar12 = ALBW_AS_F32(param_1[0xf9]);
        if (fVar12 == fVar11 && fVar10 == fVar11) {
          iVar2 = 0;
        }
        else if (fVar12 < fVar11) {
          if (fVar10 < fVar11) {
            if (fVar10 < fVar12) {
              iVar2 = func_004905E0(fVar12 / fVar10);
              iVar2 = -0x40000000 - iVar2;
            }
            else {
              iVar2 = func_004905E0(fVar10 / fVar12);
              iVar2 = iVar2 + -0x80000000;
            }
          }
          else {
            fVar12 = -fVar12;
            if (fVar12 < fVar10) {
              iVar2 = func_004905E0(fVar12 / fVar10);
              iVar2 = iVar2 + 0x40000000;
            }
            else {
              iVar2 = func_004905E0(fVar10 / fVar12);
              iVar2 = -0x80000000 - iVar2;
            }
          }
        }
        else if (fVar10 < fVar11) {
          fVar10 = -fVar10;
          if (fVar12 < fVar10) {
            iVar2 = func_004905E0(fVar12 / fVar10);
            iVar2 = iVar2 + -0x40000000;
          }
          else {
            iVar2 = func_004905E0(fVar10 / fVar12);
            iVar2 = -iVar2;
          }
        }
        else if (fVar12 < fVar10) {
          iVar2 = func_004905E0(fVar12 / fVar10);
          iVar2 = 0x40000000 - iVar2;
        }
        else {
          iVar2 = func_004905E0(fVar10 / fVar12);
        }
        func_0051D27C(param_1 + 0xfa,iVar2,*piVar7);
      }
    }
    else if ((char)param_1[0x230] != '\v' && (char)param_1[0x230] != '\f') {
      if (NAN(ALBW_AS_F32(param_1[0xf7])) || NAN(fVar11)) {
        func_0051D27C(param_1 + 0xfa,-*DAT_001ad544,*DAT_001ad540);
      }
      else {
        func_0051D27C(param_1 + 0xfa,*DAT_001ad544,*DAT_001ad540);
      }
    }
    func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x0,pfVar6);
    iVar2 = func_00588BE4((int)param_1);
    if ((iVar2 == *DAT_001ad548) || (iVar2 = func_00588BE4((int)param_1), iVar2 == *DAT_001ad54c)) {
      aiStack_20[0] = func_00521184((int)param_1);
      aiStack_20[0] = aiStack_20[0] - param_1[0xfa];
      uVar3 = func_0058E2B8(aiStack_20);
      if (0x3fffffff < uVar3) {
        aiStack_20[0] = -0x80000000 - aiStack_20[0];
      }
      func_0051D37C(aiStack_20,-*DAT_001ad550,*DAT_001ad550);
      func_0051D27C(param_1 + 0x26f,aiStack_20[0],*DAT_001ad554);
      param_1[0x23b] = param_1[0x26f];
    }
    param_1[0x13e] = param_1[0x26e];
  }
  return;
}

