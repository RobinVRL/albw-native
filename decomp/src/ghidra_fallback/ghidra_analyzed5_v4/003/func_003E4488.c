#include "ghidra_types.h"

extern int func_00102E40(undefined1 param_1,undefined1 *param_2);
extern int func_003E489C(undefined4 param_1,int param_2,undefined4 param_3);
extern int func_003E4CB8(undefined1 param_1,undefined1 *param_2,undefined4 *param_3,undefined4 *param_4, undefined4 *param_5);
extern int func_003E4DDC(uint param_1,undefined4 param_2,int param_3,undefined4 param_4);
extern int func_003E5388(void);
extern int func_003E5660(undefined4 param_1);
extern int DAT_003e4504;
extern undefined4 *DAT_003e4508;

// USA 003E4488 <- EU 003E4468 (Ghidra, non-matching)
// GLOBAL DAT_003e4504 int
// GLOBAL DAT_003e4508 undefined4 *

undefined4 func_003E4488(void)

{
  uint uVar1;
  undefined4 *puVar2;
  uint extraout_r1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_14 (*(uint *)(albw_frame + 0xc))
  #define local_10 ((uint *)(albw_frame + 0x10))
  func_00102E40(0,(undefined1 *)0x0);
  if (*(code **)(DAT_003e4504 + 0x38) != (code *)0x0) {
    (**(code **)(DAT_003e4504 + 0x38))(*(undefined4 *)(DAT_003e4504 + 0x78));
  }
  func_003E4CB8(2,(undefined1 *)0x0,local_10,&local_14,(undefined4 *)0x0);
  puVar2 = DAT_003e4508;
  uVar1 = extraout_r1;
  if (local_10[0] != 0) {
    uVar1 = local_14;
  }
  if (local_10[0] != 0 && local_10[0] != uVar1) {
    func_003E5660(local_10[0]);
    func_003E4DDC(local_10[0],0,0,*puVar2);
  }
  else {
    func_003E5388();
    func_003E489C(0,0,*puVar2);
  }
  return 1;
}

