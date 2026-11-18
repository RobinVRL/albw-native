#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0051D960(int param_1,int param_2);
extern int func_0051DA04(int param_1);
extern int func_0051DAA4(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00542868(int param_1,undefined4 *param_2);
extern int func_0058A1F4(int param_1);
extern int func_00656650(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00126644;
extern uint *DAT_00126648;
extern undefined4 DAT_0012664c;
extern undefined4 *DAT_00126650;
extern float DAT_00126654;
extern float DAT_00126658;

// USA 001263A0 <- EU 001263A0 (Ghidra, non-matching)
// GLOBAL DAT_00126644 int *
// GLOBAL DAT_00126648 uint *
// GLOBAL DAT_0012664c undefined4
// GLOBAL DAT_00126650 undefined4 *
// GLOBAL DAT_00126654 float
// GLOBAL DAT_00126658 float

undefined4 func_001263A0(int param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined4 uVar3;
  float fVar4;
  char cVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  float fVar10;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(undefined4 * *)(albw_frame + 0x8))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x10))
  local_38 = func_0051DAA4(param_1);
  piVar1 = DAT_00126644;
  puVar6 = (undefined4 *)func_0052FBA0(*DAT_00126644 + 0x3dbbc,*(uint *)(param_1 + 0x8e0));
  uVar3 = DAT_0012664c;
  puVar2 = DAT_00126648;
  bVar9 = false;
  if (puVar6 == (undefined4 *)0x0) {
LAB_00126450:
    puVar6 = (undefined4 *)func_0052FBA0(*piVar1 + 0x3dbbc,*(uint *)(param_1 + 0x8e0));
    if (puVar6 != (undefined4 *)0x0) {
      if (((*puVar2 & 1) == 0) && (iVar7 = func_00100174((int *)DAT_00126648), iVar7 != 0)) {
        *DAT_00126650 = uVar3;
      }
      iVar7 = (**(code **)*puVar6)(puVar6,DAT_00126650);
      if (iVar7 == 0) {
        puVar6 = (undefined4 *)0x0;
      }
      if ((puVar6 != (undefined4 *)0x0) && (*(char *)(puVar6 + 0x23f) != '\0')) goto LAB_00126524;
    }
  }
  else {
    if (((*DAT_00126648 & 1) == 0) && (iVar7 = func_00100174((int *)DAT_00126648), iVar7 != 0)) {
      *DAT_00126650 = uVar3;
    }
    iVar7 = (**(code **)*puVar6)(puVar6,DAT_00126650);
    if (iVar7 == 0) {
      puVar6 = (undefined4 *)0x0;
    }
    if (puVar6 == (undefined4 *)0x0) goto LAB_00126450;
    uVar8 = func_0058A1F4((int)puVar6);
    bVar9 = uVar8 != 0;
    if (!bVar9) goto LAB_00126450;
  }
  if (local_38 == (undefined4 *)0x0) {
    if (*(int *)(param_1 + 0x8e8) < *(int *)(param_1 + 0x8bc)) goto LAB_00126524;
  }
  else if (((!bVar9) && (cVar5 = func_0051DA04(param_1), cVar5 == '\0')) &&
          (bVar9 = func_0051D960(param_1,0), !bVar9)) {
LAB_00126524:
    return func_00656650((undefined4 *)(param_1 + 0x8bc),1);
  }
  cVar5 = func_0051DA04(param_1);
  fVar10 = DAT_00126654;
  if (((cVar5 == '\0') && (bVar9 = func_0051D960(param_1,0), bVar9)) &&
     (puVar6 = (undefined4 *)func_0052FBA0(*piVar1 + 0x3dbbc,*(uint *)(param_1 + 0x8e0)),
     puVar6 != (undefined4 *)0x0)) {
    if (((*puVar2 & 1) == 0) && (iVar7 = func_00100174((int *)DAT_00126648), iVar7 != 0)) {
      *DAT_00126650 = uVar3;
    }
    iVar7 = (**(code **)*puVar6)(puVar6,DAT_00126650);
    if (iVar7 == 0) {
      puVar6 = (undefined4 *)0x0;
    }
    if (puVar6 != (undefined4 *)0x0) {
      func_00542868((int)puVar6,&local_38);
      *(float *)(param_1 + 0x574) = fVar10;
      *(undefined4 **)(param_1 + 0x3d0) = local_38;
      *(undefined4 *)(param_1 + 0x3d4) = uStack_34;
      *(undefined4 *)(param_1 + 0x3d8) = uStack_30;
      uVar8 = *(uint *)(param_1 + 0x59c) & 0xffffff7f;
      goto LAB_00126604;
    }
  }
  fVar4 = DAT_00126658;
  if (*(float *)(param_1 + 0x574) != fVar10) {
    return 0;
  }
  *(float *)(param_1 + 0x574) = DAT_00126658;
  *(float *)(param_1 + 0x3d4) = *(float *)(param_1 + 0x3d4) - fVar4;
  uVar8 = *(uint *)(param_1 + 0x59c) | 0x80;
LAB_00126604:
  *(uint *)(param_1 + 0x59c) = uVar8;
  return 0;
}

