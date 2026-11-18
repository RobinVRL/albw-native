#include "ghidra_types.h"

extern int func_00293DA0(int param_1,int param_2);
extern int func_0029450C(int param_1);
extern int func_00296BD0(int param_1,int param_2);
extern int func_00297648(int *param_1);
extern int func_002DEE24(int param_1,int param_2);
extern int func_00537F50(int param_1,byte *param_2);
extern int func_0053918C(undefined4 param_1,char *param_2);
extern int *DAT_004ead90;

// USA 004EAD1C <- EU 004EACF4 (Ghidra, non-matching)
// GLOBAL DAT_004ead90 int *

void func_004EAD1C(int param_1,byte *param_2)

{
  int iVar1;
  
  iVar1 = func_00537F50(*(int *)(param_1 + 0x50),param_2);
  if (iVar1 == 0) {
    func_00296BD0(*(int *)(param_1 + 0x4c),0x3c);
    func_0029450C(*(int *)(param_1 + 0x4c));
  }
  else if ((*(char *)(*DAT_004ead90 + 0x25) != '\x03') &&
          (iVar1 = func_0053918C(*(undefined4 *)(param_1 + 0x50),(char *)param_2), iVar1 != 0)) {
    func_00293DA0(*(int *)(param_1 + 0x4c),0x3c);
  }
  func_002DEE24(*(int *)(param_1 + 0x3c),0x1e);
  *(undefined1 *)(*(int *)(param_1 + 0x40) + 0x84) = 0;
  func_00297648(*(int **)(param_1 + 0x38));
  *(undefined1 *)(param_1 + 0x81) = 0;
  return;
}

