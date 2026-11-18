#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_001E3EB0(int param_1,float fparam_0,float fparam_1,float fparam_2);
extern int func_001E3FD8(int param_1);
extern int func_001E4018(int param_1,uint param_2);
extern int func_001E4414(undefined4 *param_1,uint *param_2);
extern int func_00588BF0(int param_1,int param_2);
extern undefined4 DAT_006084b4;
extern int DAT_006084b8;
extern float DAT_006084bc;
extern float DAT_006084c0;

// USA 00608408 <- EU 006083E0 (Ghidra, non-matching)
// GLOBAL DAT_006084b4 undefined4
// GLOBAL DAT_006084b8 int
// GLOBAL DAT_006084bc float
// GLOBAL DAT_006084c0 float

int * func_00608408(uint *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  puVar2 = (undefined4 *)func_0010BAB4(DAT_006084b4);
  piVar3 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = func_001E4414(puVar2,param_1);
    iVar4 = DAT_006084b8 + 0x5c;
    *piVar3 = DAT_006084b8;
    piVar3[200] = iVar4;
    if ((*(short *)((int)piVar3 + 0x36) == 0) || (bVar1 = func_00588BF0((int)piVar3,0), !bVar1)) {
      iVar4 = func_0014E428((int)piVar3,0,0,0,1,0,0);
      piVar3[0x11f] = iVar4;
      func_001E3FD8((int)piVar3);
      func_001E4018((int)piVar3,0);
      func_001E3EB0((int)piVar3,DAT_006084c0,DAT_006084bc,DAT_006084bc);
      *(undefined2 *)(*(int *)(piVar3[0x121] + 0x18) + 0x28) = 0xe4;
    }
    else {
      *(undefined1 *)((int)piVar3 + 0x2d7) = 1;
    }
  }
  return piVar3;
}

