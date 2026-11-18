#include "ghidra_types.h"

extern int func_001029DC(undefined4 *param_1);
extern int func_00104248(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5 ,uint param_6,undefined4 param_7,int param_8);
extern int func_00104800(void);
extern int func_0010A98C(uint param_1);
extern undefined4 *DAT_001015d8;
extern undefined4 *DAT_001015dc;
extern undefined4 DAT_001015e0;
extern int DAT_001015e4;
extern uint DAT_001015e8;
extern undefined4 DAT_001015ec;
extern undefined4 DAT_001015f0;
extern undefined4 DAT_001015f4;
extern undefined4 DAT_001015f8;

// USA 00101528 <- EU 00101528 (Ghidra, non-matching)
// GLOBAL DAT_001015d8 undefined4 *
// GLOBAL DAT_001015dc undefined4 *
// GLOBAL DAT_001015e0 undefined4
// GLOBAL DAT_001015e4 int
// GLOBAL DAT_001015e8 uint
// GLOBAL DAT_001015ec undefined4
// GLOBAL DAT_001015f0 undefined4
// GLOBAL DAT_001015f4 undefined4
// GLOBAL DAT_001015f8 undefined4

uint func_00101528(void)

{
  _Alignas(8) unsigned char albw_frame[0x40]; /* entry_sp - 0x40 .. entry_sp + 0x0 */
#define stack0xffffffc0 (*(undefined4 *)(albw_frame + 0x0))
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x1c))
  #define iStack_20 (*(int *)(albw_frame + 0x20))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x28))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x2c))
  func_00104800();
  puVar1 = DAT_001015d8;
  uVar4 = 0;
  uVar2 = func_001029DC((undefined4 *)&stack0xffffffc0);
  if ((uVar2 & 0x80000000) == 0) {
    *puVar1 = uVar4;
  }
  if (-1 < (int)uVar2) {
    uStack_24 = DAT_001015e0;
    iStack_20 = 4;
    uStack_1c = DAT_001015f0;
    uStack_18 = DAT_001015f4;
    uStack_14 = DAT_001015f8;
    uVar3 = func_00104248(DAT_001015dc,&iStack_20,DAT_001015ec,&uStack_24,DAT_001015e4,DAT_001015e8,
                          0xfffffffe,0);
    if ((int)uVar3 < 0) {
      func_0010A98C(uVar3);
    }
  }
  return uVar2;
}

