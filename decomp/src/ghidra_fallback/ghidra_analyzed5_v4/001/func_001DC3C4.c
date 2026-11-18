#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E48E4(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_001dc4b8;
extern uint *DAT_001dc4bc;
extern undefined4 *DAT_001dc4c0;
extern undefined4 DAT_001dc4c4;

// USA 001DC3C4 <- EU 001DC3C4 (Ghidra, non-matching)
// GLOBAL DAT_001dc4b8 int *
// GLOBAL DAT_001dc4bc uint *
// GLOBAL DAT_001dc4c0 undefined4 *
// GLOBAL DAT_001dc4c4 undefined4

undefined4 func_001DC3C4(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  if (*(uint *)(param_1 + 0x620) != 0) {
    piVar1 = (int *)func_0052FBA0(*DAT_001dc4b8 + 0x3dbbc,*(uint *)(param_1 + 0x620));
    if (((*DAT_001dc4bc & 1) == 0) && (iVar2 = func_00100174((int *)DAT_001dc4bc), iVar2 != 0)) {
      *DAT_001dc4c0 = DAT_001dc4c4;
    }
    if ((piVar1 == (int *)0x0) || (iVar2 = (**(code **)*piVar1)(piVar1,DAT_001dc4c0), iVar2 == 0)) {
      piVar1 = (int *)0x0;
    }
    if ((piVar1 == (int *)0x0) || (*(char *)((int)piVar1 + 0x4f1) == '\0')) {
      *(undefined4 *)(param_1 + 0x620) = 0;
      return 0;
    }
    iVar2 = (**(code **)(*piVar1 + 0x5c))(piVar1,*(undefined4 *)(param_1 + 0x2cc),param_2);
    if (iVar2 != 0) {
      if (param_3 != 0) {
        func_001E48E4((int)piVar1);
      }
      *(undefined4 *)(param_1 + 0x620) = 0;
      return 1;
    }
  }
  return 0;
}

