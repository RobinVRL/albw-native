// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0066B580(undefined4 *param_1,undefined1 param_2);
extern float DAT_0050ac10;

// USA 0050AB40 <- EU 0050AB18 (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)
// GLOBAL DAT_0050ac10 float

undefined4 func_0050AB40(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  undefined1 uVar2;
  
  func_00169A80(*(int **)(param_1 + 0x410),param_2,param_3,param_4);
  func_00168E9C(*(int **)(param_1 + 0x410),*(int *)(param_1 + 0x40c),(int *)0x0);
  iVar1 = *(int *)(*(int *)(param_1 + 0x410) + 0x14);
  if (*(char *)(iVar1 + 0x1c) == '\0') {
    if (*(float *)(iVar1 + 0x10) < DAT_0050ac10) {
      if (DAT_0050ac10 < *(float *)(iVar1 + 8)) {
        return 0;
      }
    }
    else if (*(float *)(iVar1 + 8) != *(float *)(iVar1 + 0x14)) {
      return 0;
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x414) + 0x14);
    if (*(char *)(iVar1 + 0x1c) == '\0') {
      if (*(float *)(iVar1 + 0x10) < DAT_0050ac10) {
        if (*(float *)(iVar1 + 8) <= DAT_0050ac10) goto LAB_0050abdc;
      }
      else if (*(float *)(iVar1 + 8) == *(float *)(iVar1 + 0x14)) {
LAB_0050abdc:
        if ((*(char *)(param_1 + 0x465) == '\0') || (*(char *)(param_1 + 0x466) != '\0')) {
          uVar2 = 0;
        }
        else {
          uVar2 = 2;
        }
        return func_0066B580((undefined4 *)(param_1 + 0x418),uVar2);
      }
    }
  }
  return 0;
}

