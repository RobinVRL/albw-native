#include "ghidra_types.h"

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
extern int func_006580E4(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_001591b8;
extern float DAT_001591bc;
extern float DAT_001591c0;
extern int *DAT_001591c4;
extern float DAT_001591c8;
extern int DAT_001591cc;
extern float DAT_001591d0;
extern float DAT_001591d4;

// USA 00158FCC <- EU 00158FD0 (Ghidra, non-matching)
// GLOBAL DAT_001591b8 undefined4
// GLOBAL DAT_001591bc float
// GLOBAL DAT_001591c0 float
// GLOBAL DAT_001591c4 int *
// GLOBAL DAT_001591c8 float
// GLOBAL DAT_001591cc int
// GLOBAL DAT_001591d0 float
// GLOBAL DAT_001591d4 float

undefined4 func_00158FCC(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  float *pfVar6;
  int *piVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  
  func_004FBA18((int)param_1,7,0xff,-1,0x14,0,(ushort)DAT_001591b8,DAT_001591c0,DAT_001591bc);
  iVar2 = func_004F70A8(param_1);
  if (iVar2 != 0) {
    piVar7 = param_1 + 0x22f;
    if ((char)param_1[0x230] != '\x04') {
      if (*(int *)param_1[0x10e] != 0) {
        func_005568E8(*DAT_001591c4);
      }
      iVar2 = func_004F8998(param_1,0,(char *)0x0);
      if (iVar2 != 0) {
        func_006580E4(piVar7,4);
      }
    }
    piVar3 = (int *)(param_1[0x236] + (char)param_1[0x230] * 8);
    uVar4 = *(uint *)(param_1[0x236] + (char)param_1[0x230] * 8 + 4);
    piVar5 = (int *)(param_1[0x234] + ((int)uVar4 >> 1));
    if ((uVar4 & 1) != 0) {
      piVar3 = (int *)(*piVar3 + *piVar5);
    }
    (*(code *)*piVar3)(piVar5);
    iVar2 = *piVar7;
    *piVar7 = iVar2 + 1;
    if (param_1[0x233] != 0) {
      fVar8 = (float)VectorUnsignedToFloat(iVar2 + 1,(byte)(in_fpscr >> 0x15) & 3);
      func_00352210(param_1[0x233],1,fVar8);
    }
    if ((uint)param_1[0x239] < (uint)param_1[0x23a]) {
      param_1[0x239] = param_1[0x239] + 1;
    }
    iVar2 = func_00520EE4((int)param_1);
    if (iVar2 == 0) {
      bVar1 = func_00521078((int)param_1);
      if (bVar1) {
        fVar8 = func_004F944C();
        param_1[0xf8] = (int)ALBW_AS_U32(fVar8);
      }
      else if ((char)param_1[0x230] != '\x04') {
        fVar9 = func_004F898C();
        fVar8 = ALBW_AS_F32(param_1[0xf8]) - fVar9;
        if (ALBW_AS_F32(param_1[0xf8]) - fVar9 < DAT_001591c8) {
          fVar8 = DAT_001591c8;
        }
        param_1[0xf8] = (int)ALBW_AS_U32(fVar8);
      }
    }
    pfVar6 = (float *)0x7fffffff;
    fVar8 = DAT_001591d0;
    if (param_1[0x24f] != 0) {
      fVar8 = DAT_001591d4;
    }
    func_0051D2F4(param_1 + 0x24e,param_1[0x24f],DAT_001591cc,0x7fffffff,fVar8);
    func_004F48F0((int)param_1);
    func_004F5588((int)param_1);
    return func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x0,pfVar6);
  }
  return 0;
}

