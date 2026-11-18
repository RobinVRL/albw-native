#include "ghidra_types.h"

extern int func_005229AC(int *param_1,int *param_2);
extern int DAT_00367eb8;
extern int *DAT_00367ebc;
extern int *DAT_00367ec0;

// USA 00367E18 <- EU 00367DF4 (Ghidra, non-matching)
// GLOBAL DAT_00367eb8 int
// GLOBAL DAT_00367ebc int *
// GLOBAL DAT_00367ec0 int *

void func_00367E18(int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(int *)(albw_frame + 0x4))
  if (param_2 == (int *)0x0) {
    return;
  }
  (**(code **)(*param_3 + 8))(param_3);
  local_1c = param_3[1];
  local_20 = DAT_00367eb8;
  piVar2 = (int *)func_005229AC(param_2,&local_20);
  piVar4 = DAT_00367ebc;
  if (piVar2 != (int *)0x0) {
    piVar3 = (int *)(**(code **)(*piVar2 + 8))(piVar2);
    piVar1 = DAT_00367ec0;
    do {
      if (piVar3 == piVar4) {
        if (piVar2 != (int *)0x0) {
          piVar4 = (int *)(**(code **)(*piVar2 + 8))(piVar2);
          goto LAB_00367e84;
        }
        break;
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)0x0);
  }
  goto LAB_00367e98;
  while (piVar4 = (int *)*piVar4, piVar4 != (int *)0x0) {
LAB_00367e84:
    if (piVar4 == piVar1) goto LAB_00367e9c;
  }
LAB_00367e98:
  piVar2 = (int *)0x0;
LAB_00367e9c:
  *(int **)(param_1 + 0x38) = piVar2;
  return;
}

