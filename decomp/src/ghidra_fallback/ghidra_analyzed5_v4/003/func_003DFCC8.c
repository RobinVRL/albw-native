#include "ghidra_types.h"

extern int func_001080D4(int *param_1);
extern int func_003DCBF8(int param_1,undefined2 param_2);
extern int func_003DE544(uint *param_1,int param_2);
extern byte *DAT_003dfd00;
extern uint *DAT_003dfd04;
extern int DAT_003dfd08;
extern int DAT_003dfd0c;

// USA 003DFCC8 <- EU 003DFCA8 (Ghidra, non-matching)
// GLOBAL DAT_003dfd00 byte *
// GLOBAL DAT_003dfd04 uint *
// GLOBAL DAT_003dfd08 int
// GLOBAL DAT_003dfd0c int

undefined4 func_003DFCC8(void)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  
  pbVar2 = DAT_003dfd00;
  if ((*DAT_003dfd00 & DAT_003dfd00[1]) != 0) {
    func_003DE544(DAT_003dfd04,1);
    iVar3 = DAT_003dfd0c;
    bVar1 = *(byte *)(DAT_003dfd08 + 0xc0);
    pbVar2[4] = bVar1;
    func_003DCBF8(iVar3,(short)(char)bVar1);
    pbVar2[1] = 0;
    pbVar2[2] = 0;
    coproc_moveto_Data_Synchronization(0);
    return func_001080D4((int *)(pbVar2 + 8));
  }
  return 0;
}

