#include "ghidra_types.h"

extern int func_001510A4();
extern int func_004EE540(undefined4 *param_1);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern int DAT_004e629c;
extern int DAT_004e62a0;

// USA 004E624C <- EU 004E6224 (Ghidra, non-matching)
// GLOBAL DAT_004e629c int
// GLOBAL DAT_004e62a0 int

undefined4 func_004E624C(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = DAT_004e629c + 0x5c;
  *param_1 = DAT_004e629c;
  param_1[200] = iVar2;
  if (*(short *)((int)param_1 + 0x36) != 0) {
    func_00588C14((int)param_1,0,0);
  }
  puVar1 = func_004EE540(param_1 + 0x184);
  puVar1 = func_004EE540(puVar1 + -0x19);
  puVar1 = func_004EE540(puVar1 + -0x19);
  iVar2 = DAT_004e62a0;
  puVar1[-0x8a] = DAT_004e62a0 + 0x5c;
  puVar1[-0x152] = iVar2;
  puVar1 = func_004EE540(puVar1 + -0x4e);
  return func_001510A4(puVar1 + -0x104);
}

