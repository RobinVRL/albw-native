#include "ghidra_types.h"

extern int func_003D0B10(int *param_1);
extern int func_003D1048(undefined4 *param_1);
extern int DAT_003d0aa4;

// USA 003D0988 <- EU 003D0964 (Ghidra, non-matching)
// GLOBAL DAT_003d0aa4 int

int func_003D0988(int *param_1)

{
  int iVar1;
  uint uVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_1c (*(int *)(albw_frame + 0x4))
  #define auStack_18 ((undefined1 *)(albw_frame + 0x8))
  local_1c = 0;
  iVar1 = (**(code **)(*param_1 + 0x34))(param_1,param_1 + 4,0x18c,&local_1c,param_1[1],1,0x12);
  if (DAT_003d0aa4 != iVar1 * 0x400000) {
    if (local_1c == 0) {
      func_003D0B10(param_1);
      (**(code **)(*param_1 + 0x28))(param_1,param_1[1],0,0,5);
      return 0;
    }
    if ((-1 < iVar1) && ((short)param_1[4] == 0x6868)) {
      uVar2 = 0;
      if (param_1[6] != 0) {
        do {
          iVar1 = func_003D1048(param_1 + uVar2 * 4 + 7);
          iVar1 = (**(code **)(*param_1 + 8))(param_1,iVar1,0xb,0,auStack_18);
          if (iVar1 < 0) {
            iVar1 = func_003D0B10(param_1);
            if (-1 < iVar1) {
              return local_1c;
            }
            return 0;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < (uint)param_1[6]);
      }
      return local_1c;
    }
    func_003D0B10(param_1);
  }
  return 0;
}

