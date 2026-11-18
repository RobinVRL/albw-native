#include "ghidra_types.h"

extern int func_001080CC(int param_1);
extern int func_0041497C(int param_1);
extern int func_004196AC(int *param_1,int param_2);
extern int DAT_0041b2c8;
extern int DAT_0041b2cc;

// USA 0041B208 <- EU 0041B1E8 (Ghidra, non-matching)
// GLOBAL DAT_0041b2c8 int
// GLOBAL DAT_0041b2cc int

int * func_0041B208(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = DAT_0041b2c8;
  param_1[0x11] = DAT_0041b2c8 + 0x30;
  *param_1 = iVar1;
  if ((char)param_1[0x14] != '\0') {
    *(undefined1 *)((int)param_1 + 0x52) = 1;
    uVar2 = 0;
    if (param_1[0x3f] != 0) {
      do {
        if (param_1[uVar2 * 0xd0 + 0x41] != 0) {
          func_004196AC((int *)param_1[0x19],param_1[uVar2 * 0xd0 + 0x41]);
          param_1[uVar2 * 0xd0 + 0x41] = 0;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < (uint)param_1[0x3f]);
    }
    uVar2 = 0;
    if (param_1[0x3f] != 0) {
      do {
        if (param_1[uVar2 * 0xd0 + 0x4d] != 0) {
          func_0041497C(param_1[uVar2 * 0xd0 + 0x4d]);
          param_1[uVar2 * 0xd0 + 0x4d] = 0;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < (uint)param_1[0x3f]);
    }
    param_1[0x19] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    *(undefined1 *)(param_1 + 0x14) = 0;
    func_001080CC((int)param_1);
  }
  *param_1 = DAT_0041b2cc;
  return param_1;
}

