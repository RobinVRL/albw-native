#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00115108(undefined4 *param_1,undefined4 *param_2,undefined4 param_3);
extern int func_00115234(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
extern int func_00115960(float *param_1,float *param_2,float *param_3);
extern int func_005630C8(int param_1,int *param_2);
extern int func_00563710(uint *param_1,uint *param_2,int param_3);
extern int func_00563918(int param_1,uint *param_2);
extern undefined4 *DAT_00497d6c;
extern uint DAT_00497d70;
extern undefined4 DAT_00497d74;
extern undefined4 *DAT_00497d78;
extern int *DAT_00497d7c;
extern uint DAT_00497d80;
extern undefined4 DAT_00497d84;
extern uint DAT_00497d88;
extern uint *DAT_00497d8c;
extern uint *DAT_00497d90;

// USA 004979CC <- EU 004979A4 (Ghidra, non-matching)
// GLOBAL DAT_00497d6c undefined4 *
// GLOBAL DAT_00497d70 uint
// GLOBAL DAT_00497d74 undefined4
// GLOBAL DAT_00497d78 undefined4 *
// GLOBAL DAT_00497d7c int *
// GLOBAL DAT_00497d80 uint
// GLOBAL DAT_00497d84 undefined4
// GLOBAL DAT_00497d88 uint
// GLOBAL DAT_00497d8c uint *
// GLOBAL DAT_00497d90 uint *

void func_004979CC(int param_1,uint param_2,int *param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint *puVar5;
  uint *puVar6;
  undefined4 uVar7;
  uint *puVar8;
  int *piVar9;
  int *piVar10;
  uint in_fpscr;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define afStack_a8 ((float *)(albw_frame + 0x8))
  #define afStack_68 ((float *)(albw_frame + 0x48))
  piVar10 = (int *)(param_1 + 0x4878);
  piVar9 = (int *)(param_1 + 0x487c);
  if (param_2 < 2) {
    if (1 < *(byte *)(param_1 + 0x324)) {
      if (*piVar10 != 0) {
        iVar3 = func_005630C8(*piVar10,(int *)*piVar9);
        *piVar9 = iVar3;
        *piVar10 = 0;
      }
      puVar5 = (uint *)*piVar9;
      func_0010E3C4(puVar5,*(uint **)(param_1 + 4),*(int *)(param_1 + 8) << 2);
      puVar4 = DAT_00497d6c;
      *piVar9 = (int)(puVar5 + *(int *)(param_1 + 8));
      func_00115234(afStack_a8,(undefined4 *)(param_1 + 0x4884),puVar4);
      func_00115960(afStack_68,(float *)(param_1 + 0x48b4),afStack_a8);
      uVar7 = DAT_00497d74;
      uVar11 = DAT_00497d70;
      puVar5 = (uint *)*piVar9;
      *puVar5 = *(byte *)(param_1 + 0xe) | 0x80000000;
      puVar5[1] = uVar11;
      func_00115108(puVar5 + 2,afStack_68,uVar7);
      *piVar9 = (int)(puVar5 + 0x14);
      puVar4 = DAT_00497d78;
      puVar5[0x14] = *(byte *)(param_1 + 0x16) | 0x80000000;
      puVar5[0x15] = uVar11;
      func_00115108(puVar5 + 0x16,puVar4,uVar7);
      puVar5 = puVar5 + 0x28;
LAB_00497bcc:
      *piVar9 = (int)puVar5;
    }
  }
  else if (param_2 == 2) {
    if (*(char *)(param_1 + 0x324) != '\x02') {
      if (*piVar10 != 0) {
        iVar3 = func_005630C8(*piVar10,(int *)*piVar9);
        *piVar9 = iVar3;
        *piVar10 = 0;
      }
      puVar5 = (uint *)*piVar9;
      func_0010E3C4(puVar5,*(uint **)(param_1 + 0x54),*(int *)(param_1 + 0x58) << 2);
      puVar4 = DAT_00497d6c;
      *piVar9 = (int)(puVar5 + *(int *)(param_1 + 0x58));
      func_00115234(afStack_68,(undefined4 *)(param_1 + 0x4884),puVar4);
      func_00115960(afStack_a8,(float *)(param_1 + 0x48b4),afStack_68);
      uVar7 = DAT_00497d74;
      uVar11 = DAT_00497d70;
      puVar5 = (uint *)*piVar9;
      *puVar5 = *(byte *)(param_1 + 0x5e) | 0x80000000;
      puVar5[1] = uVar11;
      func_00115108(puVar5 + 2,afStack_a8,uVar7);
      *piVar9 = (int)(puVar5 + 0x14);
      puVar4 = DAT_00497d78;
      puVar5[0x14] = *(byte *)(param_1 + 0x66) | 0x80000000;
      puVar5[0x15] = uVar11;
      func_00115108(puVar5 + 0x16,puVar4,uVar7);
      piVar10 = DAT_00497d7c;
      *piVar9 = (int)(puVar5 + 0x28);
      iVar3 = *(int *)(*piVar10 + 0xdc);
      iVar12 = *(int *)(*piVar10 + 0xe0);
      puVar5[0x28] = *(byte *)(param_1 + 0xa6) | 0x80000000;
      uVar14 = ALBW_AS_U32(VectorUnsignedToFloat(iVar12,(byte)(in_fpscr >> 0x15) & 3));
      uVar11 = ALBW_AS_U32(VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3));
      puVar5[0x29] = DAT_00497d80;
      puVar5[0x2a] = 0x40000000;
      uVar13 = ALBW_AS_U32(VectorUnsignedToFloat(iVar3 * iVar12,(byte)(in_fpscr >> 0x15) & 3));
      puVar5[0x2b] = uVar13;
      puVar5[0x2c] = uVar14;
      puVar5[0x2d] = uVar11;
      puVar5 = puVar5 + 0x2e;
      goto LAB_00497bcc;
    }
    puVar4 = (undefined4 *)*piVar9;
    *piVar9 = (int)(puVar4 + 1);
    *puVar4 = 0;
    uVar7 = DAT_00497d84;
    puVar4 = (undefined4 *)*piVar9;
    *piVar9 = (int)(puVar4 + 1);
    *puVar4 = uVar7;
  }
  if (param_2 == 0) {
LAB_00497c10:
    if (*(char *)(param_1 + 0x324) == '\0' || *(char *)(param_1 + 0x324) == '\x02')
    goto LAB_00497d5c;
    puVar5 = func_00563710((uint *)(param_1 + 0xac),(uint *)*piVar9,1);
    *piVar9 = (int)puVar5;
    puVar6 = func_00563918(param_1 + 0x1fc,puVar5);
    *piVar9 = (int)puVar6;
    uVar11 = DAT_00497d88;
    *puVar6 = *(byte *)(param_1 + 0x7e) | 0x80000000;
    puVar5 = DAT_00497d8c;
    puVar6[1] = uVar11;
    puVar6[2] = puVar5[3];
    puVar6[3] = puVar5[2];
    puVar6[4] = puVar5[1];
    puVar6[5] = *puVar5;
    *piVar9 = (int)(puVar6 + 6);
    puVar6[6] = *(byte *)(param_1 + 0x86) | 0x80000000;
    puVar6[7] = uVar11;
    puVar5 = DAT_00497d90;
    puVar6[8] = DAT_00497d90[3];
    puVar6[9] = puVar5[2];
    puVar6[10] = puVar5[1];
    puVar8 = puVar6 + 0xc;
    puVar6[0xb] = *puVar5;
  }
  else {
    if (param_2 != 1) {
      if (param_2 != 2) goto LAB_00497d5c;
      goto LAB_00497c10;
    }
    if (*(int **)(param_1 + 0x328) != param_3) {
      uVar7 = (**(code **)(*param_3 + 0x18))(param_3);
      *(undefined4 *)(param_1 + 0x154) = uVar7;
      uVar2 = (**(code **)(*param_3 + 0x10))(param_3);
      *(undefined2 *)(param_1 + 0x158) = uVar2;
      uVar2 = (**(code **)(*param_3 + 0x14))(param_3);
      *(undefined2 *)(param_1 + 0x15a) = uVar2;
      uVar1 = (**(code **)(*param_3 + 0x1c))(param_3);
      *(undefined1 *)(param_1 + 0x15c) = uVar1;
      uVar1 = (**(code **)(*param_3 + 0x20))(param_3);
      *(undefined1 *)(param_1 + 0x169) = uVar1;
      puVar5 = func_00563710((uint *)(param_1 + 0x154),(uint *)*piVar9,1);
      *piVar9 = (int)puVar5;
    }
    if (*(char *)(param_1 + 0x324) == '\x01') goto LAB_00497d5c;
    puVar8 = func_00563918(param_1 + 0x290,(uint *)*piVar9);
  }
  *piVar9 = (int)puVar8;
LAB_00497d5c:
  *(char *)(param_1 + 0x324) = (char)param_2;
  *(int **)(param_1 + 0x328) = param_3;
  return;
}

