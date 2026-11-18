#include "ghidra_types.h"

extern int func_00368838(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern int func_005229AC(int *param_1,int *param_2);
extern int DAT_00368aa4;

// USA 00368978 <- EU 00368954 (Ghidra, non-matching)
// GLOBAL DAT_00368aa4 int

undefined4 func_00368978(int param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(int *)(albw_frame + 0x0))
  #define local_3c (*(int *)(albw_frame + 0x4))
  #define iStack_34 (*(int *)(albw_frame + 0xc))
  #define local_30 (*(int * *)(albw_frame + 0x10))
  #define piStack_2c (*(int * *)(albw_frame + 0x14))
  #define piStack_28 (*(int * *)(albw_frame + 0x18))
  if (param_2 == (int *)0x0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xdc) = 0;
  iVar1 = DAT_00368aa4;
  puVar3 = (undefined4 *)param_3[2];
  puVar5 = puVar3 + *param_3;
  iStack_34 = param_1;
  local_30 = param_2;
  piStack_2c = param_3;
  piStack_28 = param_4;
  for (; puVar3 != puVar5; puVar3 = puVar3 + 1) {
    piVar4 = (int *)*puVar3;
    (**(code **)(*piVar4 + 8))(piVar4);
    local_3c = piVar4[1];
    local_40 = iVar1;
    iVar2 = func_005229AC(local_30,&local_40);
    if (iVar2 != 0) {
      piVar4 = (int *)(param_1 + 0xdc);
      if (*piVar4 < *(int *)(param_1 + 0xe0)) {
        *(int *)(*(int *)(param_1 + 0xe4) + *piVar4 * 4) = iVar2;
        *piVar4 = *piVar4 + 1;
      }
    }
  }
  *(undefined4 *)(param_1 + 0xc4) = 0;
  puVar3 = (undefined4 *)param_4[2];
  puVar5 = puVar3 + *param_4;
  for (; puVar3 != puVar5; puVar3 = puVar3 + 1) {
    piVar4 = (int *)*puVar3;
    (**(code **)(*piVar4 + 8))(piVar4);
    local_3c = piVar4[1];
    local_40 = iVar1;
    iVar2 = func_005229AC(local_30,&local_40);
    if (iVar2 != 0) {
      piVar4 = (int *)(param_1 + 0xc4);
      if (*piVar4 < *(int *)(param_1 + 200)) {
        *(int *)(*(int *)(param_1 + 0xcc) + *piVar4 * 4) = iVar2;
        *piVar4 = *piVar4 + 1;
      }
    }
  }
  return func_00368838(param_1,0,0,0);
}

