#include "ghidra_types.h"

extern int func_001510A4();
extern int func_0036D0E0(int *param_1);
extern int DAT_003a2434;
extern int DAT_003a2438;

// USA 003A240C <- EU 003A23E8 (Ghidra, non-matching)
// GLOBAL DAT_003a2434 int
// GLOBAL DAT_003a2438 int

undefined4 func_003A240C(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_003a2434;
  *param_1 = DAT_003a2434;
  param_1[200] = iVar1 + 0x84;
  func_0036D0E0(param_1 + 0x231);
  func_0036D0E0(param_1 + 0x230);
  func_0036D0E0(param_1 + 0x22f);
  iVar1 = DAT_003a2438;
  *param_1 = DAT_003a2438;
  param_1[200] = iVar1 + 0x84;
  return func_001510A4(param_1);
}

