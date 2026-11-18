#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_003DBB54(undefined4 *param_1);
extern int func_003DC2BC(undefined4 *param_1);
extern int func_003DFF78(int param_1,uint *param_2);
extern int func_003E00A8(undefined4 *param_1);
extern int func_003E0828(int param_1,uint *param_2);
extern int func_003E099C(undefined4 *param_1);
extern undefined8 func_0040C8EC(int param_1,uint *param_2);
extern int func_0040CA14(undefined4 *param_1);
extern int func_0040D150(int param_1,uint *param_2);
extern int func_0040D2DC(undefined4 *param_1);
extern undefined4 DAT_00493d18;
extern uint *DAT_00493d1c;
extern undefined4 *DAT_00493d20;
extern undefined4 DAT_00493d24;
extern uint *DAT_00493d28;
extern undefined4 *DAT_00493d2c;
extern undefined4 DAT_00493d30;
extern uint *DAT_00493d34;
extern undefined4 *DAT_00493d38;
extern undefined4 DAT_00493d3c;
extern uint *DAT_00493d40;
extern undefined4 *DAT_00493d44;
extern undefined4 DAT_00493d48;
extern uint *DAT_00493d4c;
extern undefined4 *DAT_00493d50;
extern undefined4 DAT_00493d54;
extern uint *DAT_00493d58;
extern undefined4 *DAT_00493d5c;
extern undefined4 DAT_00493d60;

// USA 00493800 <- EU 004937D8 (Ghidra, non-matching)
// GLOBAL DAT_00493d18 undefined4
// GLOBAL DAT_00493d1c uint *
// GLOBAL DAT_00493d20 undefined4 *
// GLOBAL DAT_00493d24 undefined4
// GLOBAL DAT_00493d28 uint *
// GLOBAL DAT_00493d2c undefined4 *
// GLOBAL DAT_00493d30 undefined4
// GLOBAL DAT_00493d34 uint *
// GLOBAL DAT_00493d38 undefined4 *
// GLOBAL DAT_00493d3c undefined4
// GLOBAL DAT_00493d40 uint *
// GLOBAL DAT_00493d44 undefined4 *
// GLOBAL DAT_00493d48 undefined4
// GLOBAL DAT_00493d4c uint *
// GLOBAL DAT_00493d50 undefined4 *
// GLOBAL DAT_00493d54 undefined4
// GLOBAL DAT_00493d58 uint *
// GLOBAL DAT_00493d5c undefined4 *
// GLOBAL DAT_00493d60 undefined4

