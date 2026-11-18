#include "ghidra_types.h"

extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_00200D84(int param_1);
extern int func_002917A4(int param_1,float *param_2,undefined4 param_3,float fparam_0);
extern int func_00291A38(int param_1,float *param_2,float fparam_0);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern void func_004F48F0(int param_1);
extern void func_004F5588(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F70A8(int *param_1);
extern int func_004F8998(int *param_1,int param_2,char *param_3);
extern int func_00588BE4(int param_1);
extern float func_0058A404(int param_1);
extern undefined4 func_0065D120(undefined4 *param_1,undefined1 param_2,float fparam_0);
extern int *DAT_00201824;
extern float DAT_00201828;
extern int *DAT_0020182c;
extern int DAT_00201830;
extern int DAT_00201834;

// USA 002015EC <- EU 002015EC (Ghidra, non-matching)
// GLOBAL DAT_00201824 int *
// GLOBAL DAT_00201828 float
// GLOBAL DAT_0020182c int *
// GLOBAL DAT_00201830 int
// GLOBAL DAT_00201834 int

void func_002015EC(int *param_1)

{
  short sVar1;
  int *piVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  float *pfVar8;
  int *piVar9;
  uint in_fpscr;
  float in_s0;
  float fVar10;
  
  if (*(char *)((int)param_1 + 0x93d) != '\0') {
    *(undefined1 *)((int)param_1 + 0x829) = 1;
  }
  iVar4 = func_00588BE4((int)param_1);
  piVar2 = DAT_00201824;
  if ((iVar4 == *DAT_00201824) && ((param_1[0x167] & 0x80U) != 0)) {
    iVar4 = func_0014E2A0((int)param_1,param_1[0x10c],0,0x200,0,0);
    piVar9 = DAT_0020182c;
    fVar10 = DAT_00201828;
    if (iVar4 != 0) {
      in_s0 = DAT_00201828;
      func_002917A4(*DAT_0020182c,param_1 + 0xf4,0,DAT_00201828);
    }
    iVar4 = func_0014E2A0((int)param_1,param_1[0x10c],0,0x400,0,0);
    if (iVar4 != 0) {
      func_00291A38(*piVar9,param_1 + 0xf4,fVar10);
      in_s0 = fVar10;
    }
  }
  iVar4 = func_004F70A8(param_1);
  if (iVar4 != 0) {
    piVar9 = param_1 + 0x237;
    if (((char)param_1[0x238] != '\x06' && (char)param_1[0x238] != '\a') &&
       (iVar4 = func_004F8998(param_1,0,(char *)0x0), iVar4 != 0)) {
      func_0065D120(piVar9,6,in_s0);
    }
    pfVar8 = (float *)param_1[0x23c];
    piVar5 = (int *)(param_1[0x23e] + (char)param_1[0x238] * 8);
    uVar6 = *(uint *)(param_1[0x23e] + (char)param_1[0x238] * 8 + 4);
    piVar7 = (int *)((int)pfVar8 + ((int)uVar6 >> 1));
    if ((uVar6 & 1) != 0) {
      piVar5 = (int *)(*piVar5 + *piVar7);
    }
    (*(code *)*piVar5)(piVar7);
    iVar4 = *piVar9;
    *piVar9 = iVar4 + 1;
    if (param_1[0x23b] != 0) {
      fVar10 = (float)VectorUnsignedToFloat(iVar4 + 1,(byte)(in_fpscr >> 0x15) & 3);
      func_00352210(param_1[0x23b],1,fVar10);
    }
    func_004F48F0((int)param_1);
    func_004F5588((int)param_1);
    param_1[0xf5] = param_1[0xdb];
    func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x0,pfVar8);
    func_00200D84((int)param_1);
    iVar4 = func_00588BE4((int)param_1);
    if (iVar4 == *piVar2) {
      fVar10 = func_0058A404((int)param_1);
      if (DAT_00201830 < (int)ALBW_AS_U32(fVar10)) {
        if (DAT_00201834 < (int)ALBW_AS_U32(fVar10)) {
          return;
        }
        sVar1 = (short)param_1[0x142];
        uVar3 = 1;
      }
      else {
        sVar1 = (short)param_1[0x142];
        uVar3 = 2;
      }
      if (sVar1 < 1) {
        uVar3 = 0;
      }
      *(undefined1 *)((int)param_1 + 0x859) = uVar3;
    }
  }
  return;
}

