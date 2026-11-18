#include "ghidra_types.h"

extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int *DAT_00285b50;
extern undefined4 *DAT_00285b54;
extern int DAT_00285b58;

// USA 00285AA4 <- EU 00285ACC (Ghidra, non-matching)
// GLOBAL DAT_00285b50 int *
// GLOBAL DAT_00285b54 undefined4 *
// GLOBAL DAT_00285b58 int

undefined4 func_00285AA4(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  
  puVar2 = DAT_00285b54;
  piVar1 = DAT_00285b50;
  piVar3 = (int *)func_005841A8(*DAT_00285b50,*DAT_00285b54,*(int **)(DAT_00285b58 + *DAT_00285b50))
  ;
  piVar4 = *(int **)(*piVar1 + 0x3dbc8);
  while( true ) {
    if (piVar3 == piVar4) {
      return 0;
    }
    if ((*piVar3 != 0) && (*(char *)(*piVar3 + 0x488) == '\x04')) break;
    piVar3 = (int *)func_005841A8(*piVar1,*puVar2,piVar3 + 1);
  }
  *(undefined1 *)(param_1 + 0x99c) = 1;
  return 1;
}

