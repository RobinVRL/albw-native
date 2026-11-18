#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00339CC4(undefined4 *param_1,uint *param_2,int param_3,undefined4 param_4, undefined1 param_5);
extern int func_004BD280();
extern float func_004BDB2C(undefined4 param_1,int param_2,float fparam_0);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern undefined4 DAT_0060b4b0;
extern int *DAT_0060b4b4;
extern int DAT_0060b4b8;
extern undefined4 *DAT_0060b4bc;
extern float DAT_0060b4c0;
extern undefined4 DAT_0060b4c4;

// USA 0060B410 <- EU 0060B3E8 (Ghidra, non-matching)
// GLOBAL DAT_0060b4b0 undefined4
// GLOBAL DAT_0060b4b4 int *
// GLOBAL DAT_0060b4b8 int
// GLOBAL DAT_0060b4bc undefined4 *
// GLOBAL DAT_0060b4c0 float
// GLOBAL DAT_0060b4c4 undefined4

int * func_0060B410(uint *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 extraout_r1;
  undefined4 uVar5;
  int *piVar6;
  
  puVar3 = (undefined4 *)func_0010BAB4(DAT_0060b4b0);
  piVar4 = (int *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    piVar6 = DAT_0060b4b4;
    piVar4 = func_00339CC4(puVar3,param_1,4,DAT_0060b4b4,0xff);
    iVar2 = DAT_0060b4b8;
    *piVar4 = DAT_0060b4b8;
    sVar1 = *(short *)((int)piVar4 + 0x32);
    piVar4[200] = iVar2 + 0xb8;
    func_004C03B8((int)piVar4,DAT_0060b4bc);
    if (sVar1 == 1) {
      *(undefined1 *)((int)piVar4 + 0x853) = 3;
      *(undefined1 *)((int)piVar4 + 0x855) = 3;
      uVar5 = 0;
      piVar4[0x22b] = piVar4[0x22b] | 0x14;
      func_004BD280((int)piVar4,3,0);
      func_00169A80((int *)piVar4[0x1eb],extraout_r1,uVar5,piVar6);
      func_00168E9C((int *)piVar4[0x1eb],piVar4[0x1e8],(int *)0x0);
      func_004BDB2C(piVar4,piVar4[0x1e2],DAT_0060b4c0);
      *(undefined4 *)(piVar4[0x1e8] + 0x134) = DAT_0060b4c4;
    }
  }
  return piVar4;
}

