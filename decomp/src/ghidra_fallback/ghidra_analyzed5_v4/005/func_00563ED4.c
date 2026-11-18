#include "ghidra_types.h"

extern int func_00110490(undefined4 *param_1,uint param_2);
extern int DAT_00563f30;
extern int DAT_00563f34;
extern int DAT_00563f38;

// USA 00563ED4 <- EU 00563EAC (Ghidra, non-matching)
// GLOBAL DAT_00563f30 int
// GLOBAL DAT_00563f34 int
// GLOBAL DAT_00563f38 int

int func_00563ED4(int *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_14 (*(int *)(albw_frame + 0xc))
  if (param_3 != 0) {
    local_14 = 0;
    func_00110490(param_2,0x60);
    iVar1 = (**(code **)(*param_1 + 0x34))(param_1,param_2,0x60,&local_14,param_3,2,0x12);
    if ((DAT_00563f34 != iVar1 * 0x400000) && (local_14 == 0)) {
      iVar1 = DAT_00563f38;
    }
    return iVar1;
  }
  return DAT_00563f30;
}

