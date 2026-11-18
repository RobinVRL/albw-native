#include "ghidra_types.h"

extern int func_0010EB00(int param_1,uint param_2,undefined1 param_3,undefined1 param_4);
extern int func_003C95F8(undefined4 *param_1,undefined4 param_2);
extern int DAT_003c7bfc;
extern uint DAT_003c7c00;

// USA 003C7BAC <- EU 003C7B88 (Ghidra, non-matching)
// GLOBAL DAT_003c7bfc int
// GLOBAL DAT_003c7c00 uint

uint func_003C7BAC(int param_1)

{
  int iVar1;
  uint uVar2;
  int *in_r3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int * *)(albw_frame + 0x8))
  iVar1 = DAT_003c7bfc;
  uVar2 = DAT_003c7c00;
  if ((*(int *)(DAT_003c7bfc + 8) == 0) &&
     (local_18 = in_r3, uVar2 = func_003C95F8(&local_18,4), -1 < (int)uVar2)) {
    uVar2 = func_0010EB00(param_1,(uint)local_18,0,0);
    if ((uVar2 & 0x80000000) == 0) {
      *(int **)(iVar1 + 8) = local_18;
    }
    else {
      (**(code **)(*local_18 + 0x30))(local_18);
    }
  }
  return uVar2;
}

