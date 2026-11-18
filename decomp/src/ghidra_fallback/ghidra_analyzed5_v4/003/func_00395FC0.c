#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00396AC0(int param_1,undefined4 param_2);
extern int func_0055DCC4(int param_1,int param_2);
extern int func_0058A7D4(void);
extern int DAT_003960f4;

// USA 00395FC0 <- EU 00395F9C (Ghidra, non-matching)
// GLOBAL DAT_003960f4 int

undefined4 func_00395FC0(int *param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  
  iVar1 = *param_1;
  if (DAT_003960f4 < *(int *)(iVar1 + 0xa00)) {
    return 0;
  }
  iVar1 = func_0055DCC4(iVar1 + 0xbc8,(uint)*(byte *)(iVar1 + 0x1488));
  if ((iVar1 == 0) &&
     (iVar1 = func_0055DCC4(*param_1 + 0xbc8,(uint)*(byte *)(*param_1 + 0x1489)), iVar1 == 0)) {
    return 0;
  }
  puVar2 = (uint *)func_0058A7D4();
  uVar3 = func_00111A64(puVar2);
  iVar1 = func_0055DCC4(*param_1 + 0xbc8,(uint)*(byte *)(*param_1 + 0x1488));
  if ((iVar1 == 0) ||
     (iVar1 = func_0055DCC4(*param_1 + 0xbc8,(uint)*(byte *)(*param_1 + 0x1489)), iVar1 == 0)) {
    iVar1 = func_0055DCC4(*param_1 + 0xbc8,(uint)*(byte *)(*param_1 + 0x1488));
    if (iVar1 == 0) goto LAB_003960d4;
  }
  else if ((uint)((ulonglong)uVar3 * 0x65 >> 0x20) < 0x32) {
LAB_003960d4:
    func_00396AC0((int)param_1,(uint)*(byte *)(*param_1 + 0x1489));
    return 1;
  }
  func_00396AC0((int)param_1,(uint)*(byte *)(*param_1 + 0x1488));
  return 1;
}

