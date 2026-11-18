#include "ghidra_types.h"

extern int func_00479214(int param_1,int param_2);
extern int func_00479404(int param_1);
extern int func_0055696C(int param_1,int param_2);
extern int func_0066BFFC(undefined4 *param_1,char param_2);
extern int func_0066E7A0(undefined4 *param_1,char param_2);
extern int *DAT_0047bee4;
extern int DAT_0047bee8;
extern int *DAT_0047beec;

// USA 0047BDD0 <- EU 0047BDA8 (Ghidra, non-matching)
// GLOBAL DAT_0047bee4 int *
// GLOBAL DAT_0047bee8 int
// GLOBAL DAT_0047beec int *

undefined4 func_0047BDD0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_0047bee4;
  if ((((*(char *)(*(int *)(param_1 + 500) + 0xf7) == '\0') && (*DAT_0047bee4 != 0)) &&
      (iVar2 = func_0055696C(*DAT_0047bee4,0x27), iVar2 != 0)) &&
     ((*(char *)(DAT_0047bee8 + param_1) < '\0' &&
      (*(char *)(*(int *)(param_1 + 500) + 0x3c) == '\f')))) {
    func_0066BFFC((undefined4 *)(*(int *)(param_1 + 500) + 0x38),'\r');
  }
  if (((*(char *)(*(int *)(param_1 + 0x1f8) + 0xf7) == '\0') && (*piVar1 != 0)) &&
     ((iVar2 = func_0055696C(*piVar1,0xc), iVar2 != 0 &&
      (*(char *)(*(int *)(param_1 + 0x1f8) + 0x3c) == '\f')))) {
    func_0066BFFC((undefined4 *)(*(int *)(param_1 + 0x1f8) + 0x38),'\r');
  }
  if (*(char *)(*DAT_0047beec + 0x22) == '\0') {
    func_00479214(param_1,1);
    func_00479404(param_1);
  }
  if ((int)*(char *)(*(int *)(param_1 + 500) + 0x3c) - 1U < 5) {
    func_0066E7A0((undefined4 *)(param_1 + 0xf0),'\a');
    func_0066E7A0((undefined4 *)(param_1 + 0xcc),'\x02');
  }
  else if ((int)*(char *)(*(int *)(param_1 + 0x1f8) + 0x3c) - 1U < 5) {
    func_0066E7A0((undefined4 *)(param_1 + 0xf0),'\b');
    return func_0066E7A0((undefined4 *)(param_1 + 0xcc),'\x02');
  }
  return 0;
}

