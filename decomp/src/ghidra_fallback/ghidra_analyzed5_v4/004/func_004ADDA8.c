#include "ghidra_types.h"

extern int func_0058FA08();
extern int func_006880E4(int param_1,int param_2);
extern undefined4 *DAT_004adeac;
extern undefined4 DAT_004adeb0;

// USA 004ADDA8 <- EU 004ADD80 (Ghidra, non-matching)
// GLOBAL DAT_004adeac undefined4 *
// GLOBAL DAT_004adeb0 undefined4

void func_004ADDA8(int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(int * *)(albw_frame + 0xc))
  #define local_20 (*(code * *)(albw_frame + 0x10))
  #define local_1c (*(uint *)(albw_frame + 0x14))
  piVar4 = (int *)(param_1 + 0x4c);
  if (*(int *)(param_1 + 0x54) != 0) {
    local_20 = (code *)*DAT_004adeac;
    local_1c = DAT_004adeac[1];
    uStack_28 = DAT_004adeb0;
    iVar5 = *piVar4;
    local_24 = piVar4;
    if (iVar5 != 0) {
      if (*(int *)(iVar5 + 4) != 0) {
        func_006880E4(*(int *)(iVar5 + 4),(int)&uStack_28);
      }
      if ((local_24 != (int *)0x0) &&
         ((local_20 != (code *)0x0 || (((local_1c & 1) != 0 && (local_1c != 0)))))) {
        pcVar2 = local_20;
        if ((local_1c & 1) != 0) {
          pcVar2 = *(code **)(local_20 + *(int *)((int)local_24 + ((int)local_1c >> 1)));
        }
        (*pcVar2)();
      }
      if (*(int *)(iVar5 + 8) != 0) {
        func_006880E4(*(int *)(iVar5 + 8),(int)&uStack_28);
      }
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
    iVar5 = *(int *)(param_1 + 0x54);
    *piVar4 = 0;
    *(int *)(param_1 + 0x50) = iVar5;
    iVar6 = *(int *)(param_1 + 0x5c) + -1;
    if (0 < iVar6) {
      iVar1 = 0;
      iVar3 = *(int *)(param_1 + 0x5c) + -1;
      do {
        iVar3 = iVar3 + -1;
        *(int *)(iVar5 + iVar1 * 4) = iVar5 + (iVar1 + 0x15) * 4;
        iVar1 = iVar1 + 0x15;
      } while (iVar3 != 0);
    }
    *(undefined4 *)(iVar5 + iVar6 * 0x54) = 0;
    *(int *)(param_1 + 0x54) = iVar5;
    func_0058FA08(iVar5);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  return;
}

