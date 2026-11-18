#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00231EE4(undefined4 *param_1);
extern int func_0048E140(int param_1,int *param_2,int param_3);
extern int DAT_00429e74;
extern int DAT_00429e78;
extern undefined4 DAT_00429e7c;
extern undefined4 DAT_00429e80;
extern undefined4 DAT_00429e84;

// USA 00429DF4 <- EU 00429DD4 (Ghidra, non-matching)
// GLOBAL DAT_00429e74 int
// GLOBAL DAT_00429e78 int
// GLOBAL DAT_00429e7c undefined4
// GLOBAL DAT_00429e80 undefined4
// GLOBAL DAT_00429e84 undefined4

undefined4 * func_00429DF4(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define iStack_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(int *)(albw_frame + 0xc))
  iStack_18 = DAT_00429e78;
  local_14 = DAT_00429e74;
  (**(code **)(DAT_00429e78 + 8))(&iStack_18);
  puVar2 = func_0048E140(param_1,param_2,local_14);
  *puVar2 = DAT_00429e7c;
  puVar3 = (undefined4 *)func_0010BAB4(0x98);
  puVar4 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = func_00231EE4(puVar3);
    *puVar4 = DAT_00429e80;
    puVar4[0x23] = 0;
    *(undefined1 *)((int)puVar4 + 0x92) = 4;
    *(undefined1 *)((int)puVar4 + 0x93) = 0;
    *(undefined1 *)(puVar4 + 0x25) = 1;
  }
  uVar1 = DAT_00429e84;
  puVar2[0x7b] = puVar4;
  *puVar2 = uVar1;
  *(undefined1 *)(puVar2[0x7b] + 0x94) = 0;
  return puVar2;
}

