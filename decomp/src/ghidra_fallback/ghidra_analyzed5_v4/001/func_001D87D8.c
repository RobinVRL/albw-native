#include "ghidra_types.h"

extern int func_0019A848(int param_1);
extern int func_00352A28(undefined4 *param_1);
extern int func_0049F5FC(undefined4 *param_1);
extern int func_004ED124();
extern int DAT_00151118;
extern int DAT_0015111c;

// USA 001D87D8 <- EU 001D87D8 (Ghidra, non-matching)
// GLOBAL DAT_00151118 int
// GLOBAL DAT_0015111c int

void func_001510A4(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_00151118 + 0x54;
  *param_1 = DAT_00151118;
  param_1[200] = iVar1;
  iVar2 = param_1[0x101];
  for (iVar1 = param_1[0xff] - iVar2; iVar1 != (int)param_1 + (0x3f8 - iVar2);
      iVar1 = *(int *)(iVar1 + iVar2 + 4) - iVar2) {
    func_0019A848(iVar1);
  }
  func_0049F5FC(param_1 + 0xfe);
  param_1[200] = DAT_0015111c;
  iVar1 = func_00352A28(param_1 + 0xc9);
  func_004ED124((undefined4 *)(iVar1 + -0x324));
  return;
}

