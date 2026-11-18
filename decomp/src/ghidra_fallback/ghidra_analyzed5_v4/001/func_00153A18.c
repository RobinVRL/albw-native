#include "ghidra_types.h"

extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern void func_004F48F0(int param_1);
extern void func_004F5588(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F70A8(int *param_1);
extern int func_004F8998(int *param_1,int param_2,char *param_3);
extern int func_00657BD4(undefined4 *param_1,undefined1 param_2);
extern int DAT_00153c04;
extern int *DAT_00153c08;

// USA 00153A18 <- EU 00153A1C (Ghidra, non-matching)
// GLOBAL DAT_00153c04 int
// GLOBAL DAT_00153c08 int *

undefined4 func_00153A18(int *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  float *pfVar7;
  int *piVar8;
  uint in_fpscr;
  float fparam_0;
  
  iVar3 = func_004F70A8(param_1);
  if (iVar3 == 0) {
    return 0;
  }
  cVar1 = (char)param_1[0x244];
  piVar8 = param_1 + 0x243;
  if (cVar1 == '\x06' || cVar1 == '\a') goto LAB_00153b18;
  if (0 < *(short *)(DAT_00153c04 + (int)param_1)) {
    piVar4 = (int *)param_1[0x10f];
    if ((*piVar4 != 0) && ((param_1[0x167] & 0x80U) != 0)) {
      cVar2 = *(char *)((int)piVar4 + 0x21);
      if (cVar2 == '\v') {
        if (cVar1 != '\x01' && cVar1 != '\x02') {
          func_00657BD4(piVar8,1);
        }
        goto LAB_00153b18;
      }
      if (cVar2 != '\x01' && cVar2 != '\r') {
        if (cVar2 == '\x03') {
          piVar4 = (int *)(uint)*(byte *)((int)piVar4 + 0x23);
        }
        if (cVar2 != '\x03' || piVar4 != (int *)0x1) goto LAB_00153aa4;
      }
      if (cVar1 == '\x03') {
        func_00657BD4(piVar8,4);
      }
      goto LAB_00153b18;
    }
LAB_00153aa4:
    if (((param_1[0x168] & 0x2000000U) != 0) &&
       (iVar3 = **(int **)(*DAT_00153c08 + 0x24) - (param_1[0xfa] + -0x80000000),
       iVar3 + 0x3fffffffU < 0x7fffffff)) {
      *(undefined1 *)(param_1 + 0x24c) = 1;
      param_1[0x23e] = param_1[0xfa] + iVar3 * 2 + -0x80000000;
    }
  }
  iVar3 = func_004F8998(param_1,0,(char *)0x0);
  if (iVar3 != 0) {
    func_00657BD4(piVar8,6);
  }
LAB_00153b18:
  pfVar7 = (float *)param_1[0x248];
  piVar4 = (int *)(param_1[0x24a] + (char)param_1[0x244] * 8);
  uVar5 = *(uint *)(param_1[0x24a] + (char)param_1[0x244] * 8 + 4);
  piVar6 = (int *)((int)pfVar7 + ((int)uVar5 >> 1));
  if ((uVar5 & 1) != 0) {
    piVar4 = (int *)(*piVar4 + *piVar6);
  }
  (*(code *)*piVar4)(piVar6);
  iVar3 = *piVar8;
  *piVar8 = iVar3 + 1;
  if (param_1[0x247] != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar3 + 1,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(param_1[0x247],1,fparam_0);
  }
  func_004F48F0((int)param_1);
  func_004F5588((int)param_1);
  return func_004F5BD8((int)param_1,(uint *)(param_1 + 0x23d),(int **)0x0,pfVar7);
}

