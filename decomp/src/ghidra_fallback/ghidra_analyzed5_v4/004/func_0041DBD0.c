#include "ghidra_types.h"

extern int func_00111EF0(int *param_1,int *param_2);
extern int func_003E67D8(int param_1,uint param_2);
extern int func_003E69B8(int *param_1,undefined4 *param_2,undefined4 *param_3);
extern int func_003E6AD4(int param_1,int param_2);
extern int func_003E6B78(int param_1,undefined4 param_2);
extern int func_0041D87C(int *param_1);
extern int func_0041D908(int param_1,undefined4 param_2,int param_3);
extern int func_0041D9A0(int param_1,int param_2,int param_3);

// USA 0041DBD0 <- EU 0041DBB0 (Ghidra, non-matching)

bool func_0041DBD0(int *param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if (param_2 == 0) {
    func_0041D908((int)param_1,0,param_3);
    func_003E67D8(*param_1,3);
    bVar1 = func_0041D87C(param_1);
    return bVar1;
  }
  iVar2 = func_0041D9A0((int)param_1,param_2,param_3);
  while (param_2 < param_1[1]) {
    piVar4 = (int *)param_1[3];
    if (iVar2 != 0) {
      *(undefined1 *)(piVar4 + 5) = 0;
    }
    if ((char)piVar4[5] != '\0') {
      piVar3 = piVar4 + 3;
      while (piVar3 != (int *)piVar4[3]) {
        piVar3 = (int *)piVar3[1];
        if ((code *)piVar3[4] != (code *)0x0) {
          (*(code *)piVar3[4])(piVar3[2],piVar3[3],piVar3[5]);
        }
      }
    }
    func_003E69B8(piVar4 + 2,(undefined4 *)piVar4[3],piVar4 + 3);
    func_00111EF0(param_1 + 1,piVar4);
  }
  func_003E6AD4(*param_1,param_2);
  func_003E6B78(*param_1,param_1[1]);
  bVar1 = func_0041D87C(param_1);
  return bVar1;
}

