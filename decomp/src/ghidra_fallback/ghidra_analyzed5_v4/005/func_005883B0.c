#include "ghidra_types.h"

extern int func_00569710(int param_1,uint param_2,undefined4 *param_3);
extern int func_0057F260(int param_1);

// USA 005883B0 <- EU 00588388 (Ghidra, non-matching)

undefined4 func_005883B0(int param_1,uint param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x0))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x4))
  puVar2 = func_0057F260(*(int *)(*(int *)(param_1 + 0x24) + 0x140));
  bVar1 = func_00569710((int)puVar2,param_2,&uStack_20);
  if (!bVar1) {
    uStack_1c = 0xffffffff;
  }
  return uStack_1c;
}

