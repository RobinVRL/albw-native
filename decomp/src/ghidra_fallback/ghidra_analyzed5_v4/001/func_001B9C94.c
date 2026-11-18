#include "ghidra_types.h"

extern int func_00520FD4(void);
extern int func_00521098(undefined4 param_1,int *param_2);
extern int *DAT_001b9d4c;
extern float DAT_001b9d50;

// USA 001B9C94 <- EU 001B9C94 (Ghidra, non-matching)
// GLOBAL DAT_001b9d4c int *
// GLOBAL DAT_001b9d50 float

void func_001B9C94(int param_1,int *param_2,int param_3)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int extraout_r1;
  int iVar4;
  
  if (param_3 == 0) {
    return;
  }
  bVar1 = func_00521098(param_1,param_2);
  if (bVar1) {
    *(undefined1 *)(param_1 + 0x479) = 1;
    bVar1 = func_00520FD4();
    if (!bVar1) {
      piVar2 = *(int **)(param_1 + 0x414);
      iVar4 = extraout_r1;
      if (piVar2 != (int *)0x0) {
        iVar4 = *piVar2;
      }
      if (piVar2 == (int *)0x0 || iVar4 == 0) {
LAB_001b9d44:
        *(undefined1 *)(param_1 + 0x474) = 1;
        return;
      }
      if (*(char *)(param_1 + 0x47b) == '\0') {
        piVar3 = piVar2 + 9;
        iVar4 = *piVar3;
        if (iVar4 != 0) {
          piVar3 = (int *)piVar2[10];
        }
        if (((iVar4 != 0 && piVar3 != (int *)0x0) && (*(float *)(iVar4 + 0x1c) != ALBW_AS_F32(piVar3[7])))
           || (*(float *)(param_1 + 0x3d4) - DAT_001b9d50 <=
               *(float *)(*(int *)(*DAT_001b9d4c + 0x1c) + 4))) goto LAB_001b9d44;
      }
      *(undefined1 *)(param_1 + 0x474) = 0;
    }
  }
  return;
}

