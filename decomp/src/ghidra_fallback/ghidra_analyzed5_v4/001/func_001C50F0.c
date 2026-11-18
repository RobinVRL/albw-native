#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0014E138(int param_1,int param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00588C3C(void);
extern int *DAT_001c51b8;
extern uint *DAT_001c51bc;
extern undefined4 *DAT_001c51c0;
extern undefined4 DAT_001c51c4;

// USA 001C50F0 <- EU 001C50F0 (Ghidra, non-matching)
// GLOBAL DAT_001c51b8 int *
// GLOBAL DAT_001c51bc uint *
// GLOBAL DAT_001c51c0 undefined4 *
// GLOBAL DAT_001c51c4 undefined4

undefined4 func_001C50F0(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  func_0014E138(param_1,param_2);
  if ((param_2 == 0) || (bVar1 = func_00588C3C(), bVar1)) {
    piVar3 = *(int **)(*DAT_001c51b8 + 0x44);
    if (((*DAT_001c51bc & 1) == 0) && (iVar2 = func_00100174((int *)DAT_001c51bc), iVar2 != 0)) {
      *DAT_001c51c0 = DAT_001c51c4;
    }
    if ((piVar3 == (int *)0x0) ||
       (iVar2 = (**(code **)(*piVar3 + 8))(piVar3,DAT_001c51c0), iVar2 == 0)) {
      piVar3 = (int *)0x0;
    }
    if ((piVar3 != (int *)0x0) || (bVar1 = func_00588C3C(), bVar1)) {
      return func_00168E9C(*(int **)(param_1 + 0x7b8),*(int *)(param_1 + 0x7b0),(int *)0x1);
    }
  }
  return 0;
}

