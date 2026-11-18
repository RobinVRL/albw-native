#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00231EE4(undefined4 *param_1);
extern int func_0048E140(int param_1,int *param_2,int param_3);
extern int DAT_003c4a68;
extern int DAT_003c4a6c;
extern undefined4 DAT_003c4a70;
extern undefined4 DAT_003c4a74;
extern undefined4 DAT_003c4a78;

// USA 003C49EC <- EU 003C49C8 (Ghidra, non-matching)
// GLOBAL DAT_003c4a68 int
// GLOBAL DAT_003c4a6c int
// GLOBAL DAT_003c4a70 undefined4
// GLOBAL DAT_003c4a74 undefined4
// GLOBAL DAT_003c4a78 undefined4

undefined4 * func_003C49EC(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define iStack_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(int *)(albw_frame + 0xc))
  iStack_18 = DAT_003c4a6c;
  local_14 = DAT_003c4a68;
  (**(code **)(DAT_003c4a6c + 8))(&iStack_18);
  puVar1 = func_0048E140(param_1,param_2,local_14);
  *puVar1 = DAT_003c4a70;
  puVar2 = (undefined4 *)func_0010BAB4(0x98);
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = func_00231EE4(puVar2);
    *puVar3 = DAT_003c4a74;
    puVar3[0x23] = 0;
    *(undefined1 *)((int)puVar3 + 0x92) = 4;
    *(undefined1 *)((int)puVar3 + 0x93) = 0;
    *(undefined1 *)(puVar3 + 0x25) = 1;
  }
  puVar1[0x7b] = puVar3;
  *puVar1 = DAT_003c4a78;
  *(undefined1 *)(puVar1[0x7b] + 0x94) = 0;
  return puVar1;
}

