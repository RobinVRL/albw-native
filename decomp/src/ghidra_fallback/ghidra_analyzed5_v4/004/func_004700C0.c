#include "ghidra_types.h"

extern int func_0012C718(int param_1);
extern int func_0014D4FC(int param_1);
extern int func_00231448(int param_1);
extern int func_00368BB4(int param_1,undefined1 *param_2);
extern int func_00532C78(int param_1);
extern int func_00557608(int param_1);
extern int func_0055FA60(int param_1);
extern int func_0066E304(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0047018c;

// USA 004700C0 <- EU 00470098 (Ghidra, non-matching)
// GLOBAL DAT_0047018c int *

undefined4 func_004700C0(int param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = func_00557608(*(int *)(param_1 + 0xe0));
  if (iVar2 != 0) {
    iVar2 = func_0055FA60(*(int *)(param_1 + 0xe0));
    if (iVar2 < 0) {
      if ((*(int *)(param_1 + 200) != 0) && (-1 < *(short *)(param_1 + 0xc2))) {
        bVar1 = func_00532C78(param_1 + 0xc0);
        if (bVar1) {
          return 0;
        }
        func_00231448(param_1 + 0xc0);
      }
      return func_0066E304((undefined4 *)(param_1 + 0x74),0);
    }
    if (iVar2 < 2) {
      bVar1 = func_00532C78(param_1 + 0xc0);
      if (!bVar1) {
        func_00368BB4(*(int *)(param_1 + 0xe0),(undefined1 *)(param_1 + 0xef));
        func_00231448(param_1 + 0xc0);
        return func_0066E304((undefined4 *)(param_1 + 0x74),3);
      }
    }
    else {
      if (iVar2 == 2) {
        **(undefined1 **)(param_1 + 0xe4) = 1;
        func_0014D4FC(*(int *)(*DAT_0047018c + 300));
        *(undefined4 *)(param_1 + 0xe4) = 0;
        return func_0012C718(param_1);
      }
      func_0066E304((undefined4 *)(param_1 + 0x74),6);
    }
  }
  return 0;
}

