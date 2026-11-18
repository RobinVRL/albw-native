#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_002DFB38(int param_1);
extern int func_00459280(int param_1);
extern int func_0045A090(int param_1);
extern int func_0066D544(undefined4 *param_1,char param_2);
extern int func_0066E58C(undefined4 *param_1,char param_2);
extern int DAT_00459c9c;
extern float DAT_00459ca0;
extern int *DAT_00459ca4;

// USA 00459BCC <- EU 00459BA4 (Ghidra, non-matching)
// GLOBAL DAT_00459c9c int
// GLOBAL DAT_00459ca0 float
// GLOBAL DAT_00459ca4 int *

void func_00459BCC(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined2 *puVar3;
  float fparam_0;
  
  *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(DAT_00459c9c + 4);
  if (*(char *)(param_1 + 0x1a4) == '\0') {
    func_0066D544((undefined4 *)(param_1 + 0x1a0),'\x01');
  }
  else if (*(char *)(param_1 + 0x1a4) == '\x02') {
    func_0045A090(param_1);
  }
  fparam_0 = DAT_00459ca0;
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0xfa) = 0xe;
  *(undefined2 *)(param_1 + 0xf8) = 0;
  func_002317C0((undefined2 *)(param_1 + 0xf8),fparam_0);
  piVar1 = (int *)(param_1 + 0x1e4);
  if (*(uint *)(param_1 + 0x214) < 3) {
    piVar1 = piVar1 + *(uint *)(param_1 + 0x214);
  }
  func_0066E58C((undefined4 *)(*piVar1 + 200),'\x04');
  func_00459280(param_1);
  *(undefined4 *)(param_1 + 0x210) = 0xffffffff;
  func_002DFB38(*DAT_00459ca4);
  if (*(char *)(param_1 + 0x234) == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x234) = 0;
  piVar1 = (int *)(param_1 + 0x1e4);
  if (*(uint *)(param_1 + 0x214) < 3) {
    piVar1 = piVar1 + *(uint *)(param_1 + 0x214);
  }
  iVar2 = *(int *)(*piVar1 + 0xfc);
  *(undefined1 *)(iVar2 + 0x158) = 0;
  puVar3 = (undefined2 *)(iVar2 + 0x20);
  *puVar3 = 2;
  func_002317C0(puVar3,fparam_0);
  return;
}

