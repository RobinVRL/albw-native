#include "ghidra_types.h"

extern int func_0036C42C(int param_1);
extern int func_0036E490(byte *param_1,uint param_2,undefined4 param_3);
extern int func_00665670(undefined4 *param_1,undefined1 param_2);
extern int DAT_0032a080;

// USA 00329FB4 <- EU 00329F90 (Ghidra, non-matching)
// GLOBAL DAT_0032a080 int

undefined4 func_00329FB4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  
  if (*(char *)(*(int *)(param_1 + 0x510) + 4) == '\0') {
    if (*(short *)(DAT_0032a080 + param_1) < 1) {
      uVar1 = *(undefined4 *)(param_1 + 0xc50);
      *(undefined4 *)(param_1 + 0x4e4) = uVar1;
      *(undefined4 *)(param_1 + 0x4e8) = uVar1;
      *(undefined4 *)(param_1 + 0x4ec) = uVar1;
      *(undefined4 *)(param_1 + 0xc80) = 0;
      *(undefined1 *)(param_1 + 0xc98) = 0;
      return func_0036C42C(param_1 + 0xaa0);
    }
    if (*(int *)(param_1 + 0x59c) << 0x18 < 0) {
      return func_00665670((undefined4 *)(param_1 + 0xba8),0xe);
    }
    iVar2 = *(int *)(param_1 + 0x994);
    bVar3 = iVar2 == 0;
    if (bVar3) {
      iVar2 = *(int *)(param_1 + 0xa6c);
    }
    if (((bVar3 && iVar2 == 0) &&
        ((*(char *)(param_1 + 0x963) == '\0' || (*(char *)(param_1 + 0x964) != '\0')))) &&
       ((*(char *)(param_1 + 0xa3b) == '\0' || (*(char *)(param_1 + 0xa3c) != '\0')))) {
      func_0036E490((byte *)(param_1 + 0x8f8),0,*(undefined4 *)(param_1 + 0x8c4));
      func_0036E490((byte *)(param_1 + 0x9d0),0,*(undefined4 *)(param_1 + 0x99c));
      func_00665670((undefined4 *)(param_1 + 0xba8),6);
    }
  }
  return 0;
}

