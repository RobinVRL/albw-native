// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0014D1C0(int param_1,uint param_2);
extern int func_00291F58(int param_1,int param_2);
extern int func_002B90A4(int param_1,int param_2);
extern int func_002E1CA4(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00328730(int param_1);
extern int func_004EB524(int param_1,int param_2);
extern int func_0051E520(int param_1);
extern int func_0053F090(int param_1);
extern int func_00540304(int param_1);
extern int func_005486C4(int param_1);
extern int func_00550428(int param_1);
extern int func_005568B0(int param_1);
extern int func_00556E64(int param_1);
extern int *DAT_002e2590;
extern uint DAT_002e2594;
extern int *DAT_002e2598;
extern int *DAT_002e259c;
extern float DAT_002e25a0;
extern int DAT_002e25a4;
extern int *DAT_002e25a8;
extern int *DAT_002e25ac;
extern int *DAT_002e25b0;

// USA 002E21DC <- EU 002E21B8 (Ghidra, non-matching)
// GLOBAL DAT_002e2590 int *
// GLOBAL DAT_002e2594 uint
// GLOBAL DAT_002e2598 int *
// GLOBAL DAT_002e259c int *
// GLOBAL DAT_002e25a0 float
// GLOBAL DAT_002e25a4 int
// GLOBAL DAT_002e25a8 int *
// GLOBAL DAT_002e25ac int *
// GLOBAL DAT_002e25b0 int *

undefined4 func_002E21DC(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  float *pfVar6;
  undefined4 *puVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  
  piVar1 = DAT_002e2590;
  if (*(char *)(param_1 + 0x20) != '\0') {
    *(undefined1 *)(param_1 + 0x20) = 0;
    iVar5 = func_00540304(*piVar1);
    if (iVar5 == 0) {
      func_004EB524(*piVar1,1);
    }
  }
  func_00328730(*(int *)(param_1 + 0x80));
  piVar1 = DAT_002e2598;
  uVar8 = DAT_002e2594;
  iVar5 = *(int *)(param_1 + 0x18) + 1;
  *(int *)(param_1 + 0x18) = iVar5;
  switch(*(undefined1 *)(param_1 + 0x14)) {
  case 1:
    iVar5 = *DAT_002e259c;
    if ((*(uint *)(iVar5 + 0x340) & 0x18) != 0) {
      uVar8 = *(uint *)(*(int *)(param_1 + 0x7c) + 0x28);
      *(uint *)(*(int *)(param_1 + 0x7c) + 0x28) = uVar8 | 0x10000;
      *(uint *)(*(int *)(param_1 + 0x7c) + 0x28) = uVar8 | 0x30000;
    }
    if ((*(uint *)(iVar5 + 0x340) & 2) != 0) {
      *(uint *)(*(int *)(param_1 + 0x7c) + 0x28) =
           *(uint *)(*(int *)(param_1 + 0x7c) + 0x28) | 0x20000;
    }
    bVar4 = func_00556E64(*piVar1);
    if (bVar4) {
      *(uint *)(*(int *)(param_1 + 0x7c) + 0x28) =
           *(uint *)(*(int *)(param_1 + 0x7c) + 0x28) | 0x1000;
    }
    pfVar6 = *(float **)(*piVar1 + 0x1c);
    fVar9 = *pfVar6 - *(float *)(param_1 + 0x28);
    if (fVar9 <= DAT_002e25a0) {
      fVar9 = -fVar9;
    }
    if ((int)ALBW_AS_U32(fVar9) < DAT_002e25a4) {
      fVar9 = pfVar6[1] - *(float *)(param_1 + 0x2c);
      if (fVar9 <= DAT_002e25a0) {
        fVar9 = -fVar9;
      }
      if (DAT_002e25a4 <= (int)ALBW_AS_U32(fVar9)) goto LAB_002e2354;
      fVar10 = pfVar6[2] - *(float *)(param_1 + 0x30);
      if (fVar10 <= DAT_002e25a0) {
        fVar10 = -fVar10;
      }
      if (DAT_002e25a4 <= (int)ALBW_AS_U32(fVar10)) goto LAB_002e2354;
    }
    else {
LAB_002e2354:
      *(uint *)(*(int *)(param_1 + 0x7c) + 0x28) =
           *(uint *)(*(int *)(param_1 + 0x7c) + 0x28) | 0x4000;
    }
    piVar2 = DAT_002e25ac;
    bVar4 = *(int *)(*DAT_002e25a8 + 0x44) == 0;
    if ((0 < *(int *)(param_1 + 0x1c)) && (bVar4)) {
      iVar5 = *(int *)(param_1 + 0x1c) + -1;
      *(int *)(param_1 + 0x1c) = iVar5;
      fVar9 = *(float *)(*piVar2 + 300);
      if (iVar5 == 0xb4) {
        func_0014D1C0((int)ALBW_AS_U32(fVar9),2);
      }
      else if (iVar5 < 0xb5) {
        if (iVar5 == 0x3c) {
          func_0014D1C0((int)ALBW_AS_U32(fVar9),4);
        }
        else if (iVar5 == 0x78) {
          func_0014D1C0((int)ALBW_AS_U32(fVar9),3);
        }
      }
      else if (iVar5 == 0xf0) {
        func_0014D1C0((int)ALBW_AS_U32(fVar9),1);
      }
      else if (iVar5 == 300) {
        func_0014D1C0((int)ALBW_AS_U32(fVar9),0);
      }
    }
    if ((*(char *)(param_1 + 0x24) == '\0') &&
       (puVar7 = func_005486C4(param_1), puVar7 == (undefined4 *)0x0)) {
      *(undefined1 *)(param_1 + 0x24) = 1;
    }
    if (*(char *)(param_1 + 0x23) == '\0') {
      cVar3 = func_005568B0(*piVar1);
      if ((cVar3 == '\0') && (iVar5 = func_0053F090(*piVar1), iVar5 == 0)) {
        *(undefined1 *)(param_1 + 0x23) = 1;
        goto LAB_002e24a0;
      }
      if (*(char *)(param_1 + 0x23) != '\0') goto LAB_002e24a0;
    }
    else {
LAB_002e24a0:
      if (*(char *)(param_1 + 0x24) != '\0') {
        return func_002E1CA4(param_1,5,ALBW_AS_U32(fVar9),param_4);
      }
      if (*(char *)(param_1 + 0x23) != '\0') {
        return func_002E1CA4(param_1,4,ALBW_AS_U32(fVar9),param_4);
      }
    }
    if (*(char *)(param_1 + 0x24) != '\0') {
      return func_002E1CA4(param_1,3,ALBW_AS_U32(fVar9),param_4);
    }
    if (*(int *)(param_1 + 0x1c) == 0 && bVar4) {
      return func_002E1CA4(param_1,2,ALBW_AS_U32(fVar9),param_4);
    }
    break;
  case 3:
    if (iVar5 == 0x78) {
      func_00291F58(*piVar1,0);
    }
    if (((*(char *)(param_1 + 0x25) != '\0') && (*(int *)(param_1 + 0x18) == 0x82)) &&
       (puVar7 = func_005486C4(param_1), puVar7 != (undefined4 *)0x0)) {
      func_002B90A4((int)puVar7,2);
    }
    if (((*(char *)(param_1 + 0x22) == '\0') &&
        (bVar4 = func_00550428(*(int *)(param_1 + 0x80)), bVar4)) &&
       (bVar4 = func_0051E520(*DAT_002e25b0), bVar4)) {
LAB_002e2588:
      *(undefined1 *)(param_1 + 0x22) = 1;
      return 0;
    }
    break;
  case 4:
    if (*(char *)(param_1 + 0x25) != '\0') {
      if (iVar5 == 0xb) {
        func_00291F58(*piVar1,2);
      }
      if ((*(int *)(param_1 + 0x18) == 1) &&
         (puVar7 = func_005486C4(param_1), puVar7 != (undefined4 *)0x0)) {
        func_002B90A4((int)puVar7,0);
      }
    }
    if (*(char *)(param_1 + 0x22) == '\0') {
      if (*(char *)(param_1 + 0x25) == '\0') {
        if (uVar8 <= *(uint *)(param_1 + 0x18)) goto LAB_002e2588;
      }
      else if ((0xb3 < *(uint *)(param_1 + 0x18)) &&
              (bVar4 = func_00550428(*(int *)(param_1 + 0x80)), bVar4)) goto LAB_002e2588;
    }
    break;
  case 5:
    if ((((*(char *)(param_1 + 0x25) != '\0') && (iVar5 == 0x1e)) &&
        (func_00291F58(*piVar1,1), *(int *)(param_1 + 0x18) == 0x1e)) &&
       (puVar7 = func_005486C4(param_1), puVar7 != (undefined4 *)0x0)) {
      func_002B90A4((int)puVar7,1);
    }
    if (*(char *)(param_1 + 0x22) == '\0') {
      if (*(char *)(param_1 + 0x25) == '\0') {
        if (*(uint *)(param_1 + 0x18) < uVar8) {
          return 0;
        }
      }
      else {
        if (*(uint *)(param_1 + 0x18) < 0xb4) {
          return 0;
        }
        bVar4 = func_00550428(*(int *)(param_1 + 0x80));
        if (!bVar4) {
          return 0;
        }
      }
      goto LAB_002e2588;
    }
  }
  return 0;
}

