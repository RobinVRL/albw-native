// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_001E6AB4(int param_1);
extern int func_00323994(undefined1 *param_1);
extern int func_0036174C(int param_1,int param_2,int param_3);
extern int func_003617D4(int param_1,int param_2,undefined4 param_3);
extern int *DAT_00652ef4;

// USA 00652E10 <- EU 00652DE8 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// GLOBAL DAT_00652ef4 int *

undefined4 func_00652E10(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined4 *)(albw_frame + 0x0))
  local_20 = param_4;
  if (*(char *)(param_1 + 0x9d3) == '\x03') {
    if (param_5 == 0) {
      iVar1 = func_0036174C(*DAT_00652ef4,param_3,0);
    }
    else {
      iVar1 = func_003617D4(*DAT_00652ef4,param_3,0);
    }
    if (iVar1 != 0) {
      *(undefined1 *)(param_1 + 0x9d3) = 0;
    }
  }
  else if (*(char *)(param_1 + 0x9d3) == '\x02') {
    if (*(char *)(param_1 + 0x476) != '\0') {
      func_00323994((undefined1 *)&local_20);
      (**(code **)(*(int *)(param_1 + 0x478) + 0x48))
                (param_1 + 0x478,param_1 + 0x98c,&local_20,param_4);
      *(undefined1 *)(param_1 + 0x476) = 0;
      return 0;
    }
  }
  else {
    if (*(char *)(param_1 + 0x9d2) != '\x01') {
      return func_001E6AB4(param_1);
    }
    if (*(char *)(param_1 + 0x476) != '\0') {
      func_00323994((undefined1 *)&local_20);
      (**(code **)(*(int *)(param_1 + 0x478) + 0x48))(param_1 + 0x478,param_1 + 0x98c,&local_20,0);
      *(undefined1 *)(param_1 + 0x476) = 0;
      return 0;
    }
  }
  return 0;
}

