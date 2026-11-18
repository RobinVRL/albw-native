#include "ghidra_types.h"

extern int func_00590564(undefined4 *param_1);
extern int func_00592354(uint *param_1);
extern int func_005FEA68(undefined4 *param_1);
extern int func_005FEBCC(undefined4 *param_1);
extern int *DAT_005fee08;

// USA 005FEDF4 <- EU 005FEDCC (Ghidra, non-matching)
// GLOBAL DAT_005fee08 int *

undefined4 func_005FEDF4(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = DAT_005fee08;
  *DAT_005fee08 = (int)param_1;
  func_005FEA68(param_1);
  func_00590564((undefined4 *)(*piVar1 + 4));
  func_005FEBCC((undefined4 *)(*piVar1 + 8));
  func_00592354((uint *)(*piVar1 + 0xc));
  return 0;
}

