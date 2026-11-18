#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001BA8C4(undefined4 *param_1,uint *param_2,int param_3,int param_4);
extern undefined4 DAT_00603b64;
extern undefined4 DAT_00603b68;
extern int DAT_00603b6c;

// USA 00603B2C <- EU 00603B04 (Ghidra, non-matching)
// GLOBAL DAT_00603b64 undefined4
// GLOBAL DAT_00603b68 undefined4
// GLOBAL DAT_00603b6c int

void func_00603B2C(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(undefined4 *)(albw_frame + 0x0))
  #define local_c (*(undefined4 *)(albw_frame + 0x4))
  puVar1 = (undefined4 *)func_0010BAB4(0x490);
  if (puVar1 != (undefined4 *)0x0) {
    local_c = DAT_00603b64;
    local_10 = DAT_00603b68;
    piVar2 = func_001BA8C4(puVar1,param_1,1,(int)&local_10);
    piVar2[0xb8] = piVar2[0xb8] | 1;
    iVar3 = DAT_00603b6c + 0x5c;
    *piVar2 = DAT_00603b6c;
    piVar2[200] = iVar3;
  }
  return;
}

