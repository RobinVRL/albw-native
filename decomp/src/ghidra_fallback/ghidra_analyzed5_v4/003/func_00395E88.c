#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00396AC0(int param_1,undefined4 param_2);
extern int func_0055DC60(undefined4 param_1,int param_2);
extern int func_0058A7D4(void);

// USA 00395E88 <- EU 00395E64 (Ghidra, non-matching)

undefined4 func_00395E88(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  
  iVar2 = *param_1;
  iVar3 = func_0055DC60(iVar2 + 0xbc8,(uint)*(byte *)(iVar2 + 0x1488));
  if ((iVar3 != 0) ||
     (iVar2 = func_0055DC60(iVar2 + 0xbc8,(uint)*(byte *)(iVar2 + 0x1489)), iVar2 != 0)) {
    puVar4 = (uint *)func_0058A7D4();
    uVar5 = func_00111A64(puVar4);
    if ((uint)((ulonglong)uVar5 * 0x65 >> 0x20) < 0x33) {
      iVar2 = func_0055DC60(*param_1 + 0xbc8,(uint)*(byte *)(*param_1 + 0x1488));
      if (iVar2 != 0) {
LAB_00395f38:
        return func_00396AC0((int)param_1,(uint)*(byte *)(*param_1 + 0x1488));
      }
      iVar2 = func_0055DC60(*param_1 + 0xbc8,(uint)*(byte *)(*param_1 + 0x1489));
      if (iVar2 == 0) {
        puVar4 = (uint *)func_0058A7D4();
        uVar5 = func_00111A64(puVar4);
        if (0x31 < (uint)((ulonglong)uVar5 * 0x65 >> 0x20)) goto LAB_00395f38;
      }
      return func_00396AC0((int)param_1,(uint)*(byte *)(*param_1 + 0x1489));
    }
  }
  puVar4 = (uint *)func_0058A7D4();
  uVar5 = func_00111A64(puVar4);
  if ((uint)((ulonglong)uVar5 * 0x65 >> 0x20) < 0xb) {
    uVar1 = 2;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)((int)param_1 + 0x13) = uVar1;
  return 0;
}

