#include "ghidra_types.h"

extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_00680960(undefined4 *param_1);
extern int DAT_002cb720;
extern int DAT_002cb724;

// USA 002CB6D8 <- EU 002CB6B4 (Ghidra, non-matching)
// GLOBAL DAT_002cb720 int
// GLOBAL DAT_002cb724 int

undefined4 func_002CB6D8(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  puVar2 = func_00680960(param_1);
  piVar3 = func_0010DA7C(puVar2 + 1,0,3);
  iVar1 = DAT_002cb720;
  iVar4 = DAT_002cb720 + 0x24;
  piVar3[4] = param_3;
  piVar3[-1] = iVar1;
  *piVar3 = iVar4;
  piVar3[5] = -0x1000000;
  *(undefined1 *)(piVar3 + 6) = 0;
  *(undefined1 *)((int)piVar3 + 0x19) = 0;
  *(undefined1 *)((int)piVar3 + 0x1a) = 1;
  iVar1 = DAT_002cb724;
  *(undefined1 *)((int)piVar3 + 0x1b) = 1;
  *(undefined1 *)(piVar3 + 7) = 0;
  piVar3[8] = iVar1;
  piVar3[9] = iVar1;
  piVar3[10] = param_2;
  return (undefined4)param_1;
}

