#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_0058A7D4(void);
extern float DAT_003b9a5c;

// USA 003B99B8 <- EU 003B9994 (Ghidra, non-matching)
// GLOBAL DAT_003b9a5c float

undefined4 func_003B99B8(int *param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  
  *(undefined1 *)((int)param_1 + 0x62) = 0;
  *(undefined1 *)((int)param_1 + 99) = 0;
  *(undefined1 *)(param_1[0x12] + 0x936) = 1;
  *(undefined2 *)(param_1 + 0x24) = 0;
  iVar1 = *(int *)(*(int *)(param_1[0x12] + 0x8dc) + 0x14);
  if (*(char *)(iVar1 + 0x1c) == '\0') {
    if (*(float *)(iVar1 + 0x10) < DAT_003b9a5c) {
      if (*(float *)(iVar1 + 8) <= DAT_003b9a5c) goto LAB_003b9a10;
    }
    else if (*(float *)(iVar1 + 8) == *(float *)(iVar1 + 0x14)) {
LAB_003b9a10:
      puVar2 = (uint *)func_0058A7D4();
      uVar3 = func_00111A64(puVar2);
      if ((uint)((ulonglong)uVar3 * 0x65 >> 0x20) < 0x33) {
                    /* WARNING: Could not recover jumptable at 0x003b9a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        return (**(code **)(*param_1 + 0x138))(param_1,2);
      }
                    /* WARNING: Could not recover jumptable at 0x003b9a58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      return (**(code **)(*param_1 + 0x138))(param_1,1,1);
    }
  }
  return 0;
}

