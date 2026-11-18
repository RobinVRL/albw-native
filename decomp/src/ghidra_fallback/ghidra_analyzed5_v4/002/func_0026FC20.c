#include "ghidra_types.h"

extern int func_00660BA4(undefined4 *param_1,undefined1 param_2);
extern int DAT_0026fce4;

// USA 0026FC20 <- EU 0026FC48 (Ghidra, non-matching)
// GLOBAL DAT_0026fce4 int

void func_0026FC20(int param_1,int param_2,int *param_3,undefined4 *param_4)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  iVar2 = (int)*(char *)(param_1 + 8);
  if (iVar2 != -1) {
    if (*(byte *)(DAT_0026fce4 + param_2 * 0xc) < *(byte *)(DAT_0026fce4 + iVar2 * 0xc)) {
      return;
    }
    if (iVar2 == param_2) {
      if (*(int *)(param_1 + 0x40) == *param_3) {
        return;
      }
      if (iVar2 == 7 || iVar2 == 8) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x72) = 1;
  *(char *)(param_1 + 8) = (char)param_2;
  *(int *)(param_1 + 0x40) = *param_3;
  if (!bVar1) {
    *(undefined4 *)(param_1 + 0x44) = *param_4;
    *(undefined4 *)(param_1 + 0x48) = param_4[1];
    *(undefined4 *)(param_1 + 0x4c) = param_4[2];
    func_00660BA4((undefined4 *)(param_1 + 0xc),1);
  }
  return;
}

