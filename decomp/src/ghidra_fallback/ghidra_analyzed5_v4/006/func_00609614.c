#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001E3EB0(int param_1,float fparam_0,float fparam_1,float fparam_2);
extern int func_001E3FD8(int param_1);
extern int func_001E4018(int param_1,uint param_2);
extern int func_002C6868(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00609674;
extern int DAT_00609678;
extern float DAT_0060967c;
extern float DAT_00609680;

// USA 00609614 <- EU 006095EC (Ghidra, non-matching)
// GLOBAL DAT_00609674 undefined4
// GLOBAL DAT_00609678 int
// GLOBAL DAT_0060967c float
// GLOBAL DAT_00609680 float

int * func_00609614(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00609674);
  piVar2 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = func_002C6868(puVar1,param_1);
    iVar3 = DAT_00609678 + 0x5c;
    *piVar2 = DAT_00609678;
    piVar2[200] = iVar3;
    func_001E3FD8((int)piVar2);
    func_001E4018((int)piVar2,0);
    func_001E3EB0((int)piVar2,DAT_00609680,DAT_0060967c,DAT_0060967c);
    *(undefined2 *)(*(int *)(piVar2[0x121] + 0x18) + 0x28) = 0xa3;
    func_001E3FD8((int)piVar2);
  }
  return piVar2;
}

