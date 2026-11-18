#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_004B083C(void);
extern int func_00520B48(int param_1);
extern int func_0058D8F0(int param_1);
extern int func_0058D9E0(int param_1);
extern int *DAT_00574268;
extern uint *DAT_0057426c;
extern undefined4 DAT_00574270;
extern undefined4 *DAT_00574274;
extern uint *DAT_00574278;
extern undefined4 *DAT_0057427c;
extern undefined4 DAT_00574280;
extern uint *DAT_00574284;
extern undefined4 *DAT_00574288;
extern int *DAT_0057428c;
extern int *DAT_00574290;
extern int *DAT_00574294;
extern int *DAT_00574298;

// USA 005740D8 <- EU 005740B0 (Ghidra, non-matching)
// GLOBAL DAT_00574268 int *
// GLOBAL DAT_0057426c uint *
// GLOBAL DAT_00574270 undefined4
// GLOBAL DAT_00574274 undefined4 *
// GLOBAL DAT_00574278 uint *
// GLOBAL DAT_0057427c undefined4 *
// GLOBAL DAT_00574280 undefined4
// GLOBAL DAT_00574284 uint *
// GLOBAL DAT_00574288 undefined4 *
// GLOBAL DAT_0057428c int *
// GLOBAL DAT_00574290 int *
// GLOBAL DAT_00574294 int *
// GLOBAL DAT_00574298 int *

undefined4 func_005740D8(void)

{
  undefined4 uVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int *unaff_r4;
  
  uVar1 = DAT_00574270;
  iVar4 = *DAT_00574268;
  if (iVar4 != 0) {
    unaff_r4 = *(int **)(iVar4 + 0x44);
  }
  if (iVar4 != 0 && unaff_r4 != (int *)0x0) {
    if (((*DAT_0057426c & 1) == 0) && (iVar4 = func_00100174((int *)DAT_0057426c), iVar4 != 0)) {
      *DAT_00574274 = uVar1;
    }
    iVar4 = (**(code **)(*unaff_r4 + 8))(unaff_r4,DAT_00574274);
    if (iVar4 == 0) {
      if (((*DAT_00574278 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_00574278), iVar4 != 0)) {
        *DAT_0057427c = DAT_00574280;
      }
      iVar4 = (**(code **)(*unaff_r4 + 8))(unaff_r4,DAT_0057427c);
      if (iVar4 == 0) {
        if (((*DAT_00574284 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_00574284), iVar4 != 0))
        {
          *DAT_00574288 = uVar1;
        }
        iVar4 = (**(code **)(*unaff_r4 + 8))(unaff_r4,DAT_00574288);
        if (iVar4 == 0) {
          return 0;
        }
      }
    }
  }
  iVar4 = func_00520B48(*DAT_0057428c);
  piVar2 = DAT_00574290;
  if (((((iVar4 == 0) && (bVar3 = func_0058D9E0(*DAT_00574290), !bVar3)) &&
       (*(uint *)(*DAT_00574294 + 0x9c0) < 2)) &&
      ((iVar4 = func_0058D8F0(*piVar2), iVar4 == 0 && (iVar4 = func_004B083C(), iVar4 == 0)))) &&
     (((iVar4 = *DAT_00574298, iVar4 == 0 || (*(char *)(iVar4 + 0x18) != '\0')) ||
      ((*(int *)(iVar4 + 0x1c) != 0x28 && (*(int *)(iVar4 + 0x1c) != 0x2b)))))) {
    return 1;
  }
  return 0;
}

