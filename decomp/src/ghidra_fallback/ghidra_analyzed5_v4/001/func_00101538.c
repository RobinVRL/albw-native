#include "ghidra_types.h"

extern int func_001029DC(undefined4 *param_1);
extern int func_00104248(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5 ,uint param_6,undefined4 param_7,int param_8);
extern int func_0010A98C(uint param_1);
extern uint *DAT_001015d8;
extern undefined4 *DAT_001015dc;
extern undefined4 DAT_001015e0;
extern uint DAT_001015e4;
extern uint DAT_001015e8;
extern undefined4 DAT_001015ec;
extern undefined4 DAT_001015f0;
extern undefined4 DAT_001015f4;
extern undefined4 DAT_001015f8;

// USA 00101538 <- EU 00101538 (Ghidra, non-matching)
// GLOBAL DAT_001015d8 uint *
// GLOBAL DAT_001015dc undefined4 *
// GLOBAL DAT_001015e0 undefined4
// GLOBAL DAT_001015e4 uint
// GLOBAL DAT_001015e8 uint
// GLOBAL DAT_001015ec undefined4
// GLOBAL DAT_001015f0 undefined4
// GLOBAL DAT_001015f4 undefined4
// GLOBAL DAT_001015f8 undefined4

/* WARNING: Variable defined which should be unmapped: objStack_40 */

uint func_00101538(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define objStack_40 ((uint *)(albw_frame + 0x0))
  #define local_24 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_20 (*(int *)(albw_frame + 0x20))
  #define local_1c (*(undefined4 *)(albw_frame + 0x24))
  #define local_18 (*(undefined4 *)(albw_frame + 0x28))
  #define local_14 (*(undefined4 *)(albw_frame + 0x2c))
  puVar1 = DAT_001015d8;
  objStack_40[0] = 0;
  uVar2 = func_001029DC(objStack_40);
  if ((uVar2 & 0x80000000) == 0) {
    *puVar1 = objStack_40[0];
  }
  if (-1 < (int)uVar2) {
    local_24 = DAT_001015e0;
    local_20 = 4;
    local_1c = DAT_001015f0;
    local_18 = DAT_001015f4;
    local_14 = DAT_001015f8;
    objStack_40[0] = DAT_001015e4;
    objStack_40[1] = DAT_001015e8;
    objStack_40[2] = 0xfffffffe;
    objStack_40[3] = 0;
    uVar3 = func_00104248(DAT_001015dc,&local_20,DAT_001015ec,&local_24,DAT_001015e4,DAT_001015e8,
                          0xfffffffe,0);
    if ((int)uVar3 < 0) {
      func_0010A98C(uVar3);
    }
  }
  return uVar2;
}

