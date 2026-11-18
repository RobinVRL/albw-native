#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_001139F8(int param_1);
extern int func_001164F4(undefined4 *param_1,uint param_2);
extern int func_00404F24(undefined4 *param_1,undefined4 *param_2);
extern int DAT_00468398;
extern int *DAT_0046839c;
extern uint *DAT_004683a0;

// USA 00468030 <- EU 00468008 (Ghidra, non-matching)
// GLOBAL DAT_00468398 int
// GLOBAL DAT_0046839c int *
// GLOBAL DAT_004683a0 uint *

/* WARNING: Removing unreachable block (ram,0x00468268) */

void func_00468030(int param_1,uint *param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint *puVar8;
  int *piVar9;
  uint uVar10;
  uint *puVar11;
  uint *extraout_r1;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  uint unaff_r11;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(undefined4 *)(albw_frame + 0x0))
  #define local_2c (*(undefined4 *)(albw_frame + 0x4))
  #define local_28 (*(undefined1 *)(albw_frame + 0x8))
  #define local_27 (*(undefined1 *)(albw_frame + 0x9))
  #define local_24 (*(undefined4 *)(albw_frame + 0xc))
  #define local_20 (*(int *)(albw_frame + 0x10))
  if (*(int *)(param_1 + 0x210) != 0) {
    if (((*(uint *)(DAT_00468398 + 4) & 1) == 0) &&
       (iVar3 = func_00100174(DAT_0046839c), puVar2 = DAT_004683a0, iVar3 != 0)) {
      DAT_004683a0[2] = (uint)(DAT_004683a0 + 3);
      puVar2[1] = 0x40;
      *puVar2 = 0;
    }
    puVar2 = DAT_004683a0;
    uVar10 = 0;
    *DAT_004683a0 = 0;
    if (0 < *(int *)(param_1 + 0x440)) {
      do {
        if (uVar10 < *(uint *)(param_1 + 0x440)) {
          iVar3 = *(int *)(param_1 + 0x448) + uVar10 * 0x18;
        }
        else {
          iVar3 = *(int *)(param_1 + 0x448);
        }
        if ((*(char *)(iVar3 + 0xf) != '\0') && (*(char *)(iVar3 + 0xc) == param_3)) {
          if (param_2 != (uint *)0x0) {
            uVar12 = *param_2;
            uVar4 = 0;
            if (0 < (int)uVar12) {
              do {
                if (uVar4 < uVar12) {
                  unaff_r11 = param_2[2];
                  iVar14 = *(int *)(unaff_r11 + uVar4 * 4);
                }
                else {
                  iVar14 = 0;
                }
                if ((int)*(short *)(iVar14 + 2) == (int)*(char *)(iVar3 + 0xd)) goto LAB_0046813c;
                uVar4 = uVar4 + 1;
              } while ((int)uVar4 < (int)uVar12);
            }
          }
          iVar3 = *(int *)(param_1 + 0x448);
          if (uVar10 < *(uint *)(param_1 + 0x440)) {
            iVar3 = iVar3 + uVar10 * 0x18;
          }
          uVar4 = *DAT_004683a0;
          if ((int)uVar4 < (int)DAT_004683a0[1]) {
            puVar11 = DAT_004683a0 + 2;
            uVar13 = *(undefined4 *)(iVar3 + 8);
            *DAT_004683a0 = uVar4 + 1;
            *(undefined4 *)(*puVar11 + uVar4 * 4) = uVar13;
          }
        }
LAB_0046813c:
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < *(int *)(param_1 + 0x440));
    }
    uVar12 = *puVar2;
    uVar4 = 1 - *(int *)(param_1 + 0x43c);
    uVar10 = 0;
    do {
      iVar3 = param_1 + 0x21c;
      if (uVar10 < 2) {
        iVar3 = param_1 + 0x21c + uVar10 * 0x110;
      }
      if (uVar12 == *(uint *)(iVar3 + 4)) {
        puVar11 = (uint *)(param_1 + 0x21c);
        if (uVar10 < 2) {
          puVar11 = (uint *)(param_1 + 0x21c + uVar10 * 0x110);
        }
        if (0 < (int)uVar12) {
          puVar11 = puVar11 + 1;
          unaff_r11 = *puVar11;
        }
        uVar5 = 0;
        if ((int)uVar12 < 1) goto LAB_00468304;
        while( true ) {
          piVar9 = (int *)puVar2[2];
          if (uVar5 < uVar12) {
            piVar9 = (int *)puVar2[2] + uVar5;
          }
          piVar7 = (int *)puVar11[2];
          if (uVar5 < unaff_r11) {
            piVar7 = (int *)puVar11[2] + uVar5;
          }
          if (*piVar9 != *piVar7) break;
          uVar5 = uVar5 + 1;
          if ((int)uVar12 <= (int)uVar5) goto LAB_00468304;
        }
      }
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < 2);
    puVar6 = (undefined4 *)(param_1 + 0x21c);
    if (uVar4 < 2) {
      puVar6 = (undefined4 *)(param_1 + 0x21c + uVar4 * 0x110);
    }
    func_001164F4((undefined4 *)*puVar6,0x8000);
    uVar12 = *puVar2;
    uVar10 = uVar4;
    if (uVar12 == 0) {
      iVar3 = param_1 + 0x21c;
      if (uVar4 < 2) {
        iVar3 = param_1 + 0x21c + uVar4 * 0x110;
      }
      *(undefined4 *)(iVar3 + 4) = 0;
    }
    else {
      uVar5 = 0;
      puVar11 = extraout_r1;
      if (0 < (int)uVar12) {
        do {
          piVar9 = (int *)(param_1 + 0x21c);
          if (uVar4 < 2) {
            piVar9 = (int *)(param_1 + 0x21c + uVar4 * 0x110);
          }
          if (uVar5 < *DAT_004683a0) {
            piVar7 = (int *)(DAT_004683a0[2] + uVar5 * 4);
          }
          else {
            piVar7 = (int *)DAT_004683a0[2];
          }
          puVar8 = (uint *)(*piVar9 + -4);
          puVar11 = (uint *)(*piVar7 + -4);
          iVar3 = 0x1000;
          do {
            iVar3 = iVar3 + -1;
            puVar8[1] = puVar8[1] | puVar11[1];
            puVar11 = puVar11 + 2;
            puVar1 = puVar8 + 2;
            puVar8 = puVar8 + 2;
            *puVar8 = *puVar11 | *puVar1;
          } while (iVar3 != 0);
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < (int)uVar12);
      }
      if (uVar4 < 2) {
        puVar11 = (uint *)(uVar4 * 0x11);
      }
      uVar12 = *puVar2;
      iVar3 = param_1 + 0x21c;
      if (uVar4 < 2) {
        iVar3 = iVar3 + (int)puVar11 * 0x10;
      }
      func_0010E3C4(*(uint **)(iVar3 + 0xc),(uint *)puVar2[2],uVar12 << 2);
      if (uVar12 <= *(uint *)(iVar3 + 8)) {
        *(uint *)(iVar3 + 4) = uVar12;
      }
    }
LAB_00468304:
    piVar9 = (int *)(param_1 + 0x21c);
    if (uVar10 < 2) {
      piVar9 = (int *)(param_1 + 0x21c + uVar10 * 0x110);
    }
    local_20 = func_001139F8(*piVar9);
    local_28 = 0x13;
    local_2c = 0x1000100;
    local_30 = 1;
    local_24 = 0x1000100;
    local_27 = 0;
    iVar3 = (**(code **)(**(int **)(param_1 + 0x218) + 0x28))(*(int **)(param_1 + 0x218),0);
    func_00404F24(*(undefined4 **)(iVar3 + 0x7c),&local_30);
    *(byte *)(iVar3 + 0x9e) = *(byte *)(iVar3 + 0x9e) & 0xfb;
    *(uint *)(param_1 + 0x43c) = uVar10;
  }
  return;
}

