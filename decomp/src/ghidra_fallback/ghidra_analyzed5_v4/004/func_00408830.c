#include "ghidra_types.h"

extern int func_004079B4(int param_1);
extern int func_00407A24(int *param_1);
extern int func_00407A8C(int *param_1,int param_2);
extern undefined *DAT_004088ac;

// USA 00408830 <- EU 00408810 (Ghidra, non-matching)
// GLOBAL DAT_004088ac undefined *

void func_00408830(int param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int in_r3;
  int *piVar4;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define iStack_20 (*(int *)(albw_frame + 0x0))
  pcVar1 = DAT_004088ac;
  if (*(char *)(param_1 + 0x86) == '\0') {
    iVar5 = 0;
    iStack_20 = in_r3;
    do {
      iVar2 = param_1 + 4 + iVar5 * 0x10;
      piVar3 = (int *)(iVar2 + 0xc);
      piVar4 = (int *)*piVar3;
      if (piVar4 != piVar3) {
        do {
          piVar3 = piVar4 + -0x43;
          piVar4 = (int *)*piVar4;
          iStack_20 = 0;
          func_00407A8C(&iStack_20,(int)piVar3);
          (*pcVar1)(&iStack_20);
          func_00407A24(&iStack_20);
        } while (piVar4 != (int *)(iVar2 + 0xc));
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 4);
    func_004079B4(param_1 + 4);
    *(undefined1 *)(param_1 + 0x86) = 1;
    *(undefined1 *)(param_1 + 0x85) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
  }
  return;
}

