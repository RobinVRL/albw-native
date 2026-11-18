#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00396AC0(int param_1,undefined4 param_2);
extern int func_0055DE60(undefined4 param_1,int param_2);
extern int func_0058A7D4(void);

// USA 00396834 <- EU 00396810 (Ghidra, non-matching)

undefined4 func_00396834(int *param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  
  iVar1 = func_0055DE60(*param_1 + 0xbc8,(uint)*(byte *)(*param_1 + 0x1488));
  if ((iVar1 == 0) &&
     (iVar1 = func_0055DE60(*param_1 + 0xbc8,(uint)*(byte *)(*param_1 + 0x1489)), iVar1 == 0)) {
    return 0;
  }
  puVar2 = (uint *)func_0058A7D4();
  uVar3 = func_00111A64(puVar2);
  iVar1 = func_0055DE60(*param_1 + 0xbc8,(uint)*(byte *)(*param_1 + 0x1488));
  if ((iVar1 == 0) ||
     (iVar1 = func_0055DE60(*param_1 + 0xbc8,(uint)*(byte *)(*param_1 + 0x1489)), iVar1 == 0)) {
    iVar1 = func_0055DE60(*param_1 + 0xbc8,(uint)*(byte *)(*param_1 + 0x1488));
    if (iVar1 != 0) goto LAB_00396910;
  }
  else if (0x31 < (uint)((ulonglong)uVar3 * 0x65 >> 0x20)) {
LAB_00396910:
    func_00396AC0((int)param_1,(uint)*(byte *)(*param_1 + 0x1488));
    return 1;
  }
  func_00396AC0((int)param_1,(uint)*(byte *)(*param_1 + 0x1489));
  return 1;
}

