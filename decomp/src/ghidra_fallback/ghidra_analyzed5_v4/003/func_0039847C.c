#include "ghidra_types.h"

extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_001D9C50(int param_1);
extern int func_001D9D40(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4);
extern int func_004356B4(int *param_1);
extern int func_004CEAF0(int param_1);
extern int func_004ED46C(int param_1,int param_2);
extern undefined4 DAT_00398590;
extern int *DAT_00398594;

// USA 0039847C <- EU 00398458 (Ghidra, non-matching)
// GLOBAL DAT_00398590 undefined4
// GLOBAL DAT_00398594 int *

void func_0039847C(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  iVar3 = *(int *)(param_1 + 0x34);
  *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
  func_001151EC((undefined4 *)(iVar3 + 0x80),
                (undefined4 *)
                (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x8d4) + 0x24) + 0x14) +
                *(int *)(*(int *)(param_1 + 4) + 0x8f4) * 0x30));
  func_004CEAF0(*(int *)(param_1 + 0x34));
  iVar3 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x1050) + 0x24) + 0x14) +
          *(int *)(param_1 + 0xfc) * 0x30;
  local_18 = *(undefined4 *)(iVar3 + 0xc);
  local_10 = *(undefined4 *)(iVar3 + 0x2c);
  local_14 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x3d4);
  *(undefined4 *)(param_1 + 0x3c) = local_18;
  uVar2 = DAT_00398590;
  *(undefined4 *)(param_1 + 0x40) = local_14;
  *(undefined4 *)(param_1 + 0x44) = local_10;
  *(undefined4 *)(param_1 + 0x90) = uVar2;
  func_004356B4((int *)(param_1 + 0x38));
  bVar4 = *(char *)(param_1 + 0xf9) != '\0';
  cVar1 = '\0';
  if (bVar4) {
    cVar1 = *(char *)(param_1 + 0xf8);
  }
  if (bVar4 && cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0xf9) = 0;
    local_14 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x3d4);
    iVar3 = *(int *)(param_1 + 4);
    if (*(char *)(param_1 + 0xc) < '\x02') {
      iVar3 = func_001D9D40(&local_18,*(undefined4 *)(iVar3 + 1000),0,*(undefined4 *)(iVar3 + 0x2cc)
                           );
    }
    else {
      iVar3 = func_001D9D40(&local_18,*(undefined4 *)(iVar3 + 1000),1,*(undefined4 *)(iVar3 + 0x2cc)
                           );
    }
    if (iVar3 != 0) {
      func_001D9C50(iVar3);
    }
    func_004ED46C(*DAT_00398594,7);
  }
  return;
}

