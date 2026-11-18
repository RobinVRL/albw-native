#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_004C6654(int param_1,uint param_2);
extern int func_004F4A68();
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0055696C(int param_1,int param_2);
extern int func_00588BE4(int param_1);
extern int func_00589A58(int param_1);
extern int func_00687DB0(undefined4 *param_1);
extern int *DAT_002b9630;
extern int DAT_002b9634;
extern int *DAT_002b9638;
extern int *DAT_002b963c;
extern int *DAT_002b9640;
extern float DAT_002b9644;
extern int *DAT_002b9648;
extern uint *DAT_002b964c;
extern undefined4 *DAT_002b9650;
extern undefined4 DAT_002b9654;
extern int *DAT_002b9658;
extern float DAT_002b965c;
extern int DAT_002b9660;
extern uint *DAT_002b9664;
extern undefined4 *DAT_002b9668;
extern undefined4 DAT_002b966c;
extern int *DAT_002b9730;
extern float DAT_002b9734;
extern int DAT_002b9738;

// USA 002B929C <- EU 002B9278 (Ghidra, non-matching)
// GLOBAL DAT_002b9630 int *
// GLOBAL DAT_002b9634 int
// GLOBAL DAT_002b9638 int *
// GLOBAL DAT_002b963c int *
// GLOBAL DAT_002b9640 int *
// GLOBAL DAT_002b9644 float
// GLOBAL DAT_002b9648 int *
// GLOBAL DAT_002b964c uint *
// GLOBAL DAT_002b9650 undefined4 *
// GLOBAL DAT_002b9654 undefined4
// GLOBAL DAT_002b9658 int *
// GLOBAL DAT_002b965c float
// GLOBAL DAT_002b9660 int
// GLOBAL DAT_002b9664 uint *
// GLOBAL DAT_002b9668 undefined4 *
// GLOBAL DAT_002b966c undefined4
// GLOBAL DAT_002b9730 int *
// GLOBAL DAT_002b9734 float
// GLOBAL DAT_002b9738 int

