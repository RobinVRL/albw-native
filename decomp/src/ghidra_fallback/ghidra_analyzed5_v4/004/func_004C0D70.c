#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern undefined4 DAT_004c0dbc;

// USA 004C0D70 <- EU 004C0D48 (Ghidra, non-matching)
// GLOBAL DAT_004c0dbc undefined4

void func_004C0D70(int param_1,int param_2)

{
  uint *puVar1;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_68 ((int *)(albw_frame + 0x8))
  if (*(int *)(param_1 + 0x7b8) != 0) {
    if (param_2 == -1) {
      *(undefined1 *)(param_1 + 0x917) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x917) = 1;
      puVar1 = (uint *)func_002C11E8(aiStack_68,param_2,*(int *)(param_1 + 0x8ec),0);
      func_0016898C(*(int *)(param_1 + 0x7b8),puVar1);
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x7b8) + 0x14) + 0x10) = DAT_004c0dbc;
    }
  }
  return;
}

