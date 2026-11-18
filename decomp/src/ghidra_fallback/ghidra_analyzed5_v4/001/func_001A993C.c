#include "ghidra_types.h"

extern int func_00151150(int param_1,float *param_2);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern void func_004F48F0(int param_1);
extern void func_004F5588(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F70A8(int *param_1);
extern float func_004F898C(void);
extern int func_004F8998(int *param_1,int param_2,char *param_3);
extern float func_004F944C(void);
extern int func_004FBA18(int param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5, undefined1 param_6,ushort param_7,float fparam_0,float fparam_1);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520EE4(int param_1);
extern int func_00521078(int param_1);
extern int func_005568E8(int param_1);
extern int func_0065A984(undefined4 *param_1,undefined1 param_2);
extern uint DAT_001a9b5c;
extern float DAT_001a9b60;
extern float DAT_001a9b64;
extern int *DAT_001a9b68;
extern float DAT_001a9b6c;
extern int DAT_001a9b70;
extern float DAT_001a9b74;
extern float DAT_001a9b78;

// USA 001A993C <- EU 001A993C (Ghidra, non-matching)
// GLOBAL DAT_001a9b5c uint
// GLOBAL DAT_001a9b60 float
// GLOBAL DAT_001a9b64 float
// GLOBAL DAT_001a9b68 int *
// GLOBAL DAT_001a9b6c float
// GLOBAL DAT_001a9b70 int
// GLOBAL DAT_001a9b74 float
// GLOBAL DAT_001a9b78 float

/* WARNING: Variable defined which should be unmapped: objStack_20 */

void func_001A993C(int *param_1)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  float *pfVar7;
  int *piVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define objStack_20 ((uint *)(albw_frame + 0x0))
  objStack_20[0] = 0x14;
  objStack_20[1] = 0;
  objStack_20[2] = DAT_001a9b5c;
  uVar5 = objStack_20[2];
  (*(undefined2 *)((char *)&objStack_20[2] + 0)) = (ushort)DAT_001a9b5c;
  uVar1 = (ushort)objStack_20[2];
  objStack_20[2] = uVar5;
  func_004FBA18((int)param_1,9,0xff,-1,0x14,0,uVar1,DAT_001a9b64,DAT_001a9b60);
  iVar3 = func_004F70A8(param_1);
  if (iVar3 != 0) {
    piVar8 = param_1 + 0x22f;
    if ((char)param_1[0x230] != '\x04') {
      if (*(int *)param_1[0x10e] != 0) {
        func_005568E8(*DAT_001a9b68);
      }
      iVar3 = func_004F8998(param_1,0,(char *)0x0);
      if (iVar3 != 0) {
        func_0065A984(piVar8,4);
      }
    }
    piVar4 = (int *)(param_1[0x236] + (char)param_1[0x230] * 8);
    uVar5 = *(uint *)(param_1[0x236] + (char)param_1[0x230] * 8 + 4);
    piVar6 = (int *)(param_1[0x234] + ((int)uVar5 >> 1));
    if ((uVar5 & 1) != 0) {
      piVar4 = (int *)(*piVar4 + *piVar6);
    }
    (*(code *)*piVar4)(piVar6);
    iVar3 = *piVar8;
    *piVar8 = iVar3 + 1;
    if (param_1[0x233] != 0) {
      fVar9 = (float)VectorUnsignedToFloat(iVar3 + 1,(byte)(in_fpscr >> 0x15) & 3);
      func_00352210(param_1[0x233],1,fVar9);
    }
    if ((uint)param_1[0x239] < (uint)param_1[0x23a]) {
      param_1[0x239] = param_1[0x239] + 1;
    }
    iVar3 = func_00520EE4((int)param_1);
    if (iVar3 == 0) {
      bVar2 = func_00521078((int)param_1);
      if (bVar2) {
        fVar9 = func_004F944C();
        param_1[0xf8] = (int)ALBW_AS_U32(fVar9);
      }
      else if ((char)param_1[0x230] != '\x04') {
        fVar10 = func_004F898C();
        fVar9 = ALBW_AS_F32(param_1[0xf8]) - fVar10;
        if (ALBW_AS_F32(param_1[0xf8]) - fVar10 < DAT_001a9b6c) {
          fVar9 = DAT_001a9b6c;
        }
        param_1[0xf8] = (int)ALBW_AS_U32(fVar9);
      }
    }
    pfVar7 = (float *)0x7fffffff;
    if (param_1[0x251] == 0) {
      func_0051D2F4(param_1 + 0x250,0,DAT_001a9b70,0x7fffffff,DAT_001a9b78);
    }
    else {
      func_0051D2F4(param_1 + 0x250,param_1[0x251],DAT_001a9b70,0x7fffffff,DAT_001a9b74);
    }
    func_004F48F0((int)param_1);
    func_004F5588((int)param_1);
    func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x0,pfVar7);
    objStack_20[1] = *(uint *)(param_1[0x107] + 0x14);
    objStack_20[0] = param_1[0x247];
    objStack_20[2] = objStack_20[0];
    func_00151150(param_1[0x107],(float *)objStack_20);
  }
  return;
}

