#include "ghidra_types.h"

extern int func_0012C790(int param_1);
extern int func_001B6B38(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_0029E18C(int param_1,uint param_2);
extern int func_004523F8(int param_1,int *param_2,int *param_3,int param_4);
extern int func_0058DEF4(void);

// USA 0051AEA4 <- EU 0051AE7C (Ghidra, non-matching)

undefined4 func_0051AEA4(int param_1,int *param_2,int *param_3,int param_4)

{
  int iVar1;
  undefined4 extraout_r1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_3;
  iVar3 = param_4;
  iVar1 = func_0058DEF4();
  if (iVar1 != 0) {
    if (*(short *)(param_1 + 0x74) != 3) {
      iVar1 = *(int *)(param_1 + 0x70);
      if ((iVar1 != 0) && ((*(char *)(iVar1 + 0xd) != '\0' || (*(char *)(iVar1 + 0xe) != '\0')))) {
        func_0012C790(iVar1);
        func_001B6B38(*(int **)(param_1 + 0x70),extraout_r1,piVar2,iVar3);
      }
      func_0029E18C(param_1 + 100,3);
    }
    if (*(int *)(param_1 + 0x70) != 0) {
      return func_004523F8(*(int *)(param_1 + 0x70),param_2,param_3,param_4);
    }
  }
  return 0;
}

