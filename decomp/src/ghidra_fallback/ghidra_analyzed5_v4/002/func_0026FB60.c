#include "ghidra_types.h"

extern int func_002FEB78(int param_1,uint param_2,int *param_3,int param_4,undefined4 *param_5, undefined8 param_6,byte param_7);

// USA 0026FB60 <- EU 0026FB88 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4
// PARAM param_6 Stack[0x4]:4 undefined4

undefined1
func_0026FB60(int param_1,int *param_2,uint param_3,int param_4,undefined4 param_5,
             undefined4 param_6)

{
  undefined1 uVar1;
  byte *pbVar2;
  int iVar3;
  
  uVar1 = 0;
  if (*(char *)(param_1 + 0x70) != '\0') {
    if ((*(char *)(param_1 + 0x71) != '\0') || (*(char *)(param_1 + 0x10) != '\0')) {
      pbVar2 = (byte *)(*param_2 + param_3 * 0x278);
      *pbVar2 = *pbVar2 | 1;
      if (**(int **)(param_1 + 4) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int **)(param_1 + 4))[2];
      }
      func_002FEB78(iVar3,param_3,param_2,param_4,(undefined4 *)(param_1 + 0x44),
                    CONCAT44(param_6,param_5),1);
      *(undefined1 *)(param_1 + 0x73) = 1;
    }
    if (**(int **)(param_1 + 4) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*(int **)(param_1 + 4))[2];
    }
    uVar1 = 0;
    if (*(char *)(iVar3 + 0x29) != '\0') {
      uVar1 = 1;
    }
  }
  return uVar1;
}

