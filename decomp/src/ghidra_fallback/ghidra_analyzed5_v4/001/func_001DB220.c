#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern undefined4 DAT_001db264;
extern int DAT_001db268;

// USA 001DB220 <- EU 001DB220 (Ghidra, non-matching)
// GLOBAL DAT_001db264 undefined4
// GLOBAL DAT_001db268 int

undefined4 func_001DB220(int *param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(undefined4 *)(albw_frame + 0x4))
  local_c = DAT_001db264;
  if (*(char *)((int)param_1 + 0x2d7) == '\0') {
    *(undefined1 *)((int)param_1 + 0x2d7) = 1;
    local_10 = DAT_001db268;
    func_00150A84(param_1,&local_10,0);
  }
  return 1;
}

