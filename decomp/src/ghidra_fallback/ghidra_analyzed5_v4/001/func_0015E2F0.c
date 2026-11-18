#include "ghidra_types.h"

extern int func_00161178(undefined4 *param_1);
extern float func_0058A404(int param_1);
extern int func_0058A8F0(int param_1);
extern int func_0065836C(undefined4 *param_1,undefined1 param_2);
extern int DAT_0015e384;
extern int DAT_0015e388;

// USA 0015E2F0 <- EU 0015E2F4 (Ghidra, non-matching)
// GLOBAL DAT_0015e384 int
// GLOBAL DAT_0015e388 int

undefined4 func_0015E2F0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float fVar4;
  
  iVar1 = func_0058A8F0((int)param_1);
  if (iVar1 != 0) {
    puVar3 = param_1 + 0x22f;
    if (0 < *(short *)(DAT_0015e384 + (int)param_1)) {
      if ((*(char *)(param_1 + 0x38b) == '\0') &&
         ((puVar2 = func_00161178(param_1), puVar2 == (undefined4 *)0x0 ||
          (fVar4 = func_0058A404((int)puVar2), (int)ALBW_AS_U32(fVar4) <= DAT_0015e388)))) {
        return func_0065836C(puVar3,0x19);
      }
      return func_0065836C(puVar3,4);
    }
    func_0065836C(puVar3,0x14);
  }
  return 0;
}

