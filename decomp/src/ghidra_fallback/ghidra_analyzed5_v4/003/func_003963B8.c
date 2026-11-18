#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00396AC0(int param_1,undefined4 param_2);
extern int func_0055DD50(undefined4 param_1,int param_2);
extern int func_0058A7D4(void);
extern int DAT_00396504;

// USA 003963B8 <- EU 00396394 (Ghidra, non-matching)
// GLOBAL DAT_00396504 int

undefined4 func_003963B8(int *param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  
  iVar1 = *param_1;
  iVar2 = (short)*(char *)(*(int *)(iVar1 + 0x8bc) + 8) * 0x56;
  if ((iVar2 >> 8) - (iVar2 >> 0x1f) <= (int)*(short *)(DAT_00396504 + iVar1)) {
    return 0;
  }
  iVar2 = func_0055DD50(iVar1 + 0xbc8,(uint)*(byte *)(iVar1 + 0x1488));
  if ((iVar2 == 0) &&
     (iVar2 = func_0055DD50(*param_1 + 0xbc8,(uint)*(byte *)(*param_1 + 0x1489)), iVar2 == 0)) {
    return 0;
  }
  puVar3 = (uint *)func_0058A7D4();
  uVar4 = func_00111A64(puVar3);
  iVar2 = func_0055DD50(*param_1 + 0xbc8,(uint)*(byte *)(*param_1 + 0x1488));
  if ((iVar2 == 0) ||
     (iVar2 = func_0055DD50(*param_1 + 0xbc8,(uint)*(byte *)(*param_1 + 0x1489)), iVar2 == 0)) {
    iVar2 = func_0055DD50(*param_1 + 0xbc8,(uint)*(byte *)(*param_1 + 0x1488));
    if (iVar2 == 0) goto LAB_003964e4;
  }
  else if ((uint)((ulonglong)uVar4 * 0x65 >> 0x20) < 0x32) {
LAB_003964e4:
    func_00396AC0((int)param_1,(uint)*(byte *)(*param_1 + 0x1489));
    return 1;
  }
  func_00396AC0((int)param_1,(uint)*(byte *)(*param_1 + 0x1488));
  return 1;
}

