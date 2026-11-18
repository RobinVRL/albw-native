#include "ghidra_types.h"

extern int func_0025C464(int *param_1);
extern int func_0025D328(int *param_1);
extern int func_0025D380(int *param_1);
extern int func_0025D3D8(int *param_1);
extern int func_0025D430(int *param_1);

// USA 004C4110 <- EU 004C40E8 (Ghidra, non-matching)

void func_004C4110(int param_1)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  
  switch(*(undefined4 *)(param_1 + 0x9c0)) {
  case 2:
    cVar1 = func_0025D3D8(*(int **)(param_1 + 0x10));
    if (cVar1 == '\0') {
      return;
    }
    goto LAB_004c414c;
  case 3:
    iVar2 = func_0025D328(*(int **)(param_1 + 0x10));
    break;
  case 4:
    iVar2 = func_0025D430(*(int **)(param_1 + 0x10));
    break;
  default:
    goto switchD_004c410c_caseD_5;
  case 6:
    *(undefined1 *)(param_1 + 0x9b9) = 1;
    *(undefined1 *)(param_1 + 0x9ba) = 0;
    *(undefined4 *)(param_1 + 0x9c0) = 1;
    return;
  case 7:
    iVar2 = func_0025D380(*(int **)(param_1 + 0x10));
    goto joined_r0x004c41c0;
  case 8:
    iVar2 = func_0025C464(*(int **)(param_1 + 0x10));
joined_r0x004c41c0:
    if (iVar2 == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x9c0) = 9;
    return;
  case 10:
    puVar3 = (uint *)(param_1 + 0x4dd8 + *(int *)(param_1 + 0x9bc) * 4);
    *puVar3 = *puVar3 & 0xfffffff8;
    *(undefined4 *)(param_1 + 0x9c0) = 1;
    *(undefined1 *)(param_1 + 0x9c4) = 0;
    return;
  }
  if (iVar2 == 0) {
switchD_004c410c_caseD_5:
    return;
  }
LAB_004c414c:
  *(undefined4 *)(param_1 + 0x9c0) = 5;
  return;
}

