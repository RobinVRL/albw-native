#include "ghidra_types.h"

extern int func_00231448(int param_1);
extern int func_00532C78(int param_1);
extern int func_006653E8(undefined4 *param_1,undefined1 param_2);
extern int DAT_0031c7ac;

// USA 0031C754 <- EU 0031C730 (Ghidra, non-matching)
// GLOBAL DAT_0031c7ac int

undefined4 func_0031C754(int param_1)

{
  bool bVar1;
  
  if ((*(char *)(param_1 + 0xe9) != '\0') && (bVar1 = func_00532C78(param_1 + 200), !bVar1)) {
    func_00231448(param_1 + 0xd4);
    *(undefined1 *)(param_1 + 0xe9) = 0;
  }
  if (*(float *)(param_1 + 0xe0) < *(float *)(param_1 + 0xe4)) {
    if ((int)ALBW_AS_U32((*(float *)(param_1 + 0xe4) - *(float *)(param_1 + 0xe0))) <= DAT_0031c7ac) {
      return func_006653E8((undefined4 *)(param_1 + 0x50),1);
    }
    func_006653E8((undefined4 *)(param_1 + 0x50),2);
  }
  return 0;
}

