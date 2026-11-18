#include "ghidra_types.h"

extern int func_00102130(int param_1);
extern int func_004A1520();
extern int func_0058FA08();
extern undefined4 DAT_0048e480;
extern int *DAT_0048e484;
extern int DAT_0048e488;

// USA 0048E43C <- EU 0048E414 (Ghidra, non-matching)
// GLOBAL DAT_0048e480 undefined4
// GLOBAL DAT_0048e484 int *
// GLOBAL DAT_0048e488 int

undefined4 func_0048E43C(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_0048e484;
  *param_1 = DAT_0048e480;
  if (param_1 == (undefined4 *)piVar1[1]) {
    piVar1[1] = 0;
    iVar2 = *piVar1;
    if (*(int **)(iVar2 + 0x20) != (int *)0x0) {
      (**(code **)(**(int **)(iVar2 + 0x20) + 4))(*(int **)(iVar2 + 0x20));
      *(undefined4 *)(iVar2 + 0x20) = 0;
    }
    func_00102130(DAT_0048e488);
    func_0058FA08(*(int *)(iVar2 + 0x24));
    *piVar1 = 0;
  }
  func_004A1520(param_1);
  return (undefined4)param_1;
}

