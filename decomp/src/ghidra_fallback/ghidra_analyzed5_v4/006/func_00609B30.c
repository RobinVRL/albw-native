#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001E3EB0(int param_1,float fparam_0,float fparam_1,float fparam_2);
extern int func_001E3FD8(int param_1);
extern int func_001E4018(int param_1,uint param_2);
extern int func_002C6868(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00609b90;
extern int DAT_00609b94;
extern float DAT_00609b98;
extern float DAT_00609b9c;

// USA 00609B30 <- EU 00609B08 (Ghidra, non-matching)
// GLOBAL DAT_00609b90 undefined4
// GLOBAL DAT_00609b94 int
// GLOBAL DAT_00609b98 float
// GLOBAL DAT_00609b9c float

int * func_00609B30(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00609b90);
  piVar2 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = func_002C6868(puVar1,param_1);
    iVar3 = DAT_00609b94 + 0x5c;
    *piVar2 = DAT_00609b94;
    piVar2[200] = iVar3;
    func_001E3FD8((int)piVar2);
    func_001E4018((int)piVar2,0);
    func_001E3EB0((int)piVar2,DAT_00609b9c,DAT_00609b98,DAT_00609b98);
    *(undefined2 *)(*(int *)(piVar2[0x121] + 0x18) + 0x28) = 0xa3;
    func_001E3FD8((int)piVar2);
  }
  return piVar2;
}

