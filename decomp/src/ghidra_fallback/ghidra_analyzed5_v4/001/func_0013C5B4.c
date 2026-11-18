#include "ghidra_types.h"

extern int func_004CF478(int param_1,int param_2);
extern int func_006572F8(undefined4 *param_1,undefined1 param_2);
extern undefined4 uRam0013c674;
extern float DAT_0013c670;

// USA 0013C5B4 <- EU 0013C5B4 (Ghidra, non-matching)
// GLOBAL DAT_0013c670 float
// GLOBAL UNK_0013c674 undefined4

void func_0013C5B4(int param_1)

{
  short sVar1;
  int iVar2;
  
  sVar1 = *(short *)(param_1 + 0x43c);
  if ((sVar1 != 0) && (*(short *)(param_1 + 0x43c) = sVar1 + -1, sVar1 == 1)) {
    func_004CF478(*(int *)(param_1 + 0x410),1);
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x414) + 0x14) + 0x10) = uRam0013c674;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x414) + 0x14);
  if (*(char *)(iVar2 + 0x1c) == '\0') {
    if (*(float *)(iVar2 + 0x10) < DAT_0013c670) {
      if (DAT_0013c670 < *(float *)(iVar2 + 8)) {
        return;
      }
    }
    else if (*(float *)(iVar2 + 8) != *(float *)(iVar2 + 0x14)) {
      return;
    }
    func_006572F8((undefined4 *)(param_1 + 0x418),0);
  }
  return;
}

