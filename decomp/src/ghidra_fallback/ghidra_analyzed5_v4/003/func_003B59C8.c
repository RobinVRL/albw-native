#include "ghidra_types.h"

extern int func_001692F8(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_00566750(int param_1,int param_2);

// USA 003B59C8 <- EU 003B59A4 (Ghidra, non-matching)

undefined4 func_003B59C8(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x70];
  #define auStack_68 ((uint *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0x5c))
  func_002C11E8((int *)auStack_68,0xffffffff,10,0);
  local_14 = 0;
  func_001692F8(*(int *)(param_1 + 0x28),auStack_68);
  return func_00566750(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x50) + 8),
                *(int *)(*(int *)(param_1 + 4) + 0x24));
}

