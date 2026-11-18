#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_002313DC(int param_1);
extern int func_00260520(int param_1,int *param_2,undefined4 param_3,undefined4 param_4);
extern int func_002608C8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5);
extern int func_00428B0C(int *param_1,int *param_2,int param_3);
extern int func_005229AC(int *param_1,int *param_2);
extern int func_006896BC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern uint *DAT_00369a34;
extern uint DAT_00369a38;
extern int *DAT_00369a4c;
extern int DAT_00369a50;
extern int *DAT_00369a54;
extern int DAT_00369a58;
extern int DAT_00369a5c;
extern int DAT_00369a60;
extern uint DAT_00369a64;
extern uint DAT_00369a68;
extern undefined4 *DAT_00369a6c;
extern char s_N_KimoPos3__02d_00369a3c[];
extern char s_cf_00369a3c[];
extern char s_share__s__00369a70[];

// USA 0036972C <- EU 00369708 (Ghidra, non-matching)
// GLOBAL DAT_00369a34 uint *
// GLOBAL DAT_00369a38 uint
// GLOBAL DAT_00369a4c int *
// GLOBAL DAT_00369a50 int
// GLOBAL DAT_00369a54 int *
// GLOBAL DAT_00369a58 int
// GLOBAL DAT_00369a5c int
// GLOBAL DAT_00369a60 int
// GLOBAL DAT_00369a64 uint
// GLOBAL DAT_00369a68 uint
// GLOBAL DAT_00369a6c undefined4 *
// GLOBAL s_cf_00369a3c string
// GLOBAL s_share[%s]_00369a70 string

/* WARNING: Variable defined which should be unmapped: objStack_58 */

undefined4 func_0036972C(int *param_1,int *param_2,int param_3,undefined4 param_4)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  ulonglong uVar9;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define objStack_58 ((uint *)(albw_frame + 0x8))
  puVar1 = DAT_00369a34;
  uVar8 = 0;
  uVar9 = (ulonglong)DAT_00369a38;
  do {
    piVar3 = func_006896BC(objStack_58,s_N_KimoPos3__02d_00369a3c,uVar8,param_4);
    iVar4 = func_005229AC(param_2,piVar3);
    if (iVar4 == 0) {
      piVar3 = param_1 + 0x15;
      if (uVar8 < 3) {
        piVar3 = param_1 + uVar8 * 3 + 0x15;
      }
      if (((*puVar1 & 1) == 0) &&
         (iVar4 = func_00100174((int *)DAT_00369a34), piVar2 = DAT_00369a4c, iVar4 != 0)) {
        iVar4 = (int)uVar9;
        *DAT_00369a4c = iVar4;
        piVar2[1] = iVar4;
        piVar2[2] = iVar4;
      }
      piVar2 = DAT_00369a4c;
      *piVar3 = *DAT_00369a4c;
      piVar3[1] = piVar2[1];
      piVar3[2] = piVar2[2];
    }
    else {
      piVar3 = param_1 + 0x15;
      if (uVar8 < 3) {
        piVar3 = param_1 + uVar8 * 3 + 0x15;
      }
      *piVar3 = *(int *)(iVar4 + 0x1c);
      piVar3[1] = *(int *)(iVar4 + 0x20);
      piVar3[2] = *(int *)(iVar4 + 0x24);
    }
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 3);
  puVar5 = (undefined4 *)func_0010BAB4(100);
  iVar4 = DAT_00369a50;
  if (puVar5 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    objStack_58[0] = 0x3c;
    uVar7 = 5;
    uVar6 = 99;
    piVar3 = (int *)func_002608C8(puVar5,2,99,5,0x3c);
    *piVar3 = iVar4;
    piVar2 = DAT_00369a54;
    piVar3[0x15] = 0;
    func_00260520((int)piVar3,piVar2,uVar6,uVar7);
    *piVar3 = DAT_00369a58;
  }
  func_00428B0C(piVar3,param_2,param_3);
  if (param_1[0xf] < param_1[0x10]) {
    *(int **)(param_1[0x11] + param_1[0xf] * 4) = piVar3;
    param_1[0xf] = param_1[0xf] + 1;
  }
  puVar5 = (undefined4 *)func_0010BAB4(100);
  if (puVar5 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    objStack_58[0] = 0x3c;
    uVar7 = 5;
    uVar6 = 99;
    piVar3 = (int *)func_002608C8(puVar5,2,99,5,0x3c);
    *piVar3 = iVar4;
    piVar2 = DAT_00369a54;
    piVar3[0x15] = 0;
    func_00260520((int)piVar3,piVar2,uVar6,uVar7);
    *piVar3 = DAT_00369a5c;
  }
  func_00428B0C(piVar3,param_2,param_3);
  if (param_1[0xf] < param_1[0x10]) {
    *(int **)(param_1[0x11] + param_1[0xf] * 4) = piVar3;
    param_1[0xf] = param_1[0xf] + 1;
  }
  puVar5 = (undefined4 *)func_0010BAB4(100);
  if (puVar5 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    objStack_58[0] = 0x3c;
    uVar7 = 5;
    uVar6 = 99;
    piVar3 = (int *)func_002608C8(puVar5,2,99,5,0x3c);
    *piVar3 = iVar4;
    piVar2 = DAT_00369a54;
    piVar3[0x15] = 0;
    func_00260520((int)piVar3,piVar2,uVar6,uVar7);
    *piVar3 = DAT_00369a60;
  }
  func_00428B0C(piVar3,param_2,param_3);
  if (param_1[0xf] < param_1[0x10]) {
    *(int **)(param_1[0x11] + param_1[0xf] * 4) = piVar3;
    param_1[0xf] = param_1[0xf] + 1;
  }
  objStack_58[1] = DAT_00369a64;
  objStack_58[0] = DAT_00369a68;
  uVar8 = DAT_00369a68;
  iVar4 = func_005229AC(param_2,(int *)objStack_58);
  puVar5 = DAT_00369a6c;
  if (iVar4 != 0) {
    *DAT_00369a6c = *(undefined4 *)(iVar4 + 0x1c);
    puVar5[1] = *(undefined4 *)(iVar4 + 0x20);
    puVar5[2] = *(undefined4 *)(iVar4 + 0x24);
  }
  if (param_2 != (int *)0x0) {
    (**(code **)(param_2[9] + 8))(param_2 + 9);
    func_006896BC(objStack_58,s_share__s__00369a70,param_2[10],uVar8);
  }
  param_1[7] = (int)param_2;
  param_1[6] = param_1[6] | 0x18;
  (**(code **)(*param_1 + 0x4c))(param_1,0);
  param_1[10] = (int)param_2;
  *(undefined2 *)((int)param_1 + 0x22) = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  param_1[0xd] = (int)param_2;
  *(undefined2 *)((int)param_1 + 0x2e) = 1;
  *(undefined2 *)(param_1 + 0xb) = 0;
  return func_002313DC((int)(param_1 + 8));
}

