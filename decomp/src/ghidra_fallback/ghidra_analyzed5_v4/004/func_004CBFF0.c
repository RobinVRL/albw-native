#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_004CA6F0(int param_1,uint param_2,float fparam_0);
extern int func_004CBC30(uint param_1);
extern int func_004F7A60(int param_1,int param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_005568B0(int param_1);
extern int func_005568E8(int param_1);
extern int func_0066A284(undefined4 *param_1,undefined1 param_2);
extern int *DAT_004cc17c;
extern uint *DAT_004cc180;
extern undefined4 *DAT_004cc184;
extern undefined4 DAT_004cc188;
extern int DAT_004cc18c;
extern float DAT_004cc190;
extern int *DAT_004cc194;
extern float DAT_004cc198;

// USA 004CBFF0 <- EU 004CBFC8 (Ghidra, non-matching)
// GLOBAL DAT_004cc17c int *
// GLOBAL DAT_004cc180 uint *
// GLOBAL DAT_004cc184 undefined4 *
// GLOBAL DAT_004cc188 undefined4
// GLOBAL DAT_004cc18c int
// GLOBAL DAT_004cc190 float
// GLOBAL DAT_004cc194 int *
// GLOBAL DAT_004cc198 float

undefined4 func_004CBFF0(int param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  
  if (*(char *)(param_1 + 0x8c0) == '\x05' || *(char *)(param_1 + 0x8c0) == '\r') {
    return 0;
  }
  uVar3 = func_004CBC30(*(uint *)(param_2 + 0x28));
  piVar1 = DAT_004cc194;
  bVar7 = uVar3 == 0;
  if (bVar7) {
    uVar3 = (uint)*(byte *)(param_1 + 0x991);
  }
  if (!bVar7 || uVar3 != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x3a4) == *(int *)(param_1 + 0x9a4)) {
    uVar3 = func_005568E8(*DAT_004cc194);
    iVar5 = func_004CA6F0(param_1,uVar3,DAT_004cc198);
    if (iVar5 != 0) {
      return 0;
    }
    if (*(char *)(param_1 + 0x978) == '\0') goto LAB_004cc16c;
    cVar2 = func_005568B0(*piVar1);
    if (cVar2 == '\0') {
      return 0;
    }
    *(undefined1 *)(param_1 + 0x991) = 0x2d;
    uVar3 = *(uint *)(param_1 + 0x994);
    if (uVar3 < *(uint *)(param_1 + 0x998)) goto LAB_004cc164;
  }
  else {
    uVar3 = *(uint *)(param_2 + 0x28);
    puVar4 = (undefined4 *)func_0052FBA0(*DAT_004cc17c + 0x3dbbc,uVar3);
    if (((*DAT_004cc180 & 1) == 0) && (iVar5 = func_00100174((int *)DAT_004cc180), iVar5 != 0)) {
      *DAT_004cc184 = DAT_004cc188;
    }
    if ((puVar4 == (undefined4 *)0x0) ||
       (iVar5 = (**(code **)*puVar4)(puVar4,DAT_004cc184), iVar5 == 0)) {
      puVar4 = (undefined4 *)0x0;
    }
    if (puVar4 == (undefined4 *)0x0) {
      return 0;
    }
    if (*(short *)(DAT_004cc18c + (int)puVar4) < 1) {
      return 0;
    }
    iVar5 = func_004CA6F0(param_1,uVar3,DAT_004cc190);
    if (iVar5 != 0) {
      return 0;
    }
    *(undefined1 *)(param_1 + 0x991) = 0x2d;
    uVar3 = *(uint *)(param_1 + 0x994);
    if (uVar3 < *(uint *)(param_1 + 0x998)) {
LAB_004cc164:
      *(uint *)(param_1 + 0x994) = uVar3 + 1;
      goto LAB_004cc16c;
    }
  }
  func_0066A284((undefined4 *)(param_1 + 0x8bc),5);
LAB_004cc16c:
  uVar6 = func_004F7A60(param_1,param_2);
  return uVar6;
}

