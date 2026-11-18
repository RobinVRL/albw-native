#include "ghidra_types.h"

extern int func_0012C790(int param_1);
extern int func_001B6B38(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_00446824(int param_1);
extern int func_00464DC4(int param_1);
extern int func_00476C08(int param_1);
extern int func_004B9528(int param_1,int param_2);
extern int func_0066C424(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0043c0c8;
extern int *DAT_0043c0cc;

// USA 0043BFD4 <- EU 0043BFB4 (Ghidra, non-matching)
// GLOBAL DAT_0043c0c8 int *
// GLOBAL DAT_0043c0cc int *

undefined4 func_0043BFD4(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 extraout_r1;
  bool bVar6;
  bool bVar7;
  
  iVar3 = *(int *)(param_1 + 0x148);
  if (iVar3 == 0) goto LAB_0043c084;
  if (iVar3 == *(int *)(param_1 + 0x154)) {
    func_00446824(*(int *)(param_1 + 0x154));
    piVar2 = DAT_0043c0c8;
    *(undefined4 *)(param_1 + 0x154) = 0;
    iVar3 = (int)*(char *)(*piVar2 + 0x18);
    uVar4 = iVar3 - 2;
    bVar7 = 2 < uVar4;
    bVar6 = uVar4 == 3;
    if (3 < uVar4) {
      bVar7 = iVar3 != 0x16;
      bVar6 = iVar3 == 0x17;
    }
    if (bVar7 && !bVar6) {
      puVar5 = *(undefined4 **)(*DAT_0043c0cc + 0x1c);
      param_3 = *puVar5;
      param_4 = puVar5[1];
      *(undefined4 *)(param_1 + 0x168) = puVar5[2];
      *(undefined4 *)(param_1 + 0x160) = param_3;
      *(int *)(param_1 + 0x164) = param_4;
    }
LAB_0043c040:
    if (*(int *)(param_1 + 0x148) == 0) goto LAB_0043c084;
  }
  else if (iVar3 == *(int *)(param_1 + 0x150)) {
    func_00464DC4(*(int *)(param_1 + 0x150));
    *(undefined4 *)(param_1 + 0x150) = 0;
    goto LAB_0043c040;
  }
  iVar3 = *(int *)(param_1 + 0x148);
  cVar1 = *(char *)(iVar3 + 0xd);
  bVar6 = cVar1 == '\0';
  if (bVar6) {
    cVar1 = *(char *)(iVar3 + 0xe);
  }
  if (!bVar6 || cVar1 != '\0') {
    func_0012C790(iVar3);
    func_001B6B38(*(int **)(param_1 + 0x148),extraout_r1,param_3,param_4);
  }
  func_004B9528(param_1,*(int *)(param_1 + 0x148));
  *(undefined4 *)(param_1 + 0x148) = 0;
LAB_0043c084:
  if (*(int *)(param_1 + 0x15c) != 0) {
    func_004B9528(param_1,*(int *)(param_1 + 0x15c));
    *(undefined4 *)(param_1 + 0x15c) = 0;
  }
  cVar1 = *(char *)(param_1 + 0x78);
  bVar6 = cVar1 == '\0';
  if (bVar6) {
    cVar1 = *(char *)(param_1 + 0x9c);
  }
  if (bVar6 && cVar1 == '\x01') {
    func_0066C424((undefined4 *)(param_1 + 0x98),0);
  }
  return func_00476C08(*(int *)(param_1 + 0x158));
}

