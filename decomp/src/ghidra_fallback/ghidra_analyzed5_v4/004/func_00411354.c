#include "ghidra_types.h"

extern int func_00411FEC(int *param_1,uint param_2,int *param_3,int *param_4,int *param_5);
extern int func_00412404(int *param_1,uint param_2,int *param_3,int param_4,int param_5);
extern int func_00569B68(int param_1,uint param_2,uint *param_3);
extern int func_0056CBF8(int param_1,uint param_2);

// USA 00411354 <- EU 00411334 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int *

undefined4 func_00411354(int *param_1,uint param_2,int *param_3,int *param_4,int *param_5)

{
  uint uVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_3c ((uint *)(albw_frame + 0x4))
  #define local_24 (*(undefined1 *)(albw_frame + 0x1c))
  #define local_23 (*(undefined1 *)(albw_frame + 0x1d))
  if (((uint)param_4 & 1) != 0) {
    uVar1 = func_0056CBF8(param_1[1],param_2);
    uVar1 = func_00412404(param_1,uVar1,param_3,(int)param_5,0);
    if (uVar1 == 0) {
      return 0;
    }
  }
  if (((uint)param_4 & 0xc) != 0) {
    local_24 = 0;
    local_3c[0] = 0;
    local_23 = 0;
    local_3c[5] = 0;
    local_3c[1] = 0xffffffff;
    local_3c[2] = 0xffffffff;
    local_3c[3] = 0xffffffff;
    local_3c[4] = 0xffffffff;
    iVar2 = func_00569B68(param_1[1],param_2,local_3c);
    if (iVar2 == 0) {
      return 0;
    }
    uVar1 = 0;
    do {
      if ((local_3c[uVar1 + 1] != 0xffffffff) &&
         (iVar2 = func_00411FEC(param_1,local_3c[uVar1 + 1],param_3,param_4,param_5), iVar2 == 0)) {
        return 0;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 4);
  }
  return 1;
}

