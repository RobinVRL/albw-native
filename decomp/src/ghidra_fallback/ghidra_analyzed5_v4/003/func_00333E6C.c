#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0014E138(int param_1,int param_2);
extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_00588BF0(int param_1,int param_2);
extern int *DAT_00333f0c;
extern uint *DAT_00333f10;
extern undefined4 *DAT_00333f14;
extern undefined4 DAT_00333f18;

// USA 00333E6C <- EU 00333E48 (Ghidra, non-matching)
// GLOBAL DAT_00333f0c int *
// GLOBAL DAT_00333f10 uint *
// GLOBAL DAT_00333f14 undefined4 *
// GLOBAL DAT_00333f18 undefined4

undefined4 func_00333E6C(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*DAT_00333f0c + 0x44);
  if (piVar3 != (int *)0x0) {
    if (((*DAT_00333f10 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_00333f10), iVar2 != 0)) {
      *DAT_00333f14 = DAT_00333f18;
    }
    iVar2 = (**(code **)(*piVar3 + 8))(piVar3,DAT_00333f14);
    if ((iVar2 != 0) && (bVar1 = func_00588BF0(param_1,0), !bVar1)) {
      func_0014E2A0(param_1,*(undefined4 *)(param_1 + 0x41c),param_1 + 0x428,0x100,0,0);
    }
  }
  return func_0014E138(param_1,param_2);
}

