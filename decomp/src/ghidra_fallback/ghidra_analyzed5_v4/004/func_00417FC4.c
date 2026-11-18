#include "ghidra_types.h"

extern int func_0041CD48(undefined4 *param_1);
extern int func_0041D7FC(uint *param_1,uint param_2,int param_3);

// USA 00417FC4 <- EU 00417FA4 (Ghidra, non-matching)

void func_00417FC4(uint *param_1)

{
  uint *puVar1;
  uint *puVar2;
  
  if ((char)param_1[4] != '\0') {
    puVar1 = (uint *)param_1[2];
    if ((uint *)param_1[2] != param_1 + 2) {
      do {
        puVar2 = (uint *)*puVar1;
        func_0041CD48(puVar1 + -0x6a);
        puVar1 = puVar2;
      } while (puVar2 != param_1 + 2);
    }
    func_0041D7FC(param_1,param_1[6],param_1[7]);
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}

