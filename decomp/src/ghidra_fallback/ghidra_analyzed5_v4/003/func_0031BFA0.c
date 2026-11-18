#include "ghidra_types.h"

extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_00232540(undefined4 *param_1);
extern undefined4 DAT_0031bfdc;
extern int DAT_0031bfe0;
extern int DAT_0031bfe4;

// USA 0031BFA0 <- EU 0031BF7C (Ghidra, non-matching)
// GLOBAL DAT_0031bfdc undefined4
// GLOBAL DAT_0031bfe0 int
// GLOBAL DAT_0031bfe4 int

int * func_0031BFA0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  puVar3 = func_0010DA7C(param_1,0,3);
  *puVar3 = DAT_0031bfdc;
  piVar4 = func_00232540(puVar3 + 4);
  iVar2 = DAT_0031bfe4;
  iVar1 = DAT_0031bfe0;
  *piVar4 = DAT_0031bfe0 + 0x18;
  piVar4[-4] = iVar1;
  *(undefined2 *)(piVar4 + 8) = 0;
  *(undefined2 *)((int)piVar4 + 0x22) = 0xffff;
  piVar4[9] = iVar2;
  piVar4[10] = 0;
  *(undefined2 *)(piVar4 + 0xb) = 0;
  *(undefined2 *)((int)piVar4 + 0x2e) = 0xffff;
  piVar4[0xc] = iVar2;
  piVar4[0xd] = 0;
  piVar4[0xe] = 0;
  piVar4[0xf] = -1;
  return piVar4 + -4;
}

