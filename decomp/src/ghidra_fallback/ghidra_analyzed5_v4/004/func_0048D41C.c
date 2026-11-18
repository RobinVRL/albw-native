#include "ghidra_types.h"

extern int func_0048D088(int param_1,int *param_2,int param_3);
extern undefined4 DAT_0048d458;

// USA 0048D41C <- EU 0048D3F4 (Ghidra, non-matching)
// GLOBAL DAT_0048d458 undefined4

undefined4 func_0048D41C(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = func_0048D088(param_1,param_2,(int)"sead::ControllerMgr" /* EU 0048D444 */);
  *puVar1 = DAT_0048d458;
  *(undefined1 *)(puVar1 + 0x2f) = 0;
  puVar2 = puVar1 + 0x30;
  puVar1[0x31] = puVar2;
  puVar1[0x32] = 0;
  puVar1[0x33] = 0xffffffff;
  *puVar2 = puVar2;
  puVar1[0x34] = 0;
  puVar1[0x35] = 0;
  puVar1[0x33] = 4;
  puVar1[0x36] = 0;
  return (undefined4)param_1;
}

