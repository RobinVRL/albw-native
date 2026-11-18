#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00231EE4(undefined4 *param_1);
extern int func_0048E140(int param_1,int *param_2,int param_3);
extern int DAT_003af150;
extern int DAT_003af154;
extern undefined4 DAT_003af158;
extern undefined4 DAT_003af15c;

// USA 003AF0E4 <- EU 003AF0C0 (Ghidra, non-matching)
// GLOBAL DAT_003af150 int
// GLOBAL DAT_003af154 int
// GLOBAL DAT_003af158 undefined4
// GLOBAL DAT_003af15c undefined4

undefined4 * func_003AF0E4(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define iStack_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(int *)(albw_frame + 0xc))
  iStack_18 = DAT_003af154;
  local_14 = DAT_003af150;
  (**(code **)(DAT_003af154 + 8))(&iStack_18);
  puVar1 = func_0048E140(param_1,param_2,local_14);
  *puVar1 = DAT_003af158;
  puVar2 = (undefined4 *)func_0010BAB4(0x98);
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = func_00231EE4(puVar2);
    *puVar3 = DAT_003af15c;
    puVar3[0x23] = 0;
    *(undefined1 *)((int)puVar3 + 0x92) = 4;
    *(undefined1 *)((int)puVar3 + 0x93) = 0;
    *(undefined1 *)(puVar3 + 0x25) = 1;
  }
  puVar1[0x7b] = puVar3;
  return puVar1;
}

