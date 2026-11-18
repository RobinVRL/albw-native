#include "ghidra_types.h"

extern int func_00334024(int param_1);
extern int func_00521058(void);
extern int func_00556EAC(int param_1,int param_2);
extern int func_00588BE4(int param_1);
extern int *DAT_00333fe0;
extern float DAT_00333fe4;
extern int *DAT_00333fe8;

// USA 00333F40 <- EU 00333F1C (Ghidra, non-matching)
// GLOBAL DAT_00333fe0 int *
// GLOBAL DAT_00333fe4 float
// GLOBAL DAT_00333fe8 int *

undefined4 func_00333F40(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  
  if (((*(int *)(param_2 + 0x2c) != 0) && (*(char *)(param_1 + 0x424) == '\0')) &&
     ((cVar1 = *(char *)(*(int *)(param_2 + 0x2c) + 1), cVar1 == '\b' || cVar1 == '\x0f' ||
      ((((cVar1 == '\x11' &&
         (iVar4 = func_00521058(), piVar2 = DAT_00333fe0,
         *(float *)(iVar4 + 4) < *(float *)(param_1 + 0x3d4))) &&
        (DAT_00333fe4 < *(float *)(*(int *)(*DAT_00333fe0 + 0x20) + 4))) &&
       ((iVar4 = func_00588BE4(param_1), iVar4 == *DAT_00333fe8 ||
        ((bVar3 = func_00556EAC(*piVar2,0x3c), !bVar3 &&
         (bVar3 = func_00556EAC(*piVar2,0x3b), !bVar3)))))))))) {
    func_00334024(param_1);
  }
  return 0;
}

