#include "ghidra_types.h"

extern int func_003D3800(int *param_1,uint *param_2);
extern int func_003D3904(int *param_1,int *param_2);
extern int func_003D48F4(int *param_1,undefined2 *param_2);
extern int func_003D4D38(int *param_1,short *param_2);
extern int func_003D4DFC(undefined4 param_1,float *param_2,int param_3,short *param_4);
extern int DAT_0048beb8;
extern int DAT_0048bebc;

// USA 0048BDDC <- EU 0048BDB4 (Ghidra, non-matching)
// GLOBAL DAT_0048beb8 int
// GLOBAL DAT_0048bebc int

void func_0048BDDC(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  
  iVar2 = func_003D3800(*(int **)(param_1 + 0x15bc),(uint *)(param_1 + 0x15c0));
  puVar5 = (uint *)(param_1 + 0x1634);
  if (iVar2 == 0) {
    uVar3 = *puVar5 & 0xfffffffe;
  }
  else {
    uVar3 = *puVar5 | 1;
  }
  *puVar5 = uVar3;
  bVar1 = func_003D48F4(*(int **)(DAT_0048beb8 + param_1),(undefined2 *)(param_1 + 0x15d4));
  if (bVar1) {
    uVar3 = *puVar5 | 2;
  }
  else {
    uVar3 = *puVar5 & 0xfffffffd;
  }
  *puVar5 = uVar3;
  piVar4 = *(int **)(param_1 + 0x15dc);
  if (piVar4 != (int *)0x0) {
    bVar1 = func_003D4D38(piVar4,(short *)(param_1 + 0x15e0));
    if (bVar1) {
      *puVar5 = *puVar5 | 4;
      func_003D4DFC(*(undefined4 *)(param_1 + 0x15dc),(float *)(param_1 + 0x15e8),1,
                    (short *)(param_1 + 0x15e0));
      goto LAB_0048be7c;
    }
  }
  *puVar5 = *puVar5 & 0xfffffffb;
LAB_0048be7c:
  if ((*(int **)(DAT_0048bebc + param_1) == (int *)0x0) ||
     (bVar1 = func_003D3904(*(int **)(DAT_0048bebc + param_1),(int *)(param_1 + 0x15f8)), !bVar1)) {
    uVar3 = *puVar5 & 0xfffffff7;
  }
  else {
    uVar3 = *puVar5 | 8;
  }
  *puVar5 = uVar3;
  return;
}

