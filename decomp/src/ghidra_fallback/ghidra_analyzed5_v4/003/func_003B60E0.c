#include "ghidra_types.h"

extern int func_00532F70(int param_1,int *param_2,undefined4 param_3,int param_4);
extern int func_006695DC(undefined4 *param_1,undefined1 param_2);
extern int DAT_003b6144;
extern undefined4 DAT_003b6148;
extern undefined4 DAT_003b614c;

// USA 003B60E0 <- EU 003B60BC (Ghidra, non-matching)
// GLOBAL DAT_003b6144 int
// GLOBAL DAT_003b6148 undefined4
// GLOBAL DAT_003b614c undefined4

undefined4 func_003B60E0(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define uStack_c (*(undefined4 *)(albw_frame + 0x4))
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x4a) = 3;
  *(undefined2 *)(param_1 + 0x48) = 0;
  *(undefined1 *)(param_1 + 0x144) = 2;
  if ((*(uint *)(param_1 + 0x18) & 0x40) == 0) {
    local_10 = DAT_003b6144;
    uStack_c = DAT_003b614c;
    func_00532F70(param_1,&local_10,0,1);
  }
  else {
    local_10 = DAT_003b6144;
    uStack_c = DAT_003b6148;
    func_00532F70(param_1,&local_10,0,1);
  }
  return func_006695DC((undefined4 *)(param_1 + 0x20),1);
}

