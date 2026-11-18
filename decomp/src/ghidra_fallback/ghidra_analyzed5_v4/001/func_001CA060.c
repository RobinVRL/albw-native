#include "ghidra_types.h"

extern int func_004C00F4(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern float DAT_001ca0d4;

// USA 001CA060 <- EU 001CA060 (Ghidra, non-matching)
// GLOBAL DAT_001ca0d4 float

undefined4 func_001CA060(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x7b4) + 0xc);
    iVar1 = *(int *)(*(int *)(param_1 + 0x7b4) + 0x14);
    if (*(float *)(iVar1 + 8) != DAT_001ca0d4) {
      uVar2 = 1;
      *(float *)(iVar1 + 8) = DAT_001ca0d4;
      *(undefined1 *)(iVar1 + 0x26) = 1;
    }
    func_004C00F4(param_1,uVar2,param_3,param_4);
    *(undefined1 *)(param_1 + 0x853) = 2;
    *(undefined1 *)(param_1 + 0x855) = 5;
    *(undefined1 *)(param_1 + 0x856) = 3;
    *(undefined1 *)(param_1 + 0x854) = 4;
  }
  return 1;
}

