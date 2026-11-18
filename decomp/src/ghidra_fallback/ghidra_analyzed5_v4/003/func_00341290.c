#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_001E1ECC(int param_1);
extern int func_002D175C(int param_1,int param_2,int param_3);
extern int func_002D3040(int param_1);
extern int func_002FF73C(int param_1);
extern int *DAT_003412f8;
extern undefined4 *DAT_003412fc;
extern int *DAT_00341300;

// USA 00341290 <- EU 0034126C (Ghidra, non-matching)
// GLOBAL DAT_003412f8 int *
// GLOBAL DAT_003412fc undefined4 *
// GLOBAL DAT_00341300 int *

undefined4 func_00341290(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != 0) {
    iVar2 = func_001E1ECC(*DAT_003412f8);
    puVar1 = DAT_003412fc;
    if (iVar2 == 0) {
      iVar3 = 1;
    }
    else {
      iVar3 = func_0010983C(*DAT_003412fc,iVar2);
    }
    func_002FF73C(*(int *)(param_1 + 0x2c));
    *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x20) = *(undefined4 *)(param_1 + 0x2c);
    func_002D175C(*(int *)(param_1 + 0x28),(int)*(char *)(*(int *)(*DAT_00341300 + 0x10) + 0x430),
                  iVar2);
    if (iVar3 != 1) {
      func_0010983C(*puVar1,iVar3);
    }
  }
  return func_002D3040(*(int *)(param_1 + 0x28));
}

