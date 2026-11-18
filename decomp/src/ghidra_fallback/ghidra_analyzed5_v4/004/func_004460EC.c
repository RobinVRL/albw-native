#include "ghidra_types.h"

extern int func_00446668(int param_1);
extern int func_00447E28(int param_1,int param_2,int *param_3,int param_4);
extern int func_00449FD0(int param_1,int *param_2);
extern int func_005194F4(int param_1);
extern int func_00519544(int param_1);
extern int func_0051AAF8(int param_1);
extern int func_0051AD38(int param_1);
extern int func_0051BAA0(int param_1);
extern int *DAT_00446228;

// USA 004460EC <- EU 004460C4 (Ghidra, non-matching)
// GLOBAL DAT_00446228 int *

undefined4 func_004460EC(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int *piVar5;
  bool bVar6;
  
  if (*(char *)(param_1 + 0x244) != '\0') {
    func_00447E28(param_1,1,*(int **)(param_1 + 0x23c),0);
    func_00447E28(param_1,0,*(int **)(param_1 + 0x240),0);
    *(undefined1 *)(param_1 + 0x294) = 1;
    *(undefined1 *)(param_1 + 0x244) = 0;
    func_00446668(param_1);
    func_00449FD0(param_1,(int *)0x0);
  }
  piVar1 = DAT_00446228;
  func_00519544(*DAT_00446228);
  func_0051AD38(*piVar1);
  func_005194F4(*piVar1);
  func_0051AAF8(*piVar1);
  uVar4 = 0;
  do {
    if (uVar4 < *(uint *)(param_1 + 0x1ac)) {
      uVar2 = *(uint *)(*(int *)(param_1 + 0x1b4) + uVar4 * 4);
    }
    else {
      uVar2 = 0;
    }
    bVar6 = *(char *)(uVar2 + 0xd) == '\0';
    if (bVar6) {
      uVar2 = (uint)*(byte *)(uVar2 + 0xe);
    }
    if (!bVar6 || uVar2 != 0) {
      if (uVar4 < *(uint *)(param_1 + 0x1ac)) {
        piVar5 = *(int **)(*(int *)(param_1 + 0x1b4) + uVar4 * 4);
      }
      else {
        piVar5 = (int *)0x0;
      }
      (**(code **)(*piVar5 + 0x34))(piVar5);
      *(undefined1 *)((int)piVar5 + 0xe) = 0;
      *(undefined1 *)((int)piVar5 + 0xd) = 0;
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 0x14);
  uVar4 = 0;
  do {
    puVar3 = (uint *)(param_1 + 0x188);
    if (uVar4 < 4) {
      puVar3 = puVar3 + uVar4;
    }
    uVar2 = *puVar3;
    bVar6 = *(char *)(uVar2 + 0xd) == '\0';
    if (bVar6) {
      uVar2 = (uint)*(byte *)(uVar2 + 0xe);
    }
    if (!bVar6 || uVar2 != 0) {
      piVar5 = (int *)(param_1 + 0x188);
      if (uVar4 < 4) {
        piVar5 = piVar5 + uVar4;
      }
      piVar5 = (int *)*piVar5;
      (**(code **)(*piVar5 + 0x34))(piVar5);
      *(undefined1 *)((int)piVar5 + 0xe) = 0;
      *(undefined1 *)((int)piVar5 + 0xd) = 0;
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 4);
  return func_0051BAA0(*piVar1);
}

