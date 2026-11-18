#include "ghidra_types.h"

extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern int func_0021AF14(int param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_00491A18(float *param_1,uint *param_2,float *param_3);
extern int func_004CEAF0(int param_1);
extern void func_004F48F0(int param_1);
extern void func_004F5588(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F70A8(int *param_1);
extern int func_004F8998(int *param_1,int param_2,char *param_3);
extern int func_004FACD4(int param_1,int *param_2,undefined4 param_3,int *param_4);
extern int func_00588BE4(int param_1);
extern int func_0065DFCC(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0021c32c;
extern float *DAT_0021c330;
extern int DAT_0021c334;

// USA 0021C134 <- EU 0021C134 (Ghidra, non-matching)
// GLOBAL DAT_0021c32c int *
// GLOBAL DAT_0021c330 float *
// GLOBAL DAT_0021c334 int

void func_0021C134(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  float fVar7;
  float *pfVar8;
  int *piVar9;
  uint in_fpscr;
  float fVar10;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 ((uint *)(albw_frame + 0x8))
  #define afStack_48 ((float *)(albw_frame + 0x18))
  iVar1 = param_1[0x4d3];
  param_1[0x4d3] = iVar1 + 1U;
  if (99 < iVar1 + 1U) {
    param_1[0x4d3] = 0;
  }
  iVar1 = func_004F70A8(param_1);
  if (iVar1 != 0) {
    piVar9 = param_1 + 0x22f;
    if ((((*(char *)((int)param_1 + 0x1376) == '\0') && ((char)param_1[0x230] != '\x03')) &&
        ((char)param_1[0x230] != '\x05')) &&
       (iVar1 = func_004F8998(param_1,0,(char *)0x0), iVar1 != 0)) {
      param_1[0x140] = 0;
      func_0065DFCC(piVar9,3);
    }
    pfVar8 = (float *)param_1[0x234];
    piVar2 = (int *)(param_1[0x236] + (char)param_1[0x230] * 8);
    uVar4 = *(uint *)(param_1[0x236] + (char)param_1[0x230] * 8 + 4);
    piVar5 = (int *)((int)pfVar8 + ((int)uVar4 >> 1));
    if ((uVar4 & 1) != 0) {
      piVar2 = (int *)(*piVar2 + *piVar5);
    }
    (*(code *)*piVar2)(piVar5);
    iVar1 = *piVar9;
    *piVar9 = iVar1 + 1;
    if (param_1[0x233] != 0) {
      fVar10 = (float)VectorUnsignedToFloat(iVar1 + 1,(byte)(in_fpscr >> 0x15) & 3);
      func_00352210(param_1[0x233],1,fVar10);
    }
    func_004F48F0((int)param_1);
    if ((char)param_1[0x230] != '\0') {
      func_004F5588((int)param_1);
    }
    uVar6 = 0;
    func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x0,pfVar8);
    func_004FACD4((int)param_1,(int *)0x0,uVar6,(int *)pfVar8);
    func_0021AF14((int)param_1);
    iVar3 = func_00588BE4((int)param_1);
    iVar1 = DAT_0021c334;
    if (iVar3 == *DAT_0021c32c) {
      fVar10 = *DAT_0021c330;
      fVar7 = DAT_0021c330[2];
      param_1[0x119] = (int)ALBW_AS_U32(fVar10);
      param_1[0x11a] = iVar1;
      param_1[0x11b] = (int)ALBW_AS_U32(fVar7);
      param_1[0x113] = (int)ALBW_AS_U32(fVar10);
      param_1[0x114] = iVar1;
      param_1[0x115] = (int)ALBW_AS_U32(fVar7);
    }
    local_58[2] = param_1[0x4d4];
    local_58[0] = 0;
    local_58[1] = 0;
    func_00491A18(afStack_48,local_58,DAT_0021c330);
    iVar1 = param_1[0x103];
    *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
    func_001157FC((float *)(iVar1 + 0x80),(float *)(param_1[0x103] + 0x80),afStack_48);
    func_004CEAF0(param_1[0x103]);
  }
  return;
}

