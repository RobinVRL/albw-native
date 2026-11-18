#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern int func_003CD8E0(int param_1);
extern int func_00490B60(int param_1);
extern int func_0049D060(int param_1,int param_2);
extern int func_0049D774(int param_1,int *param_2);
extern int func_0049DA04(int param_1,int *param_2,uint param_3);
extern int func_0049FCE8(int *param_1);

// USA 0049D8E4 <- EU 0049D8BC (Ghidra, non-matching)

undefined4 func_0049D8E4(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  func_00490B60(param_1 + 0x130);
  iVar1 = func_003CD8E0(param_1 + 4);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x48);
LAB_0049d94c:
  do {
    do {
      if (iVar1 == param_1 + 0x44) {
        iVar1 = *(int *)(param_1 + 0x6c);
        while (iVar1 != param_1 + 0x68) {
          piVar3 = *(int **)(iVar1 + 8);
          (**(code **)(*piVar3 + 0x44))(piVar3);
          (**(code **)(*piVar3 + 0x48))(piVar3);
          func_0049FCE8(piVar3 + 4);
          func_0049D774(param_1,piVar3);
          iVar1 = *(int *)(param_1 + 0x6c);
        }
        return func_0010EEE0(param_1 + 4);
      }
      piVar3 = *(int **)(iVar1 + 8);
      iVar1 = *(int *)(iVar1 + 4);
    } while ((piVar3[0xc] & 2U) == 0);
    iVar4 = param_1 + 4;
    func_0010C0B8(iVar4);
    if (((piVar3[0xc] & 2U) != 0 && (piVar3[0xc] & 4U) != 0) && ((char)piVar3[0x18] == '\x04')) {
      do {
        if (piVar3[5] == 0) {
          func_0010EEE0(iVar4);
          func_0049DA04(param_1,piVar3,6);
          goto LAB_0049d94c;
        }
        iVar2 = func_0049D060(param_1,*(int *)(piVar3[5] + 0x10));
      } while (iVar2 != 0);
    }
    func_0010EEE0(iVar4);
  } while( true );
}

