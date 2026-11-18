#include "ghidra_types.h"

extern int func_005229AC(int *param_1,int *param_2);
extern int DAT_00369488;
extern int *DAT_0036948c;

// USA 003693A0 <- EU 0036937C (Ghidra, non-matching)
// GLOBAL DAT_00369488 int
// GLOBAL DAT_0036948c int *

void func_003693A0(int param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(int *)(albw_frame + 0x4))
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(int *)(albw_frame + 0xc))
  if (param_2 == (int *)0x0) {
    return;
  }
  (**(code **)(*param_3 + 8))(param_3);
  iVar1 = DAT_00369488;
  local_2c = param_3[1];
  local_30 = DAT_00369488;
  piVar3 = (int *)func_005229AC(param_2,&local_30);
  piVar2 = DAT_0036948c;
  if (piVar3 != (int *)0x0) {
    piVar4 = (int *)(**(code **)(*piVar3 + 8))(piVar3);
    do {
      if (piVar4 == piVar2) goto LAB_00369404;
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)0x0);
  }
  piVar3 = (int *)0x0;
LAB_00369404:
  *(int **)(param_1 + 0x2c) = piVar3;
  if (*(char *)param_4[1] != '\0') {
    (**(code **)(*param_4 + 8))(param_4);
    local_24 = param_4[1];
    local_28 = iVar1;
    piVar3 = (int *)func_005229AC(param_2,&local_28);
    piVar2 = DAT_0036948c;
    if (piVar3 != (int *)0x0) {
      piVar4 = (int *)(**(code **)(*piVar3 + 8))(piVar3);
      do {
        if (piVar4 == piVar2) goto LAB_0036947c;
        piVar4 = (int *)*piVar4;
      } while (piVar4 != (int *)0x0);
    }
    piVar3 = (int *)0x0;
LAB_0036947c:
    *(int **)(param_1 + 0x30) = piVar3;
  }
  return;
}

