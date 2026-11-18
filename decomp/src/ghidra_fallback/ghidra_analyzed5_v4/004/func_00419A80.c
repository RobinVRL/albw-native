#include "ghidra_types.h"

extern int func_00111EF0(int *param_1,int *param_2);
extern int func_00112364(int *param_1,int param_2,int *param_3);
extern int func_00414570(int param_1);
extern int func_0041998C(int param_1,int param_2);
extern int DAT_00419ad0;

// USA 00419A80 <- EU 00419A60 (Ghidra, non-matching)
// GLOBAL DAT_00419ad0 int

void func_00419A80(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  func_00111EF0((int *)(param_1 + 4),(int *)(param_2 + 0x58));
  func_00112364((int *)(param_1 + 0x10),param_1 + 0x14,(int *)(param_2 + 0x58));
  func_0041998C(param_1,param_2);
  iVar1 = DAT_00419ad0;
  for (piVar2 = (int *)(param_2 + 0x58); (piVar2 != (int *)(param_1 + 8) && (1 < piVar2[-6]));
      piVar2 = (int *)*piVar2) {
    if (piVar2[-6] != iVar1) {
      func_00414570((int)(piVar2 + -0x16));
    }
  }
  return;
}

