#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern void func_004F48F0(int param_1);
extern void func_004F5588(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F70A8(int *param_1);
extern int func_004F8998(int *param_1,int param_2,char *param_3);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_0051D960(int param_1,int param_2);
extern int func_0051DA04(int param_1);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int func_0058A8F0(int param_1);
extern undefined8 func_0058AB74(int param_1);
extern int func_00656650(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00125fc4;
extern undefined4 *DAT_00125fc8;
extern int DAT_00125fcc;
extern uint *DAT_00125fd0;
extern undefined4 DAT_00125fd4;
extern undefined4 *DAT_00125fd8;
extern int DAT_00125fdc;
extern int DAT_00125fe0;

// USA 00125C80 <- EU 00125C80 (Ghidra, non-matching)
// GLOBAL DAT_00125fc4 int *
// GLOBAL DAT_00125fc8 undefined4 *
// GLOBAL DAT_00125fcc int
// GLOBAL DAT_00125fd0 uint *
// GLOBAL DAT_00125fd4 undefined4
// GLOBAL DAT_00125fd8 undefined4 *
// GLOBAL DAT_00125fdc int
// GLOBAL DAT_00125fe0 int

undefined4 func_00125C80(int *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  bool bVar5;
  char cVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  float *pfVar12;
  int *piVar13;
  undefined4 *puVar14;
  uint in_fpscr;
  float fparam_0;
  undefined8 uVar15;
  
  puVar2 = DAT_00125fc8;
  piVar13 = DAT_00125fc4;
  if ((param_1[0x238] == 0) &&
     (puVar7 = (undefined4 *)
               func_005841A8(*DAT_00125fc4,*DAT_00125fc8,*(int **)(DAT_00125fcc + *DAT_00125fc4)),
     uVar4 = DAT_00125fd4, puVar3 = DAT_00125fd0, *(undefined4 **)(*piVar13 + 0x3dbc8) != puVar7)) {
    do {
      puVar14 = (undefined4 *)*puVar7;
      if (((*puVar3 & 1) == 0) && (iVar8 = func_00100174((int *)DAT_00125fd0), iVar8 != 0)) {
        *DAT_00125fd8 = uVar4;
      }
      if ((puVar14 == (undefined4 *)0x0) ||
         (iVar8 = (**(code **)*puVar14)(puVar14,DAT_00125fd8), iVar8 == 0)) {
        puVar14 = (undefined4 *)0x0;
      }
      if ((puVar14 != (undefined4 *)0x0) && (param_1[0xb3] == puVar14[0x238])) {
        param_1[0x238] = puVar14[0xb3];
      }
      puVar7 = (undefined4 *)func_005841A8(*piVar13,*puVar2,puVar7 + 1);
    } while (*(undefined4 **)(*piVar13 + 0x3dbc8) != puVar7);
  }
  iVar8 = func_004F70A8(param_1);
  if (iVar8 == 0) {
    return 0;
  }
  piVar13 = param_1 + 0x22f;
  if (((char)param_1[0x230] != '\x02' && (char)param_1[0x230] != '\x03') &&
     (iVar8 = func_004F8998(param_1,0,(char *)0x0), iVar8 != 0)) {
    func_00656650(piVar13,2);
  }
  pfVar12 = (float *)param_1[0x234];
  piVar9 = (int *)(param_1[0x236] + (char)param_1[0x230] * 8);
  uVar10 = *(uint *)(param_1[0x236] + (char)param_1[0x230] * 8 + 4);
  piVar11 = (int *)((int)pfVar12 + ((int)uVar10 >> 1));
  if ((uVar10 & 1) != 0) {
    piVar9 = (int *)(*piVar9 + *piVar11);
  }
  (*(code *)*piVar9)(piVar11);
  iVar8 = *piVar13;
  *piVar13 = iVar8 + 1;
  if (param_1[0x233] != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar8 + 1,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(param_1[0x233],1,fparam_0);
  }
  bVar5 = func_0051D960((int)param_1,0);
  if ((char)param_1[0x23c] == '\0') {
    if ((bVar5) && (*(char *)((int)param_1 + 0x8f1) == '\0')) {
      pfVar12 = (float *)0x0;
      *(undefined1 *)(param_1 + 0x23c) = 1;
      func_004FABDC((int)param_1,3,0xffffffff,0);
    }
  }
  else {
    cVar6 = func_0051DA04((int)param_1);
    cVar1 = '\0';
    if (cVar6 != '\0') {
      cVar1 = *(char *)((int)param_1 + 0x8f1);
    }
    if (cVar6 != '\0' && cVar1 != '\0') {
      pfVar12 = (float *)0x0;
      *(undefined1 *)(param_1 + 0x23c) = 0;
      func_004FABDC((int)param_1,2,0xffffffff,0);
    }
  }
  iVar8 = func_0058A8F0((int)param_1);
  if (iVar8 == 0) {
    uVar15 = func_0058AB74((int)param_1);
    if (!bVar5) {
      if ((int)uVar15 != 1) goto LAB_00125f68;
      *(undefined1 *)(param_1 + 0x23c) = 0;
      goto LAB_00125ef8;
    }
    if ((int)uVar15 != 0) goto LAB_00125f68;
    *(undefined1 *)(param_1 + 0x23c) = 1;
  }
  else {
    uVar15 = func_0058AB74((int)param_1);
    if ((int)uVar15 == 2) {
LAB_00125ef8:
      pfVar12 = (float *)0x0;
      func_004FC07C((int)param_1,0,0xffffffff,0);
      goto LAB_00125f68;
    }
    if ((int)uVar15 != 3) goto LAB_00125f68;
  }
  pfVar12 = (float *)0x0;
  func_004FC07C((int)param_1,1,0xffffffff,0);
LAB_00125f68:
  bVar5 = func_0051D960((int)param_1,0);
  iVar8 = DAT_00125fdc;
  if (!bVar5) {
    iVar8 = DAT_00125fe0;
  }
  param_1[0x13c] = iVar8;
  bVar5 = func_0051D960((int)param_1,0);
  *(bool *)((int)param_1 + 0x8f1) = bVar5;
  func_004F48F0((int)param_1);
  func_004F5588((int)param_1);
  return func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x0,pfVar12);
}

