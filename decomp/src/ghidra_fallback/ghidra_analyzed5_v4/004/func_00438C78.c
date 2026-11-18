#include "ghidra_types.h"

extern int func_0016656C(int param_1,int param_2);
extern int func_00166C00(int param_1,int param_2);
extern int func_001B6C04(int param_1);
extern int func_002313DC(int param_1);
extern int func_004B948C(int param_1,int param_2);
extern int func_0066C2E0(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00438d74;

// USA 00438C78 <- EU 00438C58 (Ghidra, non-matching)
// GLOBAL DAT_00438d74 int *

undefined4 func_00438C78(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  func_001B6C04(param_1);
  piVar1 = DAT_00438d74;
  func_0016656C(*DAT_00438d74,param_1);
  func_00166C00(*piVar1,0);
  *(undefined2 *)(param_1 + 0x1b0) = 0xffff;
  func_0066C2E0((undefined4 *)(param_1 + 200),0);
  uVar2 = 0;
  *(undefined1 *)(param_1 + 0x1b2) = 0;
  do {
    piVar1 = (int *)(param_1 + 0x198);
    if (uVar2 < 2) {
      piVar1 = piVar1 + uVar2;
    }
    func_004B948C(param_1,*piVar1);
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 2);
  uVar2 = 0;
  if (*(int *)(param_1 + 0x1b4) == -1) {
    do {
      piVar1 = (int *)(param_1 + 0xec);
      if (uVar2 < 0xd) {
        piVar1 = piVar1 + uVar2;
      }
      func_004B948C(param_1,*piVar1);
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 0xd);
    func_004B948C(param_1,*(int *)(param_1 + 0x1a4));
    func_004B948C(param_1,*(int *)(param_1 + 0x1a8));
    func_004B948C(param_1,*(int *)(param_1 + 0x1ac));
  }
  else {
    do {
      piVar1 = (int *)(param_1 + 0x120);
      if (uVar2 < 0xd) {
        piVar1 = piVar1 + uVar2;
      }
      func_004B948C(param_1,*piVar1);
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 0xd);
  }
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0xbe) = 6;
  *(undefined2 *)(param_1 + 0xbc) = 0;
  return func_002313DC(param_1 + 0xbc);
}

