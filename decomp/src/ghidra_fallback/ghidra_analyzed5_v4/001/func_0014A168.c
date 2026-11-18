#include "ghidra_types.h"

extern int func_0049D4A8(int param_1,undefined4 *param_2);
extern int func_0049FA78(undefined1 *param_1);
extern int *DAT_0014a1fc;
extern int DAT_0014a200;

// USA 0014A168 <- EU 0014A168 (Ghidra, non-matching)
// GLOBAL DAT_0014a1fc int *
// GLOBAL DAT_0014a200 int

void func_0014A168(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_98 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_94 (*(undefined4 *)(albw_frame + 0xc))
  #define local_80 ((undefined1 *)(albw_frame + 0x20))
  #define local_3c (*(undefined4 *)(albw_frame + 0x64))
  func_0049FA78((undefined1 *)&local_98);
  iVar2 = DAT_0014a200;
  iVar3 = *DAT_0014a1fc;
  if (0 < iVar3) {
    iVar5 = 0;
    do {
      iVar3 = iVar3 + -1;
      iVar1 = iVar5 * 0x14;
      iVar5 = iVar5 + 1;
      local_80[iVar1] = 1;
    } while (iVar3 != 0);
  }
  uVar7 = 0;
  local_3c = param_2;
  do {
    puVar6 = (undefined4 *)(iVar2 + uVar7 * 8);
    iVar3 = uVar7 * 4;
    local_98 = *puVar6;
    uStack_94 = puVar6[1];
    piVar4 = func_0049D4A8(param_3,&local_98);
    uVar7 = uVar7 + 1;
    *(int **)(param_1 + 0x10 + iVar3) = piVar4;
  } while (uVar7 < 0xf);
  return;
}

