#include "ghidra_types.h"

extern int func_00392E48(undefined4 *param_1,int param_2,undefined4 *param_3,undefined1 param_4);
extern int func_00520ED8(int param_1);
extern int func_00520FF8(int param_1);
extern int func_0052107C(int param_1);
extern int func_0052108C(int param_1);
extern int func_0065C988(undefined4 *param_1,undefined1 param_2);

// USA 001D7744 <- EU 001D7744 (Ghidra, non-matching)

undefined4 func_001D7744(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (*(uint *)(param_1 + 0x548) < *(uint *)(param_1 + 0x54c)) {
    *(uint *)(param_1 + 0x548) = *(uint *)(param_1 + 0x548) + 1;
    return 0;
  }
  puVar4 = (undefined4 *)(param_1 + 0x4d4);
  if ((*(float *)(param_1 + 0x3d4) <= *(float *)(param_1 + 0xc)) &&
     (iVar3 = func_00392E48((undefined4 *)(param_1 + 0x3d0),1,(undefined4 *)0x0,0), iVar3 == 0)) {
    return func_0065C988(puVar4,6);
  }
  iVar3 = func_00520ED8(param_1);
  if (iVar3 == 0) {
    iVar3 = func_0052108C(param_1);
    if (iVar3 == 0) {
      bVar2 = func_0052107C(param_1);
      cVar1 = '\0';
      if (bVar2) {
        cVar1 = *(char *)(param_1 + 0x4d8);
      }
      if (!bVar2 || cVar1 == '\x06') {
        return 0;
      }
      if (*(char *)(param_1 + 0x554) == '\0') {
        return func_0065C988(puVar4,0);
      }
    }
    else {
      *(undefined2 *)(param_1 + 0x42c) = 2;
    }
  }
  else {
    iVar3 = func_00520FF8(param_1);
    if (iVar3 != 0) {
      return func_0065C988(puVar4,5);
    }
  }
  return func_0065C988(puVar4,3);
}

