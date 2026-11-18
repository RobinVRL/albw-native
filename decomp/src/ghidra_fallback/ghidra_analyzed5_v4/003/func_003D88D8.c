#include "ghidra_types.h"

extern int func_00100858(uint *param_1,uint *param_2,uint param_3);
extern undefined8 func_001163A0(uint *param_1,uint *param_2,uint param_3);
extern int func_003D69CC(int param_1,int *param_2,uint param_3,int param_4);
extern int func_003D6A64(int param_1);
extern int func_003D9234(int *param_1,int *param_2);
extern int func_003DA498(int *param_1,int param_2);

// USA 003D88D8 <- EU 003D88B8 (Ghidra, non-matching)

void func_003D88D8(undefined4 *param_1,int *param_2,uint *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int * *)(albw_frame + 0x0))
  piVar3 = (int *)param_2[2];
  local_20 = param_4;
  if (piVar3 != param_2 + 1) {
    do {
      iVar1 = func_00100858((uint *)piVar3[9],param_3,param_2[4]);
      if (iVar1 != 0) {
        piVar3 = (int *)piVar3[1];
      }
    } while (iVar1 != 0 && piVar3 != param_2 + 1);
  }
  piVar2 = param_2 + 1;
  if (piVar3 != piVar2) {
LAB_003d899c:
    *param_1 = piVar3;
    return;
  }
  piVar3 = (int *)func_003DA498((int *)param_2[3],3);
  if (piVar3 == (int *)0x0) {
    local_20 = (int *)0x0;
  }
  else {
    if (piVar3 + 2 != (int *)0x0) {
      func_003D6A64((int)(piVar3 + 2));
    }
    *piVar3 = *piVar2;
    piVar3[1] = (int)piVar2;
    *piVar2 = (int)piVar3;
    *(int **)(*piVar3 + 4) = piVar3;
    local_20 = piVar3;
  }
  piVar3 = local_20;
  if ((local_20 != (int *)0x0) &&
     (iVar1 = func_003D69CC((int)(local_20 + 2),(int *)*param_2,param_2[4],0), iVar1 != 0)) {
    func_001163A0((uint *)piVar3[9],param_3,param_2[4]);
    local_20 = piVar3;
    iVar1 = func_003D9234(param_2,(int *)&local_20);
    if (iVar1 != 0) goto LAB_003d899c;
  }
  *param_1 = 0;
  return;
}

