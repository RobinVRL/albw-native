#include "ghidra_types.h"

extern int func_001510A4();
extern int func_00361580(int param_1,undefined1 param_2);
extern int func_004EE540(undefined4 *param_1);
extern int DAT_001d3d5c;
extern int *DAT_001d3d60;
extern int DAT_001d3d64;

// USA 001D3CC0 <- EU 001D3CC0 (Ghidra, non-matching)
// GLOBAL DAT_001d3d5c int
// GLOBAL DAT_001d3d60 int *
// GLOBAL DAT_001d3d64 int

undefined4 func_001D3CC0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = DAT_001d3d5c;
  param_1[200] = DAT_001d3d5c + 0x78;
  *param_1 = iVar2;
  if (*(char *)((int)param_1 + 0x5df) == '\x02') {
    func_00361580(*DAT_001d3d60,0);
    piVar1 = (int *)(**(code **)(*(int *)param_1[0x179] + 0x40))((int *)param_1[0x179]);
    iVar2 = (**(code **)(*piVar1 + 0x28))(piVar1);
    if (iVar2 == 0) {
      piVar1 = (int *)(**(code **)(*(int *)param_1[0x179] + 0x40))((int *)param_1[0x179]);
      (**(code **)(*piVar1 + 0x14))(piVar1);
    }
  }
  iVar2 = DAT_001d3d64;
  param_1[200] = DAT_001d3d64 + 0x5c;
  *param_1 = iVar2;
  puVar3 = func_004EE540(param_1 + 0x104);
  return func_001510A4(puVar3 + -0x104);
}

