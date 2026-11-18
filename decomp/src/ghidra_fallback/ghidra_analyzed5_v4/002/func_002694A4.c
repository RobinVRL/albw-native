#include "ghidra_types.h"

extern int func_002C9104(int *param_1);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int *DAT_002695d4;
extern undefined4 *DAT_002695d8;
extern uint DAT_002695dc;
extern int DAT_002695e0;

// USA 002694A4 <- EU 002694CC (Ghidra, non-matching)
// GLOBAL DAT_002695d4 int *
// GLOBAL DAT_002695d8 undefined4 *
// GLOBAL DAT_002695dc uint
// GLOBAL DAT_002695e0 int

undefined4 func_002694A4(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  ulonglong uVar8;
  
  puVar2 = DAT_002695d8;
  piVar1 = DAT_002695d4;
  piVar5 = (int *)0x0;
  uVar8 = (ulonglong)DAT_002695dc;
  puVar3 = (undefined4 *)
           func_005841A8(*DAT_002695d4,*DAT_002695d8,*(int **)(DAT_002695e0 + *DAT_002695d4));
  if (*(undefined4 **)(*piVar1 + 0x3dbc8) != puVar3) {
    do {
      piVar4 = (int *)*puVar3;
      if (piVar4 != (int *)0x0) {
        if (param_2 == 0) {
          if ((char)piVar4[0x11e] != '\0') {
            fVar6 = *(float *)(param_1 + 0x3d0) - ALBW_AS_F32(piVar4[0xf4]);
            fVar7 = *(float *)(param_1 + 0x3d8) - ALBW_AS_F32(piVar4[0xf6]);
            fVar6 = fVar6 * fVar6 + fVar7 * fVar7;
            if (fVar6 < ALBW_AS_F32(uVar8)) {
              uVar8 = (ulonglong)(uint)ALBW_AS_U32(fVar6);
              piVar5 = piVar4;
            }
          }
        }
        else {
          func_002C9104(piVar4);
        }
      }
      puVar3 = (undefined4 *)func_005841A8(*piVar1,*puVar2,puVar3 + 1);
    } while (*(undefined4 **)(*piVar1 + 0x3dbc8) != puVar3);
  }
  if ((param_2 == 0) && (piVar5 != (int *)0x0)) {
    return func_002C9104(piVar5);
  }
  return 0;
}

