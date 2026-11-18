#include "ghidra_types.h"

extern int func_00532C78(int param_1);
extern int func_0054D224(int *param_1);
extern int func_0054D240(short *param_1);
extern int func_0066D544(undefined4 *param_1,char param_2);
extern int *DAT_00459b9c;
extern int DAT_00459ba0;

// USA 00459AF0 <- EU 00459AC8 (Ghidra, non-matching)
// GLOBAL DAT_00459b9c int *
// GLOBAL DAT_00459ba0 int

undefined4 func_00459AF0(int param_1)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  
  bVar2 = func_00532C78(param_1 + 0xf8);
  piVar1 = DAT_00459b9c;
  if (!bVar2) {
    uVar3 = *(uint *)(param_1 + 0x214);
    piVar4 = (int *)(param_1 + 0x1e4);
    if (uVar3 < 3) {
      piVar4 = piVar4 + uVar3;
    }
    if (*(char *)(*piVar4 + 0xcc) == '\x03') {
      bVar2 = func_0054D224((int *)(*DAT_00459b9c + 0x9cc + uVar3 * DAT_00459ba0 * 4));
      if ((!bVar2) ||
         (bVar2 = func_0054D240((short *)(*piVar1 + *(int *)(param_1 + 0x214) * DAT_00459ba0 * 4 +
                                         0x172c)), !bVar2)) {
        return func_0066D544((undefined4 *)(param_1 + 0x17c),'\x06');
      }
      if (*(char *)(*piVar1 + 0x4be0) == '\0') {
        return func_0066D544((undefined4 *)(param_1 + 0x17c),'\x05');
      }
      func_0066D544((undefined4 *)(param_1 + 0x17c),'\x03');
    }
  }
  return 0;
}

