#include "ghidra_types.h"

extern int func_001BD088(int param_1);
extern int func_004E2880(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4, undefined2 param_5,float fparam_0);
extern int func_00588BF0(int param_1,int param_2);
extern int func_0065B3E0(undefined4 *param_1,undefined1 param_2);
extern float DAT_001bd258;
extern undefined4 DAT_001bd25c;

// USA 001BD154 <- EU 001BD154 (Ghidra, non-matching)
// GLOBAL DAT_001bd258 float
// GLOBAL DAT_001bd25c undefined4

undefined4 func_001BD154(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  undefined1 uVar3;
  float fparam_0;
  
  if (*(uint *)(param_1 + 0x438) < *(uint *)(param_1 + 0x43c)) {
    *(uint *)(param_1 + 0x438) = *(uint *)(param_1 + 0x438) + 1;
    return 0;
  }
  fparam_0 = DAT_001bd258;
  if (*(char *)(param_1 + 0x450) == '\0') {
    if (*(short *)(param_1 + 0x36) != 0) {
      bVar2 = func_00588BF0(param_1,0);
      if (bVar2) {
        return 0;
      }
      if (*(char *)(param_1 + 0x450) != '\0') goto LAB_001bd1c4;
    }
    uVar1 = DAT_001bd25c;
    *(undefined4 *)(param_1 + 0x448) = 0x3c;
    *(undefined4 *)(param_1 + 0x44c) = uVar1;
    *(undefined4 *)(param_1 + 0x444) = 0;
    func_004E2880((undefined4 *)(param_1 + 0x3d0),*(undefined4 *)(param_1 + 1000),3,0,0xffff,
                  fparam_0);
  }
  else {
LAB_001bd1c4:
    func_001BD088(param_1);
    func_004E2880((undefined4 *)(param_1 + 0x3d0),*(undefined4 *)(param_1 + 1000),2,0,0xffff,
                  fparam_0);
  }
  if (*(char *)(param_1 + 0x450) == '\0') {
    uVar3 = 2;
  }
  else {
    uVar3 = 3;
  }
  return func_0065B3E0((undefined4 *)(param_1 + 0x40c),uVar3);
}

