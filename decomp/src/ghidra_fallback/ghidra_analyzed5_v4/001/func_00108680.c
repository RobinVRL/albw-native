#include "ghidra_types.h"

extern int func_0010873C(uint param_1,undefined4 param_2);
extern int func_0010AAAC(int *param_1,undefined4 param_2,int param_3,undefined2 param_4,undefined2 param_5, undefined1 *param_6);
extern char *DAT_0010872c;
extern uint DAT_00108730;
extern int DAT_00108734;
extern undefined1 *DAT_00108738;

// USA 00108680 <- EU 00108680 (Ghidra, non-matching)
// GLOBAL DAT_0010872c char *
// GLOBAL DAT_00108730 uint
// GLOBAL DAT_00108734 int
// GLOBAL DAT_00108738 undefined1 *

void func_00108680(void)

{
  char *pcVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  
  pcVar1 = DAT_0010872c;
  if ((*DAT_0010872c != '\0') && (*DAT_0010872c = '\0', pcVar1[2] != '\0')) {
    uVar4 = DAT_00108730;
    if ((*(int **)(pcVar1 + 8) != (int *)0x0) && (pcVar1[1] == '\0')) {
      uVar4 = func_0010AAAC(*(int **)(pcVar1 + 8),*(undefined4 *)(pcVar1 + 0x18),
                            *(int *)(pcVar1 + 0x1c),*(undefined2 *)(pcVar1 + 4),
                            *(undefined2 *)(pcVar1 + 6),DAT_00108738);
    }
    if ((int)uVar4 < 0) {
      func_0010873C(uVar4,0x1086e0);
    }
    iVar2 = DAT_00108734;
    iVar5 = 0;
    do {
      pcVar3 = *(code **)(iVar2 + iVar5 * 4);
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)();
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 8);
    pcVar1[2] = '\0';
  }
  return;
}

