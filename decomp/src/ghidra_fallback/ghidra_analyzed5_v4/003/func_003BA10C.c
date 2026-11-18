#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_002B7CAC(int param_1,uint param_2,int param_3);
extern int func_003ABB24(int *param_1,uint param_2,int param_3);
extern int func_003B1110(int param_1);
extern int func_003B147C(int *param_1,undefined4 param_2,undefined4 param_3);
extern int func_00543170(int param_1);
extern int func_0058A7D4(void);
extern int DAT_003ba1e4;

// USA 003BA10C <- EU 003BA0E8 (Ghidra, non-matching)
// GLOBAL DAT_003ba1e4 int

undefined4 func_003BA10C(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  
  if (*(char *)(param_1 + 0x62) == '\0') {
    return 0;
  }
  iVar5 = *(int *)(param_1 + 0x48);
  if ((*(char *)(iVar5 + 0xb35) == '\0') &&
     ((iVar1 = func_00543170(iVar5), iVar1 != 0 || (*(char *)(iVar5 + 0xb40) == '\0')))) {
    iVar5 = func_003B1110(param_1);
    if (iVar5 != 0) {
      return 0;
    }
    if (DAT_003ba1e4 <= *(int *)(*(int *)(param_1 + 0x48) + 0xa00)) {
      puVar2 = (uint *)func_0058A7D4();
      uVar3 = func_00111A64(puVar2);
      if (0x14 < (uint)((ulonglong)uVar3 * 0x65 >> 0x20)) {
        return 0;
      }
      return func_002B7CAC(*(int *)(param_1 + 0x48),2,1);
    }
    piVar4 = *(int **)(*(int *)(param_1 + 0x48) + 0x93c);
    iVar5 = func_003ABB24(piVar4,1,1);
  }
  else {
    piVar4 = *(int **)(*(int *)(param_1 + 0x48) + 0x93c);
    iVar5 = func_003ABB24(piVar4,1,1);
  }
  if (iVar5 == 0) {
    return 0;
  }
  return func_003B147C((int *)piVar4[1],1,1);
}

