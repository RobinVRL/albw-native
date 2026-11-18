#include "ghidra_types.h"

extern int func_00152218(int param_1);
extern int func_0025C32C(int param_1);
extern int func_0025C4BC(int param_1);
extern int func_0025C5FC(int param_1);
extern int func_0025C9CC(int param_1);
extern int func_0025CF08(int param_1);
extern int func_003C7C84(uint param_1,uint param_2,undefined1 param_3);
extern int *DAT_0025c350;

// USA 0025C280 <- EU 0025C2A8 (Ghidra, non-matching)
// GLOBAL DAT_0025c350 int *

undefined4 func_0025C280(int param_1)

{
  uint uVar1;
  
  switch(*(undefined4 *)(param_1 + 0xb0)) {
  case 1:
    uVar1 = func_003C7C84(4,1,1);
    if ((uVar1 & 0x80000000) == 0) {
      *(undefined4 *)(param_1 + 0xb0) = 2;
    }
    if (*DAT_0025c350 != 0) {
      return func_00152218(*DAT_0025c350);
    }
    break;
  case 2:
    return func_0025C4BC(param_1);
  case 3:
    return func_0025C9CC(param_1);
  case 4:
    return func_0025CF08(param_1);
  case 5:
    return func_0025C5FC(param_1);
  case 6:
    return func_0025C32C(param_1);
  }
  return 0;
}

