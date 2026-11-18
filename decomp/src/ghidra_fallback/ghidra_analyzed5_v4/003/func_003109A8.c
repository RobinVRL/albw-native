// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00323994(undefined1 *param_1);
extern int func_0036174C(int param_1,int param_2,int param_3);
extern int func_00625250(int param_1,int param_2,undefined1 param_3);
extern int *DAT_00310a24;

// USA 003109A8 <- EU 00310984 (Ghidra, non-matching)
// GLOBAL DAT_00310a24 int *

undefined4 func_003109A8(int param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 ((undefined1 *)(albw_frame + 0x0))
  if ((*(char *)(param_1 + 0xad4) == '\0') && (*(char *)(param_1 + 0x964) == '\r')) {
    iVar1 = func_0036174C(*DAT_00310a24,(uint)*(byte *)(param_1 + 0xae0),0);
    if (iVar1 != 0) {
      return func_00625250(param_1,8,0);
    }
  }
  else if ((*(char *)(param_1 + 0x476) != '\0') && (*(int *)(param_1 + 0xb1c) == 0)) {
    *(undefined4 *)(param_1 + 0xb1c) = 1;
    func_00323994(local_10);
    (**(code **)(*(int *)(param_1 + 0x478) + 0x48))(param_1 + 0x478,param_1 + 0xaf0,local_10,0);
  }
  return 0;
}

