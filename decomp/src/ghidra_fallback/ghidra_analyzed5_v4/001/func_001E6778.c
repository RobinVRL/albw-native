#include "ghidra_types.h"

extern int func_00581B9C(int param_1);
extern int func_00582250(int param_1);
extern int DAT_001e6864;
extern int *DAT_001e6868;

// USA 001E6778 <- EU 001E6778 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:1 undefined1
// GLOBAL DAT_001e6864 int
// GLOBAL DAT_001e6868 int *

void func_001E6778(int *param_1,int param_2,uint param_3,undefined1 param_4,undefined1 param_5,
                  float fparam_0)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  
  if (param_2 != 0) {
    iVar4 = *(int *)(param_2 + 1000);
    *(undefined1 *)((int)param_1 + 0x23) = 1;
    *(undefined1 *)(param_1 + 9) = param_4;
    *(undefined1 *)((int)param_1 + 0x25) = 0;
    *(undefined1 *)((int)param_1 + 0x26) = param_5;
    param_1[7] = (int)ALBW_AS_U32(fparam_0);
    param_1[4] = iVar4;
    iVar4 = DAT_001e6864;
    param_1[5] = 0x40000000;
    param_1[6] = iVar4;
    param_1[1] = *(int *)(param_2 + 0x3d0);
    param_1[2] = *(int *)(param_2 + 0x3d4);
    param_1[3] = *(int *)(param_2 + 0x3d8);
    iVar4 = *DAT_001e6868;
    if (iVar4 != 0) {
      func_00582250(iVar4);
      iVar2 = func_00581B9C(iVar4);
      if ((iVar2 == 1) && (puVar3 = (uint *)func_00582250(iVar4), param_3 < *puVar3)) {
        iVar4 = *(int *)(puVar3[2] + param_3 * 4);
      }
      else {
        iVar4 = 0;
      }
      *param_1 = iVar4;
      *(undefined1 *)(param_1 + 8) = 0;
      if (*(char *)((int)param_1 + 0x23) != '\0') {
        cVar1 = '\0';
        if ((char)param_1[9] != '\0') {
          cVar1 = (char)*(undefined4 *)(*param_1 + 0x20) + -1;
        }
        *(char *)(param_1 + 8) = cVar1;
      }
      *(char *)((int)param_1 + 0x21) = (char)param_1[8];
    }
    return;
  }
  return;
}

