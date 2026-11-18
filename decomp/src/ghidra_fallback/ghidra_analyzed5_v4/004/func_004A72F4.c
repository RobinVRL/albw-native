#include "ghidra_types.h"

extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010DB90(void);
extern int func_0010F1DC(int *param_1,int *param_2);
extern int func_0010FBAC(uint *param_1,uint *param_2);
extern int func_004A6868(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5);
extern int func_004A6D68(undefined4 *param_1,undefined4 param_2,int *param_3,undefined4 param_4);
extern undefined4 DAT_004a7420;

// USA 004A72F4 <- EU 004A72CC (Ghidra, non-matching)
// GLOBAL DAT_004a7420 undefined4

undefined4 * func_004A72F4(int param_1,undefined4 *param_2,int *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint *puVar5;
  
  if (param_3 == (int *)0x0) {
    param_3 = (int *)func_0010DB90();
  }
  iVar4 = *(int *)(param_1 + 0x10);
  puVar5 = (uint *)*param_2;
  puVar3 = (undefined4 *)(*(int *)(param_1 + 8) - iVar4);
  do {
    if (puVar3 == (undefined4 *)((param_1 + 4) - *(int *)(param_1 + 0x10))) {
LAB_004a7348:
      puVar3 = (undefined4 *)func_0010CF28(0x2c,param_3,4);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = func_004A6D68(puVar3,*param_2,param_3,param_1);
      }
      func_0010F1DC((int *)(param_1 + 4),(int *)(*(int *)(param_1 + 0x10) + (int)puVar3));
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
LAB_004a73a8:
      puVar2 = (undefined4 *)func_0010CF28(0x4c,param_3,4);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2 = func_004A6868(puVar2,(int)param_2,param_1,puVar3,param_3);
      }
      func_0010F1DC(puVar3 + 4,(int *)(puVar3[7] + (int)puVar2));
      puVar3[6] = puVar3[6] + 1;
      return puVar2;
    }
    if (((int *)puVar3[10] == param_3) &&
       (uVar1 = func_0010FBAC((uint *)puVar3[2],puVar5), uVar1 == 0)) {
      if (puVar3 != (undefined4 *)0x0) goto LAB_004a73a8;
      goto LAB_004a7348;
    }
    puVar3 = (undefined4 *)(*(int *)((int)puVar3 + iVar4 + 4) - iVar4);
  } while( true );
}

