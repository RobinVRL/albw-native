#include "ghidra_types.h"

extern int func_00392E48(undefined4 *param_1,int param_2,undefined4 *param_3,undefined1 param_4);
extern int func_00520ED8(int param_1);
extern int func_00520FF8(int param_1);
extern int func_0052107C(int param_1);
extern int func_0052108C(int param_1);
extern int func_00661480(undefined4 *param_1,undefined1 param_2);

// USA 00288510 <- EU 00288538 (Ghidra, non-matching)

undefined4 func_00288510(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*(uint *)(param_1 + 0x534) < *(uint *)(param_1 + 0x538)) {
    *(uint *)(param_1 + 0x534) = *(uint *)(param_1 + 0x534) + 1;
  }
  else {
    puVar3 = (undefined4 *)(param_1 + 0x4dc);
    if ((*(float *)(param_1 + 0x3d4) <= *(float *)(param_1 + 0xc)) &&
       (iVar2 = func_00392E48((undefined4 *)(param_1 + 0x3d0),1,(undefined4 *)0x0,0), iVar2 == 0)) {
      return func_00661480(puVar3,6);
    }
    iVar2 = func_00520ED8(param_1);
    if (iVar2 == 0) {
      iVar2 = func_0052108C(param_1);
      if (iVar2 != 0) goto LAB_002885d8;
      bVar1 = func_0052107C(param_1);
      if ((bVar1) && (*(char *)(param_1 + 0x4e0) != '\x06')) {
        return func_00661480(puVar3,0);
      }
    }
    else {
      iVar2 = func_00520FF8(param_1);
      if (iVar2 == 0) {
LAB_002885d8:
        return func_00661480(puVar3,3);
      }
      func_00661480(puVar3,5);
    }
  }
  return 0;
}

