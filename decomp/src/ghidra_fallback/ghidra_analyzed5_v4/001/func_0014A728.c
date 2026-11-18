#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0025D488(undefined4 *param_1,int *param_2);
extern int func_0034B2BC(undefined4 *param_1,int *param_2);
extern int func_003AE8B8(undefined4 *param_1,int *param_2);
extern undefined4 *DAT_0014a810;

// USA 0014A728 <- EU 0014A728 (Ghidra, non-matching)
// GLOBAL DAT_0014a810 undefined4 *

undefined4 func_0014A728(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  puVar1 = DAT_0014a810;
  piVar5 = *(int **)(param_2 + 0x44);
  if (piVar5 == (int *)0x0) {
    iVar4 = 1;
  }
  else {
    iVar4 = func_0010983C(*DAT_0014a810,piVar5);
  }
  puVar2 = (undefined4 *)func_0010CF28(0x110,piVar5,4);
  piVar3 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = func_003AE8B8(puVar2,piVar5);
  }
  *(int **)(param_1 + 0x1128) = piVar3;
  (**(code **)(*piVar3 + 0x14))(piVar3);
  *(undefined1 *)(*(int *)(param_1 + 0x1128) + 0x8f) = 1;
  puVar2 = (undefined4 *)func_0010CF28(0xb4,piVar5,4);
  piVar3 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = func_0025D488(puVar2,piVar5);
  }
  *(int **)(param_1 + 0x112c) = piVar3;
  (**(code **)(*piVar3 + 0x14))(piVar3);
  *(undefined1 *)(*(int *)(param_1 + 0x112c) + 0x8f) = 1;
  puVar2 = (undefined4 *)func_0010CF28(0xb8,piVar5,4);
  piVar3 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = func_0034B2BC(puVar2,piVar5);
  }
  *(int **)(param_1 + 0x1130) = piVar3;
  (**(code **)(*piVar3 + 0x14))(piVar3);
  *(undefined1 *)(*(int *)(param_1 + 0x1130) + 0x8f) = 1;
  if (iVar4 == 1) {
    return 0;
  }
  return func_0010983C(*puVar1,iVar4);
}

