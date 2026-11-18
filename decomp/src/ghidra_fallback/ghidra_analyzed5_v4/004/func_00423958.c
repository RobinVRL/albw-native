#include "ghidra_types.h"

extern int func_0051B220(int param_1);
extern int func_00522828(int param_1,int param_2);
extern int func_0058DC40(int param_1);
extern int func_0066BFFC(undefined4 *param_1,char param_2);
extern int *DAT_004239c4;
extern int *DAT_004239c8;
extern int DAT_004239cc;

// USA 00423958 <- EU 00423938 (Ghidra, non-matching)
// GLOBAL DAT_004239c4 int *
// GLOBAL DAT_004239c8 int *
// GLOBAL DAT_004239cc int

undefined4 func_00423958(int param_1)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  
  piVar1 = DAT_004239c4;
  bVar3 = func_00522828(*DAT_004239c4,0);
  piVar2 = DAT_004239c8;
  if (bVar3) {
    iVar4 = func_0058DC40(*DAT_004239c8);
    if (iVar4 == 0) {
      if (DAT_004239cc <= *(int *)(*piVar1 + 0x10)) {
        iVar4 = *(int *)(*piVar2 + 0xe8);
        if (iVar4 != 0) {
          *(undefined2 *)(iVar4 + 0x122) = 0x78;
        }
        return func_0066BFFC((undefined4 *)(param_1 + 0x38),'\x02');
      }
    }
    else {
      func_0051B220(*piVar2);
      func_0066BFFC((undefined4 *)(param_1 + 0x38),'\x05');
    }
  }
  return 0;
}

