#include "ghidra_types.h"

extern int func_00411438(int *param_1,uint param_2,uint param_3,int *param_4,uint param_5);
extern int func_00412404(int *param_1,uint param_2,int *param_3,int param_4,int param_5);
extern int func_00569AB8(int param_1,uint param_2,undefined4 *param_3);
extern int func_0056CBF8(int param_1,uint param_2);

// USA 004115AC <- EU 0041158C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint
// PARAM param_6 Stack[0x4]:4 uint

undefined4
func_004115AC(int *param_1,uint param_2,uint param_3,int *param_4,uint param_5,uint param_6)

{
  bool bVar1;
  uint uVar2;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_2c ((undefined4 *)(albw_frame + 0x4))
  #define local_24 (*(char *)(albw_frame + 0xc))
  local_2c[0] = 0xffffffff;
  local_24 = '\0';
  bVar1 = func_00569AB8(param_1[1],param_2,local_2c);
  if (!bVar1) {
    return 0;
  }
  if (local_24 == '\0') {
    if ((param_5 & 8) == 0) {
      return 1;
    }
    uVar2 = func_0056CBF8(param_1[1],param_2);
    uVar2 = func_00412404(param_1,uVar2,param_4,param_6,1);
  }
  else {
    uVar2 = func_00411438(param_1,param_2,param_3,param_4,param_6);
  }
  if (uVar2 != 0) {
    return 1;
  }
  return 0;
}

