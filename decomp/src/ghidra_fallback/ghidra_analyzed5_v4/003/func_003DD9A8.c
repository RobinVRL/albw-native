#include "ghidra_types.h"

extern int func_003DD93C(void);
extern int func_003DECE8(int param_1,int param_2,ushort *param_3);
extern int DAT_003dda20;

// USA 003DD9A8 <- EU 003DD988 (Ghidra, non-matching)
// GLOBAL DAT_003dda20 int

undefined4 func_003DD9A8(int param_1,int param_2,ushort *param_3)

{
  int iVar1;
  undefined4 uVar2;
  ushort uVar3;
  bool bVar4;
  
  *(bool *)(param_1 + param_2 + 4) = param_3[1] != 0;
  iVar1 = func_003DD93C();
  uVar3 = *param_3;
  bVar4 = (uVar3 & 1) != 0;
  if (bVar4) {
    uVar3 = param_3[1];
  }
  iVar1 = iVar1 + param_2 * 0x14;
  if (bVar4) {
    *(ushort *)(iVar1 + 2) = uVar3;
  }
  if ((*param_3 & 4) != 0) {
    *(ushort *)(iVar1 + 6) = param_3[3];
    *(ushort *)(iVar1 + 0xc) = param_3[6];
    *(ushort *)(iVar1 + 0xe) = param_3[7];
    *(ushort *)(iVar1 + 0x10) = param_3[8];
    *(ushort *)(iVar1 + 0x12) = param_3[9];
  }
  if ((*param_3 & 2) != 0) {
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_3 + 4);
  }
  uVar2 = func_003DECE8(DAT_003dda20,param_2,param_3);
  return uVar2;
}

