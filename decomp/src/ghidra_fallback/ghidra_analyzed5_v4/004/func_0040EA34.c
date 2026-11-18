#include "ghidra_types.h"

extern int func_0010A98C(uint param_1);
extern int func_0010C180(uint *param_1);
extern int func_0040F2E4(void);
extern int func_006765F8(int param_1);

// USA 0040EA34 <- EU 0040EA14 (Ghidra, non-matching)

void func_0040EA34(uint *param_1)

{
  int iVar1;
  
  if (*(char *)((int)param_1 + 0x15) != '\0') {
    *(undefined1 *)(param_1 + 5) = 1;
    iVar1 = func_0040F2E4();
    func_006765F8(iVar1);
    software_interrupt(0x24);
    if ((int)*param_1 < 0) {
      func_0010A98C(*param_1);
    }
    *(undefined1 *)(param_1 + 1) = 1;
    func_0010C180(param_1);
    if (*param_1 != 0) {
      software_interrupt(0x23);
      *param_1 = 0;
    }
    param_1[4] = 0xffffffff;
    *(undefined1 *)((int)param_1 + 0x15) = 0;
  }
  return;
}