undefined4 func_002B929C(int param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  bool bVar12;
  float fVar13;
  
  piVar3 = DAT_002b9630;
  puVar4 = (undefined4 *)func_0052FBA0(*DAT_002b9630 + 0x3dbbc,*(uint *)(param_2 + 0x28));
  puVar4 = func_00687DB0(puVar4);
  iVar7 = DAT_002b9634;
  if (*(int *)(param_2 + 8) < DAT_002b9634) {
    *(undefined4 *)(param_1 + 0xb14) = *(undefined4 *)(param_2 + 0x28);
  }
  iVar5 = func_0052FBA0(*piVar3 + 0x3dbbc,*(uint *)(param_2 + 0x28));
  piVar3 = DAT_002b9638;
  if (((iVar5 != 0) && (iVar5 = func_00588BE4(iVar5), iVar5 == *piVar3)) &&
     (iVar7 < *(int *)(param_2 + 8))) {
    uVar6 = func_0055696C(*DAT_002b963c,7);
    piVar9 = DAT_002b9640;
    if (uVar6 < 3) {
      func_004C6654(*DAT_002b9640,0x16);
    }
    else {
      func_004C6654(*DAT_002b9640,0x16);
      func_004C6654(*piVar9,0x17);
    }
  }
  fVar13 = DAT_002b9644;
  if (puVar4 == (undefined4 *)0x0) {
LAB_002b9470:
    if (((iVar7 < *(int *)(param_2 + 8)) &&
        (*(float *)(param_1 + 0xc) - DAT_002b965c <= *(float *)(param_1 + 0x3d4))) &&
       ((piVar9 = *(int **)(*(int *)(param_1 + 0x93c) + 4),
        iVar7 = (**(code **)(*piVar9 + 0x104))(piVar9,3), iVar7 == 0 ||
        ((bVar1 = *(byte *)(*(int *)(param_1 + 0x510) + 5), bVar1 < 0x15 || (0x1c < bVar1)))))) {
      if ((puVar4 != (undefined4 *)0x0) &&
         ((iVar7 = func_00588BE4((int)puVar4), iVar7 == *piVar3 &&
          (*(float *)(param_1 + 0x3d4) <= *(float *)(param_1 + 0xc) + fVar13)))) goto LAB_002b9524;
      *(undefined4 *)(param_1 + 0x940) = *(undefined4 *)(param_1 + 0x368);
      *(undefined4 *)(param_1 + 0x944) = *(undefined4 *)(param_1 + 0x36c);
      *(undefined4 *)(param_1 + 0x948) = *(undefined4 *)(param_1 + 0x370);
      *(undefined4 *)(param_1 + 0x944) = *(undefined4 *)(param_1 + 0xc);
    }
    if (puVar4 == (undefined4 *)0x0) goto LAB_002b9600;
  }
  else {
    iVar5 = func_00588BE4((int)puVar4);
    if (iVar5 != *DAT_002b9648) {
      iVar5 = func_00588BE4((int)puVar4);
      if (iVar5 == *DAT_002b9658) {
        return 0;
      }
      goto LAB_002b9470;
    }
    if (((*DAT_002b964c & 1) == 0) && (iVar7 = func_00100174((int *)DAT_002b964c), iVar7 != 0)) {
      *DAT_002b9650 = DAT_002b9654;
    }
    iVar7 = (**(code **)*puVar4)(puVar4,DAT_002b9650);
    puVar8 = (undefined4 *)0x0;
    if (iVar7 != 0) {
      puVar8 = puVar4;
    }
    if (puVar8 != (undefined4 *)0x0) {
      uVar6 = *(uint *)(param_2 + 0x30) & 0xffff;
      if (uVar6 < (uint)puVar8[0x187]) {
        iVar7 = puVar8[0x188] + uVar6 * 0x3c;
      }
      else {
        iVar7 = puVar8[0x188];
      }
      if ((*(char *)(iVar7 + 0x34) == '\x01') &&
         (*(undefined1 *)(param_1 + 0xb35) = 1, *(char *)(param_1 + 0xb36) == '\0')) {
        uVar6 = *(uint *)(param_2 + 0x30) & 0xffff;
        if (uVar6 < (uint)puVar8[0x187]) {
          iVar7 = puVar8[0x188] + uVar6 * 0x3c;
        }
        else {
          iVar7 = puVar8[0x188];
        }
        if (*(int *)(iVar7 + 0x24) != 0) {
          iVar7 = puVar8[0x188];
          if (uVar6 < (uint)puVar8[0x187]) {
            iVar7 = iVar7 + uVar6 * 0x3c;
          }
          puVar8 = (undefined4 *)func_00589A58(*(int *)(iVar7 + 0x24));
          uVar10 = *puVar8;
          uVar11 = puVar8[1];
          *(undefined4 *)(param_1 + 0x9d8) = puVar8[2];
          *(undefined4 *)(param_1 + 0x9d0) = uVar10;
          *(undefined4 *)(param_1 + 0x9d4) = uVar11;
        }
      }
    }
  }
LAB_002b9524:
  iVar7 = func_00588BE4((int)puVar4);
  if (iVar7 == *piVar3) {
    if (*(int *)(param_2 + 8) < DAT_002b9660) {
      *(undefined2 *)(param_1 + 0xb04) = 3;
      *(undefined1 *)(param_1 + 0xb3a) = 1;
      uVar10 = *(undefined4 *)(param_2 + 8);
      uVar11 = *(undefined4 *)(param_2 + 0xc);
      *(undefined4 *)(param_1 + 0x9c4) = *(undefined4 *)(param_2 + 4);
      *(undefined4 *)(param_1 + 0x9c8) = uVar10;
      *(undefined4 *)(param_1 + 0x9cc) = uVar11;
      if (((*DAT_002b9664 & 1) == 0) && (iVar7 = func_00100174((int *)DAT_002b9664), iVar7 != 0)) {
        *DAT_002b9668 = DAT_002b966c;
      }
      iVar7 = (**(code **)*puVar4)(puVar4,DAT_002b9668);
      puVar8 = (undefined4 *)0x0;
      if (iVar7 != 0) {
        puVar8 = puVar4;
      }
      if (puVar8 != (undefined4 *)0x0) {
        uVar10 = puVar8[0x114];
        uVar11 = puVar8[0x115];
        *(undefined4 *)(param_1 + 0x9f4) = puVar8[0x113];
        *(undefined4 *)(param_1 + 0x9f8) = uVar10;
        *(undefined4 *)(param_1 + 0x9fc) = uVar11;
        *(undefined4 *)(param_1 + 0xa24) = puVar8[0x116];
      }
    }
    else if (*(float *)(param_1 + 0x3d4) <= *(float *)(param_1 + 0xc) + fVar13) {
      *(undefined1 *)(param_1 + 0xb3c) = 1;
    }
  }
LAB_002b9600:
  if ((*(ushort *)(param_2 + 0x20) & 0x1f) == 6) {
    cVar2 = *(char *)(param_1 + 0xb3b);
    bVar12 = cVar2 == '\0';
    if (bVar12) {
      cVar2 = *(char *)(param_1 + 0xb3c);
    }
    if (!bVar12 || cVar2 != '\0') {
      return 0;
    }
    if ((puVar4 == (undefined4 *)0x0) ||
       (iVar7 = func_00588BE4((int)puVar4), iVar7 != *DAT_002b9730)) {
      *(undefined1 *)(param_1 + 0xb38) = 1;
    }
  }
  fVar13 = DAT_002b9734;
  if (((int)ALBW_AS_U32(*(float *)(param_2 + 8)) < 0x3f000000) &&
     (*(float *)(param_2 + 4) * *(float *)(param_1 + 0x3dc) +
      *(float *)(param_2 + 8) * *(float *)(param_1 + 0x3e0) +
      *(float *)(param_2 + 0xc) * *(float *)(param_1 + 0x3e4) < DAT_002b9734)) {
    *(undefined1 *)(param_1 + 0xb39) = 1;
    uVar10 = *(undefined4 *)(param_2 + 8);
    uVar11 = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 0x9b8) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_1 + 0x9bc) = uVar10;
    *(undefined4 *)(param_1 + 0x9c0) = uVar11;
  }
  iVar7 = func_004F4A68(param_1,param_2);
  if (iVar7 == 0) {
    return 0;
  }
  if (DAT_002b9738 < *(int *)(param_2 + 8)) {
    *(undefined1 *)(param_1 + 0xb34) = 1;
    if (*(float *)(param_1 + 0x3e0) < fVar13) {
      *(float *)(param_1 + 0x3e0) = fVar13;
    }
  }
  return 1;
}

