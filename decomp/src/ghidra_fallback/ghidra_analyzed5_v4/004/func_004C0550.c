#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_00566C10(int param_1,uint param_2);
extern undefined4 DAT_004c05d0;
extern uint DAT_004c05d4;

// USA 004C0550 <- EU 004C0528 (Ghidra, non-matching)
// GLOBAL DAT_004c05d0 undefined4
// GLOBAL DAT_004c05d4 uint

void func_004C0550(int param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_70 ((int *)(albw_frame + 0x0))
  uVar1 = DAT_004c05d4;
  if (*(int *)(param_1 + 0x7b0) != 0) {
    if (param_2 == -1) {
      if (*(char *)(param_1 + 0x916) != '\0') {
        if (*(uint *)(param_1 + 0x8e0) != DAT_004c05d4) {
          func_00566C10(*(int *)(param_1 + 0x7a0),*(uint *)(param_1 + 0x8e0));
        }
        if (*(uint *)(param_1 + 0x8e4) != uVar1) {
          func_00566C10(*(int *)(param_1 + 0x7a0),*(uint *)(param_1 + 0x8e4));
        }
      }
      *(undefined1 *)(param_1 + 0x916) = 0;
      return;
    }
    *(undefined1 *)(param_1 + 0x916) = 1;
    puVar2 = (uint *)func_002C11E8(aiStack_70,param_2,*(int *)(param_1 + 0x8ec),0);
    func_0016898C(*(int *)(param_1 + 0x7b0),puVar2);
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x7b0) + 0x14) + 0x10) = DAT_004c05d0;
  }
  return;
}

