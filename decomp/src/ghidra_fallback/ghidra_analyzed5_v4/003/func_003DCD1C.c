#include "ghidra_types.h"

extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern int func_003DE088(int param_1,int param_2,int param_3);
extern int func_003DFF20(int param_1);
extern int func_003E01C4(int param_1);
extern int func_003E07DC(int param_1);
extern int DAT_003dcd9c;

// USA 003DCD1C <- EU 003DCCFC (Ghidra, non-matching)
// GLOBAL DAT_003dcd9c int

undefined4 func_003DCD1C(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_3 != 0) {
    func_0010C0C0((int *)(param_1 + 0x44));
    iVar1 = param_1 + param_2 * 8;
    if (*(int *)(iVar1 + 0x34) != 0) {
      func_003DFF20(*(int *)(iVar1 + 0x34));
    }
    if (*(int *)(iVar1 + 0x38) != 0) {
      func_003E07DC(*(int *)(iVar1 + 0x38));
    }
    *(undefined4 *)(iVar1 + 0x34) = 0;
    *(undefined4 *)(iVar1 + 0x38) = 0;
    func_003DE088(DAT_003dcd9c,param_2,0);
    func_0010C160((int *)(param_1 + 0x44));
    func_0010C0C0((int *)(param_1 + 0x44));
    *(int *)(iVar1 + 0x38) = param_3;
    func_003E01C4(param_3);
    func_003DE088(DAT_003dcd9c,param_2,1);
    func_0010C160((int *)(param_1 + 0x44));
    return 1;
  }
  return 0;
}

