#include "ghidra_types.h"

extern int func_003D2704(int *param_1,int *param_2,ushort *param_3);
extern int func_0068F324(int param_1,undefined4 *param_2,undefined4 *param_3,uint *param_4,uint *param_5, uint param_6);
extern int func_0068F9A8(uint *param_1,uint *param_2,undefined4 *param_3,uint *param_4);

// USA 0068F55C <- EU 0068F534 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint
// PARAM param_6 Stack[0x4]:4 undefined4
// PARAM param_7 Stack[0x8]:4 undefined4
// PARAM param_8 Stack[0xc]:4 ushort *

uint func_0068F55C(uint *param_1,uint *param_2,uint *param_3,undefined4 *param_4,uint param_5,
                  undefined4 param_6,undefined4 param_7,ushort *param_8)

{
  ushort *puVar1;
  uint uVar2;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(uint *)(albw_frame + 0x8))
  #define auStack_24 ((undefined4 *)(albw_frame + 0xc))
  puVar1 = param_8;
  uVar2 = func_0068F324((int)param_1,&local_28,auStack_24,(uint *)0x0,(uint *)0x0,param_5);
  if (-1 < (int)uVar2) {
    *param_3 = local_28;
    uVar2 = func_003D2704((int *)(param_3 + 1),&param_6,puVar1);
    if ((-1 < (int)uVar2) &&
       (uVar2 = func_0068F9A8(param_1,param_2,param_4,param_3), (uVar2 & 0x80000000) == 0)) {
      uVar2 = 0;
    }
  }
  return uVar2;
}

