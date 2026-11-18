#include "ghidra_types.h"

extern int func_00532F70(int param_1,int *param_2,undefined4 param_3,int param_4);
extern int func_006695DC(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_003b6264;
extern int DAT_003b6268;

// USA 003B6214 <- EU 003B61F0 (Ghidra, non-matching)
// GLOBAL DAT_003b6264 undefined4
// GLOBAL DAT_003b6268 int

undefined4 func_003B6214(int param_1)

{
  ushort *puVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(undefined4 *)(albw_frame + 0x4))
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x4a) = 1;
  *(undefined2 *)(param_1 + 0x48) = 0;
  *(undefined1 *)(param_1 + 0x144) = 1;
  local_c = DAT_003b6264;
  local_10 = DAT_003b6268;
  func_00532F70(param_1,&local_10,0,1);
  puVar1 = (ushort *)(*(int *)(param_1 + 0x14) + 0x16);
  *puVar1 = *puVar1 | 2;
  return func_006695DC((undefined4 *)(param_1 + 0x20),1);
}

