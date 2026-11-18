// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0010C1B8(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern int func_003C8BD8(int *param_1);

// USA 0040F6FC <- EU 0040F6DC (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)

undefined4 func_0040F6FC(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  bVar4 = *(char *)(param_1 + 0x51) != '\0';
  cVar1 = '\0';
  if (bVar4) {
    cVar1 = *(char *)(param_1 + 0x50);
  }
  if (bVar4 && cVar1 != '\0') {
    iVar3 = *(int *)(param_1 + 0x34);
    uVar2 = *(uint *)(iVar3 + 4);
    if ((uVar2 & 0xfffffffe) != 0) {
                    /* WARNING: Subroutine does not return */
      if ((uVar2 & 1) != 0) {
        func_0010C1B8(uVar2,uVar2 & 0xfffffffe,param_3);
      }
      func_003C8BD8((int *)(*(uint *)(iVar3 + 4) & 0xfffffffe));
      *(undefined4 *)(iVar3 + 4) = 0;
    }
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  return (undefined4)param_1;
}

