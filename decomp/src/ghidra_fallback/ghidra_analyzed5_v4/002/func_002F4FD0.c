#include "ghidra_types.h"

extern int func_0052FBA0(int param_1,uint param_2);
extern float func_00552C88(int param_1);
extern int func_00588BE4(int param_1);
extern int func_00687EA0(undefined4 *param_1);
extern int *DAT_002f5060;
extern int *DAT_002f5064;
extern float DAT_002f5068;

// USA 002F4FD0 <- EU 002F4FAC (Ghidra, non-matching)
// GLOBAL DAT_002f5060 int *
// GLOBAL DAT_002f5064 int *
// GLOBAL DAT_002f5068 float

undefined4 func_002F4FD0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  float fVar3;
  
  puVar1 = (undefined4 *)func_0052FBA0(*DAT_002f5060 + 0x3dbbc,*(uint *)(param_2 + 0x28));
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  iVar2 = func_00588BE4((int)puVar1);
  if (*(char *)(param_1 + 0xe0c) == '\0') {
    return 0;
  }
  if (iVar2 != *DAT_002f5064) {
    return 0;
  }
  puVar1 = func_00687EA0(puVar1);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  fVar3 = func_00552C88(puVar1);
  if (*(char *)(param_1 + 0xe2c) == '\x01') {
    if (DAT_002f5068 < fVar3) goto LAB_002f5054;
  }
  else if ((*(char *)(param_1 + 0xe2c) == '\0') && (fVar3 < DAT_002f5068)) {
LAB_002f5054:
    *(undefined1 *)(param_1 + 0xe2e) = 1;
    return 0;
  }
  *(undefined1 *)(param_1 + 0xe2d) = 1;
  return 0;
}

