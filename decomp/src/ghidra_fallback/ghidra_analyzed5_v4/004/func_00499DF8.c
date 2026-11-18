#include "ghidra_types.h"

extern int func_0010C1B8(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern int func_003C7AB0(int param_1,undefined4 param_2,undefined4 param_3);
extern int func_003C8BA4(uint *param_1);
extern int func_003C8BD8(int *param_1);

// USA 00499DF8 <- EU 00499DD0 (Ghidra, non-matching)

int func_00499DF8(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (*(char *)(param_2 + 0x34) == '\x01' || *(char *)(param_2 + 0x34) == '\x02') {
    iVar1 = func_003C8BA4((uint *)(param_2 + 0x20));
    iVar3 = (iVar1 >> 0x1f) + 1;
    *(int *)(param_1 + 0x50) = iVar1;
  }
  uVar2 = *(uint *)(param_2 + 0x20);
  if ((uVar2 & 0xfffffffe) != 0) {
                    /* WARNING: Subroutine does not return */
    if ((uVar2 & 1) != 0) {
      func_0010C1B8(uVar2,uVar2 & 0xfffffffe,param_3);
    }
    func_003C8BD8((int *)(*(uint *)(param_2 + 0x20) & 0xfffffffe));
    *(undefined4 *)(param_2 + 0x20) = 0;
  }
  func_003C7AB0(param_2 + 0x18,0,param_3);
  return iVar3;
}

