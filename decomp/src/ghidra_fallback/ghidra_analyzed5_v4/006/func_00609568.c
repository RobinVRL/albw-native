#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_00330F70(int param_1,float fparam_0);
extern int func_003310B8(undefined4 *param_1,uint *param_2);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern undefined4 DAT_006095e0;
extern int DAT_006095e4;
extern float DAT_006095e8;

// USA 00609568 <- EU 00609540 (Ghidra, non-matching)
// GLOBAL DAT_006095e0 undefined4
// GLOBAL DAT_006095e4 int
// GLOBAL DAT_006095e8 float

int * func_00609568(uint *param_1)

{
  float fparam_0;
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_006095e0);
  piVar2 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = func_003310B8(puVar1,param_1);
    fparam_0 = DAT_006095e8;
    iVar3 = DAT_006095e4 + 0x54;
    *piVar2 = DAT_006095e4;
    piVar2[200] = iVar3;
    func_00330F70((int)piVar2,fparam_0);
    iVar3 = func_0014E428((int)piVar2,0,0,0,1,0,0);
    piVar2[0x103] = iVar3;
    *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
    func_004D8AEC((float *)(iVar3 + 0x80),piVar2[0xfa],(float *)(piVar2 + 0xf4));
    func_004CEAF0(piVar2[0x103]);
  }
  return piVar2;
}

