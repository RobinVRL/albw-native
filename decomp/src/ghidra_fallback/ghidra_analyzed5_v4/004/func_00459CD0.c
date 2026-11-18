#include "ghidra_types.h"

extern int func_0012C718(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_002DFB38(int param_1);
extern int func_00459280(int param_1);
extern int func_0045A090(int param_1);
extern int func_0066D544(undefined4 *param_1,char param_2);
extern int func_0066E58C(undefined4 *param_1,char param_2);
extern int DAT_00459e14;
extern float DAT_00459e18;
extern int *DAT_00459e1c;

// USA 00459CD0 <- EU 00459CA8 (Ghidra, non-matching)
// GLOBAL DAT_00459e14 int
// GLOBAL DAT_00459e18 float
// GLOBAL DAT_00459e1c int *

undefined4 func_00459CD0(int param_1)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  float fparam_0;
  
  *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(DAT_00459e14 + 4);
  if (*(char *)(param_1 + 0x1a4) == '\0') {
    func_0066D544((undefined4 *)(param_1 + 0x1a0),'\x01');
  }
  else if (*(char *)(param_1 + 0x1a4) == '\x02') {
    func_0045A090(param_1);
  }
  fparam_0 = DAT_00459e18;
  *(undefined2 *)(param_1 + 0x140) = 2;
  func_002317C0((undefined2 *)(param_1 + 0x140),fparam_0);
  piVar2 = (int *)(param_1 + 0x1e4);
  if (*(uint *)(param_1 + 0x214) < 3) {
    piVar2 = piVar2 + *(uint *)(param_1 + 0x214);
  }
  func_0066E58C((undefined4 *)(*piVar2 + 200),'\t');
  uVar3 = *(uint *)(param_1 + 0x230);
  piVar2 = (int *)(param_1 + 0x1e4);
  if (uVar3 < 3) {
    piVar2 = piVar2 + uVar3;
  }
  cVar1 = *(char *)(*piVar2 + 0xd);
  if ((cVar1 == '\x01') || ((cVar1 == '\x03' && (*(char *)(*piVar2 + 0xe) == '\x03')))) {
    piVar2 = (int *)(param_1 + 0x1e4);
    if (uVar3 < 3) {
      piVar2 = piVar2 + uVar3;
    }
    func_0012C718(*piVar2);
  }
  if (*(int *)(param_1 + 0x22c) == 2) {
    uVar3 = (3 - *(int *)(param_1 + 0x214)) - *(int *)(param_1 + 0x230);
    piVar2 = (int *)(param_1 + 0x1e4);
    if (uVar3 < 3) {
      piVar2 = piVar2 + uVar3;
    }
    cVar1 = *(char *)(*piVar2 + 0xd);
    if ((cVar1 == '\x01') || ((cVar1 == '\x03' && (*(char *)(*piVar2 + 0xe) == '\x03')))) {
      piVar2 = (int *)(param_1 + 0x1e4);
      if (uVar3 < 3) {
        piVar2 = piVar2 + uVar3;
      }
      func_0012C718(*piVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0xfa) = 0xf;
  *(undefined2 *)(param_1 + 0xf8) = 2;
  func_002317C0((undefined2 *)(param_1 + 0xf8),fparam_0);
  func_00459280(param_1);
  *(undefined4 *)(param_1 + 0x210) = 0xffffffff;
  return func_002DFB38(*DAT_00459e1c);
}

