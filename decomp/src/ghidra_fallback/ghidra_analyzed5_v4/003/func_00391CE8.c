// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern float func_00111610(int param_1,uint *param_2);
extern float func_00111764(int param_1,uint *param_2);
extern int func_0014E138(int param_1,int param_2);
extern int func_001508C0(int param_1,int param_2,int param_3);
extern int func_00150A20(int param_1,int param_2,int param_3);
extern int func_0025B824(int param_1,float fparam_0);
extern int func_0025B860(int param_1,int param_2,float fparam_0,float fparam_1);
extern int func_0039222C(int param_1,int *param_2,uint param_3);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00539200(int param_1);
extern int func_00581C5C(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int *DAT_00391f58;
extern int *DAT_00391f5c;
extern uint *DAT_00391f60;
extern undefined4 *DAT_00391f64;
extern undefined4 DAT_00391f68;

// GLOBAL DAT_00391f58 int *
// GLOBAL DAT_00391f5c int *
// GLOBAL DAT_00391f60 uint *
// GLOBAL DAT_00391f64 undefined4 *
// GLOBAL DAT_00391f68 undefined4
// USA 00391CE8 <- EU 00391CC8 (Ghidra, function missing from the decomp table)

/* WARNING: Unknown calling convention */

undefined4 func_00391CE8(int *param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int in_r1;
  int extraout_r1;
  int extraout_r1_00;
  undefined4 in_r3;
  bool bVar7;
  float fVar8;
  float in_s1;
  int *piVar9;
  
  if ((char)param_1[0x14c] == '\0') {
    return 0;
  }
  bVar2 = false;
  *(undefined1 *)((int)param_1 + 0x535) = 0;
  piVar9 = param_1;
  iVar4 = func_00581C5C(*DAT_00391f58);
  if (iVar4 != 0) {
    *(bool *)((int)param_1 + 0x535) = (int)(short)param_1[0x15] == *(int *)(iVar4 + 0x3c0);
  }
  cVar1 = (char)param_1[0x14d];
  bVar7 = cVar1 == '\0';
  if (bVar7) {
    cVar1 = *(char *)((int)param_1 + 0x535);
  }
  bVar7 = !bVar7;
  piVar5 = (int *)func_0052FBA0(*DAT_00391f5c + 0x3dbbc,param_1[0x10e]);
  if (((*DAT_00391f60 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_00391f60), iVar4 != 0)) {
    *DAT_00391f64 = DAT_00391f68;
  }
  if ((piVar5 == (int *)0x0) ||
     (iVar4 = (**(code **)*piVar5)(piVar5,DAT_00391f64,*(code **)*piVar5,in_r3,piVar9), iVar4 == 0))
  {
    piVar5 = (int *)0x0;
  }
  uVar6 = (uint)*(byte *)((int)param_1 + 0x531);
  if (piVar5 == (int *)0x0) {
    piVar5 = param_1;
  }
  if (uVar6 == 0) {
    uVar6 = 0;
    do {
      if ((*(char *)((int)param_1 + uVar6 + 0x52c) != '\0') &&
         (*(char *)((int)param_1 + uVar6 + 0x52e) == '\0')) {
        bVar3 = func_00588BF0((int)param_1,uVar6);
        if (bVar3) {
          iVar4 = extraout_r1;
          if (param_1[uVar6 + 0x119] != -1 && (bVar7 || cVar1 != '\0')) {
            func_0039222C((int)param_1,piVar5,uVar6);
            iVar4 = extraout_r1_00;
          }
          *(undefined1 *)((int)param_1 + uVar6 + 0x52e) = 1;
          if (uVar6 == 1) {
            bVar7 = *(char *)((int)param_1 + 0x532) != '\0';
            if (bVar7) {
              iVar4 = param_1[0x119];
            }
            if (bVar7 && iVar4 != -1) {
              func_00150A20((int)piVar5,iVar4,0);
            }
            break;
          }
        }
        else {
          bVar2 = true;
        }
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < 2);
    if (bVar2) goto LAB_00391f3c;
  }
  else {
    bVar7 = !bVar7;
    bVar2 = cVar1 == '\0';
    if (!bVar7 || !bVar2) {
      uVar6 = param_1[0x119];
    }
    if ((bVar7 && bVar2 || uVar6 == 0xffffffff) ||
       (((char)param_1[0x14b] != '\0' && (bVar2 = func_00588BF0((int)param_1,0), !bVar2))))
    goto LAB_00391f3c;
    bVar2 = func_00588BF0((int)param_1,1);
    if (!bVar2) {
      piVar9 = param_1 + 0x11b;
      func_001508C0((int)piVar5,param_1[0x119],(int)piVar9);
      bVar2 = func_00539200((int)piVar9);
      if (bVar2) {
        fVar8 = func_00111764((int)(param_1 + 0x10f),(uint *)0x0);
        func_0025B860((int)piVar9,0,fVar8,in_s1);
        fVar8 = func_00111610((int)(param_1 + 0x10f),(uint *)0x0);
        func_0025B824((int)piVar9,fVar8);
      }
      goto LAB_00391f3c;
    }
  }
  *(undefined1 *)((int)param_1 + 0x2d7) = 1;
LAB_00391f3c:
  return func_0014E138((int)param_1,in_r1);
}

