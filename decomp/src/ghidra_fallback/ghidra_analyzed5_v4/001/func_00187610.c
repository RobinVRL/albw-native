#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00188F3C(int param_1);
extern int func_0052E32C(int param_1,undefined4 *param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00542C88(int param_1,float *param_2);
extern int func_005568BC(int param_1);
extern int *DAT_00187700;
extern uint *DAT_00187704;
extern undefined4 *DAT_00187708;
extern undefined4 DAT_0018770c;
extern int *DAT_00187710;

// USA 00187610 <- EU 00187610 (Ghidra, non-matching)
// GLOBAL DAT_00187700 int *
// GLOBAL DAT_00187704 uint *
// GLOBAL DAT_00187708 undefined4 *
// GLOBAL DAT_0018770c undefined4
// GLOBAL DAT_00187710 int *

void func_00187610(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  func_00188F3C(param_1);
  puVar2 = (undefined4 *)func_0052FBA0(*DAT_00187700 + 0x3dbbc,*(uint *)(param_1 + 0x4dc));
  if (((*DAT_00187704 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_00187704), iVar3 != 0)) {
    *DAT_00187708 = DAT_0018770c;
  }
  if ((puVar2 == (undefined4 *)0x0) ||
     (iVar3 = (**(code **)*puVar2)(puVar2,DAT_00187708), iVar3 == 0)) {
    puVar2 = (undefined4 *)0x0;
  }
  piVar1 = DAT_00187710;
  if (puVar2 == (undefined4 *)0x0) {
    func_0052E32C(*DAT_00187710,(float *)(param_1 + 0x3d0));
    puVar2 = (undefined4 *)func_005568BC(*piVar1);
    uVar4 = *puVar2;
    uVar5 = puVar2[1];
    *(undefined4 *)(param_1 + 0x53c) = puVar2[2];
    *(undefined4 *)(param_1 + 0x534) = uVar4;
    *(undefined4 *)(param_1 + 0x538) = uVar5;
    uVar4 = **(undefined4 **)(*piVar1 + 0x24);
  }
  else {
    func_00542C88((int)puVar2,(float *)(param_1 + 0x3d0));
    uVar4 = puVar2[0x251];
    uVar5 = puVar2[0x252];
    *(undefined4 *)(param_1 + 0x534) = puVar2[0x250];
    *(undefined4 *)(param_1 + 0x538) = uVar4;
    *(undefined4 *)(param_1 + 0x53c) = uVar5;
    uVar4 = puVar2[0xfa];
  }
  *(undefined4 *)(param_1 + 1000) = uVar4;
  return;
}

