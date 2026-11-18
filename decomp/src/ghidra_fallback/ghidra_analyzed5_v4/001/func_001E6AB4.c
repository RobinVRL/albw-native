#include "ghidra_types.h"

extern int func_00323994(undefined1 *param_1);
extern int func_00503180(int *param_1,int param_2,undefined1 *param_3,int *param_4);

// USA 001E6AB4 <- EU 001E6AB4 (Ghidra, non-matching)

void func_001E6AB4(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define auStack_10 ((undefined1 *)(albw_frame + 0x0))
  if (*(char *)(param_1 + 0x476) != '\0') {
    func_00323994(auStack_10);
    func_00503180((int *)(param_1 + 0x478),param_1 + 0x75c,auStack_10,(int *)0x0);
    *(undefined1 *)(param_1 + 0x476) = 0;
  }
  return;
}

