#include "ghidra_types.h"

extern int func_00109DE4(int param_1);
extern int func_0010F1DC(int *param_1,int *param_2);
extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_00258CA8(int param_1,int param_2);
extern int func_00537E04(int param_1,int param_2);

// USA 00295D34 <- EU 00295D5C (Ghidra, non-matching)

void func_00295D34(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  float in_s0;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    iVar6 = *(int *)(param_1 + 0x20);
    iVar2 = *(int *)(param_1 + 0x18) - iVar6;
    iVar3 = *(int *)(iVar2 + iVar6 + 4);
    iVar5 = (param_1 + 0x14) - iVar6;
    if (iVar2 != iVar5) {
      do {
        if (((param_2 == -1) || (iVar1 = func_00537E04(iVar2,param_2), iVar1 != 0)) &&
           ((*(char *)(iVar2 + 0x6a) != '\0' || (param_4 == 0)))) {
          func_00258CA8(iVar2,param_3);
          func_0010F1F8((int *)(*(int *)(param_1 + 0x20) + iVar2),in_s0);
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
          piVar4 = (int *)(param_1 + 0x44);
          if (param_3 == 0) {
            func_00109DE4(iVar2);
            piVar4 = (int *)(param_1 + 0x54);
          }
          func_0010F1DC(piVar4,(int *)(piVar4[3] + iVar2));
          piVar4[2] = piVar4[2] + 1;
        }
        iVar2 = iVar3 - iVar6;
        iVar3 = *(int *)(iVar3 + 4);
      } while (iVar2 != iVar5);
    }
  }
  return;
}

