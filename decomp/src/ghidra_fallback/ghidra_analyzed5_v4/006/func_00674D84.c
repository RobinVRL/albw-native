#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_003931EC(undefined4 *param_1,uint param_2);
extern int func_0058A7D4(void);
extern int func_0065B098(int param_1,undefined4 param_2);
extern int func_0065B104(int param_1);

// USA 00674D84 <- EU 00674D5C (Ghidra, non-matching)

undefined4 func_00674D84(int param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (*(int *)(param_1 + 0x97c) == 0) {
    puVar1 = (uint *)func_0058A7D4();
    uVar2 = func_00111A64(puVar1);
    puVar3 = (undefined4 *)(param_1 + 0x90c);
    if (0x31 < (uint)((ulonglong)uVar2 * 100 >> 0x20)) {
      func_0065B098((int)puVar3,2);
      func_003931EC(puVar3,2);
      return func_0065B104((int)puVar3);
    }
    func_0065B098((int)puVar3,1);
    func_003931EC(puVar3,1);
    func_0065B104((int)puVar3);
  }
  return 0;
}

