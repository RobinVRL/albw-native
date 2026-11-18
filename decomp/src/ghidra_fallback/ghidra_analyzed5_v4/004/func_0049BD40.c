#include "ghidra_types.h"

extern int func_00104248(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5 ,uint param_6,undefined4 param_7,int param_8);
extern int func_0010A98C(uint param_1);
extern int func_0010EAE8(undefined4 *param_1,undefined4 param_2);
extern undefined4 DAT_0049be18;
extern undefined4 DAT_0049be1c;
extern undefined4 DAT_0049be20;
extern undefined4 DAT_0049be24;

// USA 0049BD40 <- EU 0049BD18 (Ghidra, non-matching)
// GLOBAL DAT_0049be18 undefined4
// GLOBAL DAT_0049be1c undefined4
// GLOBAL DAT_0049be20 undefined4
// GLOBAL DAT_0049be24 undefined4

undefined4 func_0049BD40(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x40]; /* entry_sp - 0x40 .. entry_sp + 0x0 */
#define stack0xffffffc0 (*(undefined4 *)(albw_frame + 0x0))
  int iVar1;
  uint uVar2;
  #define aiStack_2c ((int *)(albw_frame + 0x14))
  #define iStack_20 (*(int *)(albw_frame + 0x20))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x28))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x2c))
  *(undefined1 *)(param_1 + 0x8c) = 1;
  if (*(int *)(param_1 + 0x78) == 0) {
    iStack_20 = 4;
    uStack_1c = DAT_0049be1c;
    uStack_18 = DAT_0049be20;
    uStack_14 = DAT_0049be24;
    iVar1 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x80);
    aiStack_2c[0] = param_1;
    uVar2 = func_00104248(*(undefined4 **)(param_1 + 0x7c),&iStack_20,DAT_0049be18,aiStack_2c,iVar1,
                          *(uint *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x88),0);
    if (((uVar2 & 0x7e00000) != 0x600000) && ((int)uVar2 < 0)) {
      func_0010A98C(uVar2);
    }
    if (-1 < (int)uVar2) {
      uVar2 = func_0010EAE8((undefined4 *)&stack0xffffffc0,**(undefined4 **)(param_1 + 0x7c));
      if ((int)uVar2 < 0) {
        func_0010A98C(uVar2);
      }
      *(int *)(param_1 + 0x74) = iVar1;
      if (*(int *)(param_1 + 0x78) == 0) {
        *(undefined4 *)(param_1 + 0x78) = 1;
      }
      return 1;
    }
  }
  return 0;
}

