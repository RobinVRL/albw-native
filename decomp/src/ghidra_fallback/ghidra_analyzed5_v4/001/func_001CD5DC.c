#include "ghidra_types.h"

extern int func_00392E48(undefined4 *param_1,int param_2,undefined4 *param_3,undefined1 param_4);
extern int func_00520ED8(int param_1);
extern int func_00520FF8(int param_1);
extern int func_0052107C(int param_1);
extern int func_0052108C(int param_1);
extern int func_0065C310(undefined4 *param_1,undefined1 param_2);

// USA 001CD5DC <- EU 001CD5DC (Ghidra, non-matching)

undefined4 func_001CD5DC(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(param_1 + 0x4d4);
  if ((*(float *)(param_1 + 0x3d4) <= *(float *)(param_1 + 0xc)) &&
     (iVar2 = func_00392E48((undefined4 *)(param_1 + 0x3d0),1,(undefined4 *)0x0,0), iVar2 == 0)) {
    return func_0065C310(puVar3,5);
  }
  iVar2 = func_00520ED8(param_1);
  if (iVar2 == 0) {
    iVar2 = func_0052108C(param_1);
    if (iVar2 != 0) {
      *(undefined2 *)(param_1 + 0x42c) = 2;
      return func_0065C310(puVar3,9);
    }
    bVar1 = func_0052107C(param_1);
    if (bVar1) {
      if (*(char *)(param_1 + 0x4d8) == '\x05') {
        return 0;
      }
      goto LAB_001cd660;
    }
  }
  else {
    iVar2 = func_00520FF8(param_1);
    if (iVar2 == 0) {
LAB_001cd660:
      return func_0065C310(puVar3,2);
    }
    func_0065C310(puVar3,4);
  }
  return 0;
}

