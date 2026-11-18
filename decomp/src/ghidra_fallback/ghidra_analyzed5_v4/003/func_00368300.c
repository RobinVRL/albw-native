#include "ghidra_types.h"

extern int func_005229AC(int *param_1,int *param_2);
extern int DAT_0036836c;
extern int *DAT_00368370;

// USA 00368300 <- EU 003682DC (Ghidra, non-matching)
// GLOBAL DAT_0036836c int
// GLOBAL DAT_00368370 int *

void func_00368300(int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(int *)(albw_frame + 0x4))
  if (param_2 == (int *)0x0) {
    return;
  }
  (**(code **)(*param_3 + 8))(param_3);
  local_1c = param_3[1];
  local_20 = DAT_0036836c;
  piVar2 = (int *)func_005229AC(param_2,&local_20);
  piVar1 = DAT_00368370;
  if (piVar2 != (int *)0x0) {
    piVar3 = (int *)(**(code **)(*piVar2 + 8))(piVar2);
    do {
      if (piVar3 == piVar1) goto LAB_00368360;
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)0x0);
  }
  piVar2 = (int *)0x0;
LAB_00368360:
  *(int **)(param_1 + 0x34) = piVar2;
  return;
}

