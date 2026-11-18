#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_00163988(int param_1);
extern int func_00163D8C(int param_1);
extern int func_001B03EC(int *param_1);
extern int func_001B083C(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0053FA18(int param_1);
extern int func_00659688(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0018e4d8;
extern int *DAT_0018e4dc;
extern uint *DAT_0018e4e0;
extern uint *DAT_0018e4e4;
extern undefined4 DAT_0018e4e8;
extern undefined4 DAT_0018e4ec;
extern undefined4 *DAT_0018e4f0;
extern undefined4 *DAT_0018e4f4;
extern float DAT_0018e4f8;
extern float DAT_0018e4fc;
extern undefined4 DAT_0018e500;

// USA 0018E270 <- EU 0018E270 (Ghidra, non-matching)
// GLOBAL DAT_0018e4d8 int *
// GLOBAL DAT_0018e4dc int *
// GLOBAL DAT_0018e4e0 uint *
// GLOBAL DAT_0018e4e4 uint *
// GLOBAL DAT_0018e4e8 undefined4
// GLOBAL DAT_0018e4ec undefined4
// GLOBAL DAT_0018e4f0 undefined4 *
// GLOBAL DAT_0018e4f4 undefined4 *
// GLOBAL DAT_0018e4f8 float
// GLOBAL DAT_0018e4fc float
// GLOBAL DAT_0018e500 undefined4

undefined4 func_0018E270(int param_1)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 ((float *)(albw_frame + 0xc))
  piVar5 = (int *)func_0052FBA0(*DAT_0018e4d8 + 0x3dbbc,*(uint *)(param_1 + 0x520));
  iVar6 = func_0053FA18(*DAT_0018e4dc);
  uVar4 = DAT_0018e4ec;
  uVar3 = DAT_0018e4e8;
  puVar2 = DAT_0018e4e4;
  puVar1 = DAT_0018e4e0;
  if (iVar6 == 0) {
    if (piVar5 != (int *)0x0) {
      iVar6 = *(int *)(param_1 + 0x524) + 1;
      *(int *)(param_1 + 0x524) = iVar6;
      if (iVar6 < 10) {
        return 0;
      }
      if (((*puVar1 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_0018e4e0), iVar6 != 0)) {
        *DAT_0018e4f0 = uVar3;
      }
      iVar6 = (**(code **)*piVar5)(piVar5,DAT_0018e4f0);
      piVar7 = (int *)0x0;
      if (iVar6 != 0) {
        piVar7 = piVar5;
      }
      if (piVar7 == (int *)0x0) {
        if (((*puVar2 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_0018e4e4), iVar6 != 0)) {
          *DAT_0018e4f4 = uVar4;
        }
        iVar6 = (**(code **)*piVar5)(piVar5,DAT_0018e4f4);
        if (iVar6 == 0) {
          piVar5 = (int *)0x0;
        }
        if (piVar5 != (int *)0x0) {
          func_001B03EC(piVar5);
        }
      }
      else {
        func_00163988((int)piVar7);
      }
    }
    if (*(char *)(param_1 + 0x4a0) == '\a') {
      func_00115154(&local_28,local_24,*(uint *)(param_1 + 1000));
      uVar3 = DAT_0018e500;
      fVar8 = DAT_0018e4f8;
      if (*(char *)(param_1 + 0x55e) == '\0') {
        fVar8 = DAT_0018e4fc;
      }
      *(float *)(param_1 + 0x3e4) = local_24[0] * fVar8;
      *(float *)(param_1 + 0x3dc) = local_28 * fVar8;
      *(undefined4 *)(param_1 + 0x3e0) = uVar3;
      func_00659688((undefined4 *)(param_1 + 0x49c),1);
      *(undefined1 *)(param_1 + 0x55d) = 1;
    }
  }
  else {
    if (((*DAT_0018e4e0 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_0018e4e0), iVar6 != 0)) {
      *DAT_0018e4f0 = uVar3;
    }
    if ((piVar5 == (int *)0x0) ||
       (iVar6 = (**(code **)*piVar5)(piVar5,DAT_0018e4f0), piVar7 = piVar5, iVar6 == 0)) {
      piVar7 = (int *)0x0;
    }
    if (piVar7 != (int *)0x0) {
      return func_00163D8C((int)piVar7);
    }
    if (((*puVar2 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_0018e4e4), iVar6 != 0)) {
      *DAT_0018e4f4 = uVar4;
    }
    if ((piVar5 == (int *)0x0) || (iVar6 = (**(code **)*piVar5)(piVar5,DAT_0018e4f4), iVar6 == 0)) {
      piVar5 = (int *)0x0;
    }
    if (piVar5 != (int *)0x0) {
      return func_001B083C((int)piVar5);
    }
  }
  return 0;
}

