#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern int func_00111188(int param_1,int param_2,undefined4 *param_3,int param_4,undefined4 param_5);
extern int func_001112A8(int param_1);
extern int func_0011130C(int param_1,uint param_2,int param_3,undefined4 param_4,...);
extern int func_001113A0(int param_1,int param_2,int param_3,uint param_4,int param_5);
extern int *DAT_00110ee0;
extern undefined4 DAT_00110ee4;

// USA 00110DF0 <- EU 00110DF0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint
// PARAM param_6 Stack[0x4]:4 int
// GLOBAL DAT_00110ee0 int *
// GLOBAL DAT_00110ee4 undefined4

void func_00110DF0(int *param_1,int param_2,int *param_3,int param_4,uint param_5,int param_6)

{
  int *piVar1;
  int iVar2;
  int unaff_r6;
  
  if (*param_3 == 0) {
    *param_1 = 0;
    param_1[1] = unaff_r6;
  }
  else {
    iVar2 = func_001113A0(*(int *)(*(int *)(param_2 + 0xc) + 0xc),*param_3,param_4,param_5,param_6);
    param_3[1] = iVar2;
    if ((iVar2 != 0) || (iVar2 = 0, *(char *)(*param_3 + 0xc) != '\0')) {
      iVar2 = func_001112A8(*(int *)(param_2 + 8));
      piVar1 = DAT_00110ee0;
      if (iVar2 == 0) {
        func_0011130C(*(int *)(param_2 + 8),1,0,DAT_00110ee4);
        iVar2 = 0;
      }
      else {
        func_00111188(iVar2,param_2,param_3,*(int *)(param_2 + 8),*DAT_00110ee0);
        func_0010F1DC((int *)(param_2 + 0x44),(int *)(*(int *)(param_2 + 0x50) + iVar2));
        *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x4c) + 1;
        unaff_r6 = *piVar1;
        *piVar1 = unaff_r6 + 1;
        if (unaff_r6 + 1 == 0) {
          *piVar1 = 1;
        }
      }
    }
    *param_1 = iVar2;
    param_1[1] = unaff_r6;
  }
  return;
}

