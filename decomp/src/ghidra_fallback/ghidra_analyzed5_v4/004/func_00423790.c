#include "ghidra_types.h"

extern int func_00576874(uint param_1);
extern int func_00584B94(int param_1,int param_2);
extern int func_0058DE90(int param_1);
extern int func_0066BFFC(undefined4 *param_1,char param_2);
extern int *DAT_00423810;
extern int DAT_00423814;
extern int *DAT_00423818;

// USA 00423790 <- EU 00423770 (Ghidra, non-matching)
// GLOBAL DAT_00423810 int *
// GLOBAL DAT_00423814 int
// GLOBAL DAT_00423818 int *

void func_00423790(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  piVar1 = DAT_00423810;
  if (((*(ushort *)(*(int *)(param_1 + 0x14) + 0x16) & 8) != 0) &&
     (*(int *)(*(int *)(param_1 + 0x14) + 8) == 0)) {
    uVar4 = *(uint *)(*DAT_00423810 + 0xe8);
    uVar2 = *(uint *)(param_1 + 0x5c);
    bVar5 = *(char *)(uVar2 + 0x30c) == '\0';
    if (bVar5) {
      uVar2 = (uint)*(byte *)(uVar2 + 0xd0);
    }
    if (bVar5 && uVar2 == 0) {
      bVar5 = func_00584B94(*DAT_00423818,DAT_00423814);
      iVar3 = 0;
      if (bVar5) {
        iVar3 = *piVar1;
      }
      if ((((bVar5 && iVar3 != 0) && (uVar4 != 0)) && (iVar3 = func_00576874(uVar4), iVar3 != 0)) &&
         (iVar3 = func_0058DE90(*piVar1), iVar3 != 0)) {
        func_0066BFFC((undefined4 *)(param_1 + 0x38),'\x01');
      }
    }
  }
  return;
}

