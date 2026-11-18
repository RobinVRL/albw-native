// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern float func_00111610(int param_1,uint *param_2);
extern float func_00111764(int param_1,uint *param_2);
extern int func_00150C80(int *param_1,undefined4 param_2,int param_3);
extern int func_0025B824(int param_1,float fparam_0);
extern int func_0025B860(int param_1,int param_2,float fparam_0,float fparam_1);
extern int func_00539200(int param_1);

// USA 0029A460 <- EU 0029A43C (Ghidra, non-matching)

undefined4 func_0029A460(int param_1,int *param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float in_s1;
  
  if (4 < param_3) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + param_3 * 4 + 0x570);
  if (iVar2 != -1) {
    iVar3 = param_1 + param_3 * 0x60 + 0x584;
    func_00150C80(param_2,iVar2,iVar3);
    bVar1 = func_00539200(iVar3);
    if (bVar1) {
      iVar2 = param_1 + param_3 * 0x14 + 0x50c;
      fVar4 = func_00111764(iVar2,(uint *)0x0);
      func_0025B860(iVar3,0,fVar4,in_s1);
      fVar4 = func_00111610(iVar2,(uint *)0x0);
      return func_0025B824(iVar3,fVar4);
    }
  }
  return 0;
}

