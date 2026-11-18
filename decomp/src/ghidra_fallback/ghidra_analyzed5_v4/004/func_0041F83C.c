#include "ghidra_types.h"

extern int func_003CC1E4(undefined4 *param_1,uint param_2);
extern int func_003CC230(uint *param_1,undefined4 *param_2,int param_3,uint param_4);

// USA 0041F83C <- EU 0041F81C (Ghidra, non-matching)

uint * func_0041F83C(int param_1,undefined4 *param_2,int param_3,uint param_4)

{
  undefined4 *puVar1;
  uint *puVar2;
  int *piVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(uint *)(albw_frame + 0x8))
  piVar3 = *(int **)(param_1 + 0x618);
  local_18 = param_4;
  if (piVar3 != (int *)0x0) {
    puVar1 = func_003CC1E4(param_2,(*piVar3 - piVar3[1] & 0xfffffffcU) + 0x18);
    **(undefined4 **)(param_1 + 0x618) = puVar1;
    piVar3 = *(int **)(param_1 + 0x618);
    if (param_3 != 0) {
      puVar2 = func_003CC1E4(puVar1,((int)puVar1 - piVar3[2] & 0xfffffffcU) + 0x18);
      *piVar3 = (int)puVar2;
      puVar2 = func_003CC230(puVar2,&local_18,param_3,param_4);
      *piVar3 = (int)puVar2;
      if ((uint *)piVar3[3] != (uint *)0x0) {
        *(uint *)piVar3[3] = (uint)((int)puVar2 - piVar3[2]) >> 3;
      }
      piVar3[2] = *piVar3;
      piVar3[3] = local_18;
      if (piVar3[4] == 0) {
        piVar3[4] = *piVar3 - piVar3[1] & 0xfffffffc;
      }
    }
    return (uint *)**(undefined4 **)(param_1 + 0x618);
  }
  puVar2 = func_003CC1E4(param_2,((uint)param_2 & 0xf) + 0x18);
  puVar2 = func_003CC230(puVar2,&local_18,param_3,param_4);
  if (*(int **)(param_1 + 0x614) != (int *)0x0) {
    **(int **)(param_1 + 0x614) = (int)puVar2 - *(int *)(param_1 + 0x610) >> 3;
    *(undefined4 *)(param_1 + 0x614) = 0;
  }
  *(uint **)(param_1 + 0x610) = puVar2;
  *(uint *)(param_1 + 0x614) = local_18;
  if (*(int *)(param_1 + 0x60c) == 0) {
    *(uint **)(param_1 + 0x60c) = puVar2;
  }
  return puVar2;
}

