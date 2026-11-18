#include "ghidra_types.h"

extern int func_00521078(int param_1);
extern int func_00589F28(int param_1,float fparam_0);
extern int func_0066ACA4(undefined4 *param_1,undefined1 param_2);
extern int DAT_004f2a94;
extern float DAT_004f2a98;

// USA 004F2A04 <- EU 004F29DC (Ghidra, non-matching)
// GLOBAL DAT_004f2a94 int
// GLOBAL DAT_004f2a98 float

undefined4 func_004F2A04(int param_1)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (*(char *)(*(int *)(param_1 + 0x510) + 4) == '\0') {
    puVar4 = (undefined4 *)(param_1 + 0x8d4);
    if (0 < *(short *)(DAT_004f2a94 + param_1)) {
      if ((*(float *)(param_1 + 0x910) <= *(float *)(param_1 + 0x3d4)) &&
         (bVar1 = func_00521078(param_1), bVar1)) {
        return func_0066ACA4(puVar4,3);
      }
      if ((*(short *)(param_1 + 0x2e) == 2) ||
         (iVar3 = func_00589F28(param_1,DAT_004f2a98), iVar3 == 0)) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
      *(undefined1 *)(param_1 + 0x91b) = uVar2;
      return func_0066ACA4(puVar4,4);
    }
    func_0066ACA4(puVar4,8);
  }
  return 0;
}

