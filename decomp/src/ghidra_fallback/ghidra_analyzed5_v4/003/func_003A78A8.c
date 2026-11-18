#include "ghidra_types.h"

extern int func_002FD11C(int *param_1,int param_2);
extern int *DAT_003a78f8;
extern int DAT_003a78fc;
extern undefined4 DAT_003a7900;

// USA 003A78A8 <- EU 003A7884 (Ghidra, non-matching)
// GLOBAL DAT_003a78f8 int *
// GLOBAL DAT_003a78fc int
// GLOBAL DAT_003a7900 undefined4

undefined4 func_003A78A8(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  float fVar5;
  float fVar6;
  
  piVar2 = *(int **)(*(int *)(param_1 + 0x2c) + 0x70);
  if ((piVar2 != (int *)0x0) && (iVar3 = func_002FD11C(piVar2,0), uVar1 = DAT_003a7900, iVar3 != 0))
  {
    fVar5 = *(float *)(*(int *)(*DAT_003a78f8 + 200) + 0x118);
    fVar6 = *(float *)(*(int *)(*DAT_003a78f8 + 200) + 0x11c);
    if ((int)ALBW_AS_U32((fVar5 * fVar5 + fVar6 * fVar6)) <= DAT_003a78fc) {
      puVar4 = *(undefined4 **)(param_1 + 0x34);
      *puVar4 = DAT_003a7900;
      puVar4[2] = uVar1;
    }
    return 1;
  }
  return 0;
}

