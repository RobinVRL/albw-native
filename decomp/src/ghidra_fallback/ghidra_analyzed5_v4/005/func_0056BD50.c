#include "ghidra_types.h"

extern int func_00569658(int param_1);
extern int func_0056BE60(int *param_1,uint param_2,uint param_3);
extern int func_0056BF30(int *param_1,uint param_2,uint param_3);
extern int func_0056C018(int *param_1,uint param_2,uint param_3);
extern int func_0056C1B4(int *param_1,uint param_2,uint param_3);
extern int func_0056C2B8(int *param_1,uint param_2,uint param_3);
extern int func_0056CB18(int param_1,uint param_2);
extern int func_0056CBF8(int param_1,uint param_2);

// USA 0056BD50 <- EU 0056BD28 (Ghidra, non-matching)

uint func_0056BD50(int *param_1,uint param_2,uint param_3)

{
  bool bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  if ((param_1[1] != 0) && (bVar1 = func_00569658(param_1[1]), bVar1 && param_2 != 0xffffffff)) {
    switch(param_2 >> 0x18) {
    case 1:
      iVar4 = func_0056CB18(param_1[1],param_2);
      if (iVar4 == 1) {
        uVar5 = func_0056C2B8(param_1,param_2,param_3);
        return uVar5;
      }
      if (iVar4 == 3) {
        uVar5 = func_0056BF30(param_1,param_2,param_3);
        return uVar5;
      }
      break;
    case 2:
      uVar5 = func_0056C018(param_1,param_2,param_3);
      return uVar5;
    case 3:
      bVar2 = func_0056BE60(param_1,param_2,param_3);
      return (uint)bVar2;
    case 5:
      bVar2 = func_0056C1B4(param_1,param_2,0xffffffff);
      return (uint)bVar2;
    case 6:
      uVar3 = func_0056CBF8(param_1[1],param_2);
      iVar4 = (**(code **)(*param_1 + 0x10))(param_1,uVar3);
      return (uint)(iVar4 != 0);
    }
  }
  return 0;
}

