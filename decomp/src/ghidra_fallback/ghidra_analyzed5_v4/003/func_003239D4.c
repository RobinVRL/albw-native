#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_002319B8(int param_1);
extern undefined4 *DAT_00323a3c;

// USA 003239D4 <- EU 003239B0 (Ghidra, non-matching)
// GLOBAL DAT_00323a3c undefined4 *

undefined4 func_003239D4(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  if (*param_2 == 2) {
    iVar2 = (*(code *)**(undefined4 **)param_1[0x7b])
                      ((undefined4 *)param_1[0x7b],(int)(char)param_1[0x7c],
                       *(undefined1 *)((int)param_1 + 0x1f1),(int)*(char *)((int)param_1 + 0x1f2));
    puVar1 = DAT_00323a3c;
    if (iVar2 == 0) {
      iVar3 = 1;
    }
    else {
      iVar3 = func_0010983C(*DAT_00323a3c,iVar2);
    }
    (**(code **)(*param_1 + 0x74))(param_1,iVar2);
    func_002319B8(param_1[0x7b]);
    if (iVar3 != 1) {
      return func_0010983C(*puVar1,iVar3);
    }
  }
  return 0;
}

