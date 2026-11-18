#include "ghidra_types.h"

extern int func_00103CBC(char *param_1);
extern int func_00104800(void);
extern int func_00104868(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4);
extern int func_003E45D0(int *param_1);
extern int DAT_003d28a4;
extern undefined4 *DAT_003d28a8;
extern char *DAT_003d28ac;
extern int DAT_003d28b0;
extern int *DAT_003d28b4;

// USA 003D2810 <- EU 003D27EC (Ghidra, non-matching)
// GLOBAL DAT_003d28a4 int
// GLOBAL DAT_003d28a8 undefined4 *
// GLOBAL DAT_003d28ac char *
// GLOBAL DAT_003d28b0 int
// GLOBAL DAT_003d28b4 int *

uint func_003D2810(void)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = DAT_003d28a4;
  if (*(int *)(DAT_003d28a4 + 8) == 0) {
    uVar4 = func_00104800();
    pcVar2 = DAT_003d28ac;
    puVar6 = DAT_003d28a8;
    if (-1 < (int)uVar4) {
      iVar5 = func_00103CBC(DAT_003d28ac);
      uVar4 = func_00104868(puVar6,(undefined4 *)pcVar2,iVar5,0);
      if (-1 < (int)uVar4) {
        puVar6 = puVar6 + -1;
        *(undefined4 **)(iVar1 + 8) = puVar6;
        iVar5 = DAT_003d28b0;
        *puVar6 = *(undefined4 *)(iVar1 + 0x14);
        iVar7 = 0;
        iVar8 = 8;
        do {
          *(undefined4 *)(iVar5 + iVar7 * 4) = 0;
          *(undefined4 *)(iVar5 + -0x20 + iVar7 * 4) = 0;
          *(undefined4 *)(iVar5 + -0x40 + iVar7 * 4) = 0;
          iVar8 = iVar8 + -1;
          iVar7 = iVar7 + 1;
        } while (iVar8 != 0);
        *(undefined1 *)(iVar1 + 1) = 0;
        *(undefined4 *)(iVar1 + 0x18) = 0;
        *(undefined4 *)(iVar1 + 0x1c) = 0;
        *(undefined2 *)(iVar1 + 4) = 0;
        *(undefined2 *)(iVar1 + 6) = 0;
        piVar3 = DAT_003d28b4;
        *(undefined1 *)(iVar1 + 2) = 0;
        func_003E45D0(piVar3);
        uVar4 = 0;
      }
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

