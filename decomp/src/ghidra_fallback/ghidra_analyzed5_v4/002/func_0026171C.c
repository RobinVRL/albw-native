#include "ghidra_types.h"

extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_004CEAF0(int param_1);
extern int func_004D7EB0(float *param_1,uint param_2,uint param_3,float *param_4);

// USA 0026171C <- EU 00261744 (Ghidra, non-matching)

undefined4 func_0026171C(int param_1,float *param_2,uint *param_3,float *param_4)

{
  int iVar1;
  undefined4 uVar2;
  float *pfVar3;
  float *extraout_r1;
  float *extraout_r1_00;
  float *extraout_r1_01;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    if (param_2 == (float *)0x0) {
      param_2 = *(float **)(param_1 + 0x30);
      if ((-1 < (int)param_2) &&
         (iVar4 = *(int *)(*(int *)(param_1 + 0x10) + 0x40c), param_2 = (float *)0x0, iVar4 != 0)) {
        *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
        param_3 = (uint *)(iVar1 + 0x80);
        func_001151EC(param_3,(undefined4 *)
                              (*(int *)(*(int *)(iVar4 + 0x24) + 0x14) +
                              *(int *)(param_1 + 0x30) * 0x30));
        param_2 = extraout_r1_00;
      }
    }
    else {
      pfVar3 = param_2;
      if (param_3 != (uint *)0x0) {
        pfVar3 = (float *)ALBW_PTR_BITS(*param_4);
      }
      if (param_3 != (uint *)0x0) {
        param_3 = (uint *)*param_3;
      }
      else {
        pfVar3 = (float *)0x0;
      }
      *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
      param_4 = param_2;
      func_004D7EB0((float *)(iVar1 + 0x80),(uint)pfVar3,(uint)param_3,param_2);
      param_2 = extraout_r1;
    }
  }
  if (*(char *)(param_1 + 0x25) != '\0') {
    if ((*(ushort *)(*(int *)(*(int *)(param_1 + 0x10) + 0x510) + 0x38) & 1) == 0) {
      if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
        func_00169A80(*(int **)(param_1 + 0x1c),param_2,param_3,(int *)param_4);
        param_3 = (uint *)0x0;
        func_00168E9C(*(int **)(param_1 + 0x1c),*(int *)(param_1 + 0x18),(int *)0x0);
        param_2 = extraout_r1_01;
      }
      if (*(int **)(param_1 + 0x20) != (int *)0x0) {
        func_00169A80(*(int **)(param_1 + 0x20),param_2,param_3,(int *)param_4);
        func_00168E9C(*(int **)(param_1 + 0x20),*(int *)(param_1 + 0x18),(int *)0x0);
      }
    }
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 != 0) {
      if ((*(char *)(param_1 + 0x24) != '\0') &&
         (iVar4 = *(int *)(*(int *)(param_1 + 0x10) + 0x40c), iVar4 != 0)) {
        *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
        *(undefined4 *)(iVar1 + 0x74) = *(undefined4 *)(iVar4 + 0x74);
        *(undefined4 *)(iVar1 + 0x78) = *(undefined4 *)(iVar4 + 0x78);
        *(undefined4 *)(iVar1 + 0x7c) = *(undefined4 *)(iVar4 + 0x7c);
      }
      uVar2 = func_004CEAF0(*(int *)(param_1 + 0x18));
      return uVar2;
    }
  }
  return 0;
}