undefined4 func_00493800(int param_1,undefined4 param_2,int *param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *unaff_r8;
  uint *unaff_r11;
  
  uVar1 = DAT_00493d18;
  switch(param_2) {
  default:
    goto switchD_004937f8_caseD_0;
  case 1:
    if (((*DAT_00493d1c & 1) == 0) && (iVar2 = func_00100174((int *)DAT_00493d1c), iVar2 != 0)) {
      *DAT_00493d20 = uVar1;
    }
    iVar2 = (**(code **)(*param_3 + 4))(param_3,DAT_00493d20);
    piVar3 = (int *)0x0;
    if (iVar2 != 0) {
      piVar3 = param_3;
    }
    if (piVar3 != (int *)0x0) {
      unaff_r11 = (uint *)(piVar3 + 1);
    }
    if (piVar3 == (int *)0x0) {
      unaff_r11 = (uint *)0x0;
    }
    if (*(int *)(param_1 + 4) != 0) {
      return 0;
    }
    puVar4 = (undefined4 *)func_0010CF28(0xc,param_4,4);
    uVar1 = DAT_00493d24;
    if (puVar4 == (undefined4 *)0x0) break;
    puVar4[2] = unaff_r11;
    *puVar4 = uVar1;
    puVar4[1] = 0;
    puVar6 = (undefined4 *)func_0010CF28(0x110,param_4,4);
    iVar2 = 0;
    if (puVar6 != (undefined4 *)0x0) {
      iVar2 = func_0040D2DC(puVar6);
    }
    puVar4[1] = iVar2;
    puVar4[2] = unaff_r11;
    func_0040D150(iVar2,unaff_r11);
    goto LAB_00493c40;
  case 2:
    if (((*DAT_00493d28 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_00493d28), iVar2 != 0)) {
      *DAT_00493d2c = uVar1;
    }
    iVar2 = (**(code **)(*param_3 + 4))(param_3,DAT_00493d2c);
    piVar3 = (int *)0x0;
    if (iVar2 != 0) {
      piVar3 = param_3;
    }
    if (piVar3 != (int *)0x0) {
      unaff_r11 = (uint *)(piVar3 + 1);
    }
    if (piVar3 == (int *)0x0) {
      unaff_r11 = (uint *)0x0;
    }
    if (*(int *)(param_1 + 4) != 0) {
      return 0;
    }
    puVar4 = (undefined4 *)func_0010CF28(0xc,param_4,4);
    uVar1 = DAT_00493d30;
    if (puVar4 != (undefined4 *)0x0) {
      puVar4[2] = unaff_r11;
      *puVar4 = uVar1;
      puVar4[1] = 0;
      puVar5 = (undefined4 *)func_0010CF28(0x60,param_4,4);
      puVar6 = (undefined4 *)0x0;
      if (puVar5 != (undefined4 *)0x0) {
        puVar6 = func_0040CA14(puVar5);
      }
      puVar4[1] = puVar6;
      puVar4[2] = unaff_r11;
      func_0040C8EC((int)puVar6,unaff_r11);
      goto LAB_00493c40;
    }
    break;
  case 3:
    if (((*DAT_00493d34 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_00493d34), iVar2 != 0)) {
      *DAT_00493d38 = uVar1;
    }
    iVar2 = (**(code **)(*param_3 + 4))(param_3,DAT_00493d38);
    piVar3 = (int *)0x0;
    if (iVar2 != 0) {
      piVar3 = param_3;
    }
    if (piVar3 != (int *)0x0) {
      unaff_r11 = (uint *)(piVar3 + 1);
    }
    if (piVar3 == (int *)0x0) {
      unaff_r11 = (uint *)0x0;
    }
    if (*(int *)(param_1 + 4) != 0) {
      return 0;
    }
    puVar4 = (undefined4 *)func_0010CF28(0xc,param_4,4);
    uVar1 = DAT_00493d3c;
    if (puVar4 != (undefined4 *)0x0) {
      puVar4[2] = unaff_r11;
      *puVar4 = uVar1;
      puVar4[1] = 0;
      puVar6 = (undefined4 *)func_0010CF28(0x108,param_4,4);
      iVar2 = 0;
      if (puVar6 != (undefined4 *)0x0) {
        iVar2 = func_003E099C(puVar6);
      }
      puVar4[1] = iVar2;
      puVar4[2] = unaff_r11;
      func_003E0828(iVar2,unaff_r11);
      goto LAB_00493c40;
    }
    break;
  case 4:
    if (((*DAT_00493d40 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_00493d40), iVar2 != 0)) {
      *DAT_00493d44 = uVar1;
    }
    iVar2 = (**(code **)(*param_3 + 4))(param_3,DAT_00493d44);
    piVar3 = (int *)0x0;
    if (iVar2 != 0) {
      piVar3 = param_3;
    }
    if (piVar3 != (int *)0x0) {
      unaff_r11 = (uint *)(piVar3 + 1);
    }
    if (piVar3 == (int *)0x0) {
      unaff_r11 = (uint *)0x0;
    }
    if (*(int *)(param_1 + 4) != 0) {
      return 0;
    }
    puVar4 = (undefined4 *)func_0010CF28(0xc,param_4,4);
    uVar1 = DAT_00493d48;
    if (puVar4 != (undefined4 *)0x0) {
      puVar4[2] = unaff_r11;
      *puVar4 = uVar1;
      puVar4[1] = 0;
      puVar5 = (undefined4 *)func_0010CF28(0x58,param_4,4);
      puVar6 = (undefined4 *)0x0;
      if (puVar5 != (undefined4 *)0x0) {
        puVar6 = func_003E00A8(puVar5);
      }
      puVar4[1] = puVar6;
      puVar4[2] = unaff_r11;
      func_003DFF78((int)puVar6,unaff_r11);
      goto LAB_00493c40;
    }
    break;
  case 5:
    if (((*DAT_00493d4c & 1) == 0) && (iVar2 = func_00100174((int *)DAT_00493d4c), iVar2 != 0)) {
      *DAT_00493d50 = uVar1;
    }
    iVar2 = (**(code **)(*param_3 + 4))(param_3,DAT_00493d50);
    piVar3 = (int *)0x0;
    if (iVar2 != 0) {
      piVar3 = param_3;
    }
    if (piVar3 != (int *)0x0) {
      unaff_r8 = piVar3 + 1;
    }
    if (piVar3 == (int *)0x0) {
      unaff_r8 = (int *)0x0;
    }
    if (*(int *)(param_1 + 4) != 0) {
      return 0;
    }
    puVar4 = (undefined4 *)func_0010CF28(0xc,param_4,4);
    uVar1 = DAT_00493d54;
    if (puVar4 != (undefined4 *)0x0) {
      puVar4[2] = unaff_r8;
      *puVar4 = uVar1;
      puVar4[1] = 0;
      puVar5 = (undefined4 *)func_0010CF28(0x14,param_4,4);
      puVar6 = (undefined4 *)0x0;
      if (puVar5 != (undefined4 *)0x0) {
        puVar6 = func_003DC2BC(puVar5);
LAB_00493d10:
        puVar6[4] = 0;
      }
LAB_00493c34:
      puVar4[1] = puVar6;
      puVar4[2] = unaff_r8;
      puVar6[4] = unaff_r8;
      goto LAB_00493c40;
    }
    break;
  case 6:
    if (((*DAT_00493d58 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_00493d58), iVar2 != 0)) {
      *DAT_00493d5c = uVar1;
    }
    iVar2 = (**(code **)(*param_3 + 4))(param_3,DAT_00493d5c);
    piVar3 = (int *)0x0;
    if (iVar2 != 0) {
      piVar3 = param_3;
    }
    if (piVar3 != (int *)0x0) {
      unaff_r8 = piVar3 + 1;
    }
    if (piVar3 == (int *)0x0) {
      unaff_r8 = (int *)0x0;
    }
    if (*(int *)(param_1 + 4) != 0) {
      return 0;
    }
    puVar4 = (undefined4 *)func_0010CF28(0xc,param_4,4);
    uVar1 = DAT_00493d60;
    if (puVar4 != (undefined4 *)0x0) {
      puVar4[2] = unaff_r8;
      *puVar4 = uVar1;
      puVar4[1] = 0;
      puVar5 = (undefined4 *)func_0010CF28(0x14,param_4,4);
      puVar6 = (undefined4 *)0x0;
      if (puVar5 != (undefined4 *)0x0) {
        puVar6 = func_003DBB54(puVar5);
        goto LAB_00493d10;
      }
      goto LAB_00493c34;
    }
  }
  puVar4 = (undefined4 *)0x0;
LAB_00493c40:
  *(undefined4 **)(param_1 + 4) = puVar4;
switchD_004937f8_caseD_0:
  *(char *)(param_1 + 0x18) = (char)param_2;
  *(int **)(param_1 + 0x1c) = param_3;
  return 1;
}

