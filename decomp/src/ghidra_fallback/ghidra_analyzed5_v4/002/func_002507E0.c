// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0024FED0(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00556A90();
extern int *DAT_00250900;
extern int *DAT_00250904;
extern uint *DAT_00250908;
extern undefined4 *DAT_0025090c;
extern undefined4 DAT_00250910;

// USA 002507E0 <- EU 002507F4 [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_00250900 int *
// GLOBAL DAT_00250904 int *
// GLOBAL DAT_00250908 uint *
// GLOBAL DAT_0025090c undefined4 *
// GLOBAL DAT_00250910 undefined4

undefined4 func_002507E0(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  if ((*(char *)(param_1 + 0x49d) != '\0') ||
     ((*(char *)(param_1 + 0x49e) != '\0' && (*(char *)(param_1 + 0x491) == '\0')))) {
    cVar1 = *(char *)(param_1 + 0x48e);
    bVar5 = cVar1 == '\0';
    if (bVar5) {
      cVar1 = *(char *)(param_1 + 0x48f);
    }
    if (!bVar5 || cVar1 != '\0') {
      iVar4 = 0;
      if (*(char *)(param_1 + 0x495) == '\0') {
        puVar2 = (undefined4 *)func_0052FBA0(*DAT_00250904 + 0x3dbbc,*(uint *)(param_1 + 0x4a0));
        if (((*DAT_00250908 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_00250908), iVar3 != 0))
        {
          *DAT_0025090c = DAT_00250910;
        }
        if ((puVar2 == (undefined4 *)0x0) ||
           (iVar3 = (**(code **)*puVar2)(puVar2,DAT_0025090c), iVar3 == 0)) {
          puVar2 = (undefined4 *)0x0;
        }
        if (puVar2 != (undefined4 *)0x0) {
          iVar4 = puVar2[0x1e9];
        }
      }
      else {
        iVar4 = func_00556A90(*DAT_00250900);
      }
      if (iVar4 == *(int *)(param_1 + 0x2cc)) {
        return func_0024FED0(param_1);
      }
    }
  }
  return 0;
}

