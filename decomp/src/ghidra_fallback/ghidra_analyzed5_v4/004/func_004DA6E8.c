#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int *DAT_004da7f4;
extern undefined4 *DAT_004da7f8;
extern int DAT_004da7fc;
extern uint *DAT_004da800;
extern undefined4 *DAT_004da804;
extern undefined4 DAT_004da808;

// USA 004DA6E8 <- EU 004DA6C0 (Ghidra, non-matching)
// GLOBAL DAT_004da7f4 int *
// GLOBAL DAT_004da7f8 undefined4 *
// GLOBAL DAT_004da7fc int
// GLOBAL DAT_004da800 uint *
// GLOBAL DAT_004da804 undefined4 *
// GLOBAL DAT_004da808 undefined4

void func_004DA6E8(int *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (param_1[0x264] == 0) {
    puVar2 = (undefined4 *)
             func_005841A8(*DAT_004da7f4,*DAT_004da7f8,*(int **)(DAT_004da7fc + *DAT_004da7f4));
    puVar4 = (undefined4 *)*puVar2;
    if (puVar4 != (undefined4 *)0x0) {
      if (((*DAT_004da800 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_004da800), iVar3 != 0)) {
        *DAT_004da804 = DAT_004da808;
      }
      iVar3 = (**(code **)*puVar4)(puVar4,DAT_004da804);
      if (iVar3 == 0) {
        puVar4 = (undefined4 *)0x0;
      }
      if (puVar4 != (undefined4 *)0x0) {
        if (((ALBW_AS_F32(puVar4[0xf4]) == ALBW_AS_F32(param_1[0xf4])) &&
            (ALBW_AS_F32(puVar4[0xf5]) == ALBW_AS_F32(param_1[0xf5]))) &&
           (ALBW_AS_F32(puVar4[0xf6]) == ALBW_AS_F32(param_1[0xf6]))) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (!bVar1) {
          (**(code **)(*(int *)*puVar2 + 0x30))((int *)*puVar2,0);
        }
      }
    }
    (**(code **)(*param_1 + 0xac))(param_1,0,10);
  }
  iVar3 = param_1[0x264];
  param_1[0x264] = iVar3 + 1U;
  if (10 < iVar3 + 1U) {
    *(undefined1 *)(param_1 + 0x26d) = 1;
  }
  return;
}

