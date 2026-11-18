#include "ghidra_types.h"

extern int func_004AD5F0(void);
extern int func_004ECDE8(undefined4 *param_1,int param_2,uint param_3);
extern int *DAT_004d1490;

// USA 004D1448 <- EU 004D1420 (Ghidra, non-matching)
// GLOBAL DAT_004d1490 int *

undefined4 func_004D1448(undefined4 *param_1,int param_2,uint param_3)

{
  char cVar1;
  
  cVar1 = *(char *)((int)param_1 + 0x2d7);
  func_004ECDE8(param_1,param_2,param_3);
  if ((((*(char *)((int)param_1 + 0x2d7) != '\0') && (cVar1 == '\0')) && (param_1[0x158] != 0)) &&
     ((*(char *)(param_1 + 0x159) == '\0' && (*(int *)(*DAT_004d1490 + 0x7708) == param_1[0x158]))))
  {
    *(int *)(*DAT_004d1490 + 0x7708) = 0;
    return func_004AD5F0();
  }
  return 0;
}

