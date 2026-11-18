#include "ghidra_types.h"

extern int func_001E26CC(int param_1,int param_2);
extern int func_0049BE50(int param_1);
extern int func_0049C008();
extern int DAT_0025d784;
extern int *DAT_0025d788;

// USA 0034B33C <- EU 0034B318 (Ghidra, non-matching)
// GLOBAL DAT_0025d784 int
// GLOBAL DAT_0025d788 int *

void func_0025D6E4(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0025d784 + 0x54;
  *param_1 = DAT_0025d784;
  param_1[6] = iVar1;
  if ((char)param_1[0x23] != '\0') {
    func_001E26CC(*DAT_0025d788,(int)param_1);
    if (param_1[0x1e] == 3 || param_1[0x1e] == 4) {
      func_0049BE50((int)param_1);
    }
    else {
      (**(code **)(*param_1 + 0x24))(param_1,1);
    }
    *(undefined1 *)(param_1 + 0x23) = 0;
  }
  func_0049C008(param_1);
  return;
}

