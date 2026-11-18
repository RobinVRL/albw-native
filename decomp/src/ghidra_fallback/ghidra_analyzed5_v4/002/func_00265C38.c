#include "ghidra_types.h"

extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern void func_004F48F0(int param_1);
extern void func_004F5588(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F70A8(int *param_1);
extern int func_004F8998(int *param_1,int param_2,char *param_3);
extern int func_006605D4(undefined4 *param_1,undefined1 param_2);
extern int DAT_00265ea0;
extern int DAT_00265ea4;
extern int *DAT_00265ea8;

// USA 00265C38 <- EU 00265C60 (Ghidra, non-matching)
// GLOBAL DAT_00265ea0 int
// GLOBAL DAT_00265ea4 int
// GLOBAL DAT_00265ea8 int *

undefined4 func_00265C38(int *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  float *pfVar7;
  int *piVar8;
  bool bVar9;
  uint in_fpscr;
  float fparam_0;
  
  if (*(char *)((int)param_1 + 0x90e) != '\0') {
    *(char *)((int)param_1 + 0x90e) = *(char *)((int)param_1 + 0x90e) + -1;
  }
  iVar3 = func_004F70A8(param_1);
  if (iVar3 == 0) {
    return 0;
  }
  piVar8 = param_1 + 0x246;
  cVar1 = *(char *)(DAT_00265ea0 + (int)param_1);
  if (cVar1 == '\x05' || cVar1 == '\x06') goto LAB_00265d94;
  if (0 < *(short *)(DAT_00265ea4 + (int)param_1)) {
    piVar4 = (int *)param_1[0x10f];
    if ((*piVar4 != 0) && ((param_1[0x167] & 0x80U) != 0)) {
      cVar2 = *(char *)((int)piVar4 + 0x21);
      if ((cVar2 == '\x01') || ((cVar2 == '\x03' && (*(char *)((int)piVar4 + 0x23) == '\x01')))) {
        if (param_1[0x244] == param_1[0xe8]) {
          if (cVar1 != '\x01' && cVar1 != '\x02') {
            *(undefined1 *)((int)param_1 + 0x90e) = 0x14;
            func_006605D4(piVar8,1);
          }
          goto LAB_00265d94;
        }
        if (cVar1 == '\x01' || cVar1 == '\x02') goto LAB_00265d94;
      }
      bVar9 = param_1[0x244] == param_1[0xe8] && cVar2 == '\x03';
      if (param_1[0x244] == param_1[0xe8] && cVar2 == '\x03') {
        bVar9 = *(char *)((int)piVar4 + 0x23) == '\x02';
      }
      if (bVar9) goto LAB_00265d94;
      if (cVar2 == '\x02') {
        if (cVar1 == '\x03' || cVar1 == '\x02') {
          func_006605D4(piVar8,4);
        }
        goto LAB_00265d94;
      }
    }
    if (((param_1[0x168] & 0x2000000U) != 0) &&
       (iVar3 = **(int **)(*DAT_00265ea8 + 0x24) - (param_1[0xfa] + -0x80000000),
       iVar3 + 0x3fffffffU < 0x7fffffff)) {
      *(undefined1 *)(param_1 + 0x24f) = 1;
      param_1[0x242] = param_1[0xfa] + iVar3 * 2 + -0x80000000;
    }
  }
  iVar3 = func_004F8998(param_1,0,(char *)0x0);
  if (iVar3 != 0) {
    func_006605D4(piVar8,5);
  }
LAB_00265d94:
  pfVar7 = (float *)param_1[0x24b];
  piVar4 = (int *)(param_1[0x24d] + (char)param_1[0x247] * 8);
  uVar5 = *(uint *)(param_1[0x24d] + (char)param_1[0x247] * 8 + 4);
  piVar6 = (int *)((int)pfVar7 + ((int)uVar5 >> 1));
  if ((uVar5 & 1) != 0) {
    piVar4 = (int *)(*piVar4 + *piVar6);
  }
  (*(code *)*piVar4)(piVar6);
  iVar3 = *piVar8;
  *piVar8 = iVar3 + 1;
  if (param_1[0x24a] != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar3 + 1,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(param_1[0x24a],1,fparam_0);
  }
  func_004F48F0((int)param_1);
  func_004F5588((int)param_1);
  return func_004F5BD8((int)param_1,(uint *)(param_1 + 0x241),(int **)0x0,pfVar7);
}

