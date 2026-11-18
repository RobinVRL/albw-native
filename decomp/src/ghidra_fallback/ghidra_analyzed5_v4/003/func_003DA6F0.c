#include "ghidra_types.h"

extern int func_001164D4(undefined4 *param_1,undefined4 *param_2);
extern int func_003D5820(int *param_1,int param_2,ushort *param_3);
extern int func_003D5AD0(int *param_1,int param_2,int param_3,int *param_4);
extern int func_003D69A8(int param_1);
extern int func_003D6B50(int *param_1,int param_2,short *param_3,int param_4);
extern int func_003D6E70(undefined4 *param_1);
extern int func_003D87F4(int *param_1,int *param_2,int param_3);
extern int func_003D88B0(undefined4 *param_1);
extern int func_003D94F0(int *param_1,int *param_2,int param_3,int *param_4);
extern int func_003D974C(undefined4 *param_1);
extern int func_003DA498(int *param_1,int param_2);
extern int func_003DA5D8(undefined4 *param_1);
extern undefined DAT_003da8b4;

// USA 003DA6F0 <- EU 003DA6D0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 uint
// GLOBAL DAT_003da8b4 undefined

int * func_003DA6F0(int param_1,int param_2,int param_3,int *param_4,int param_5,uint param_6)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define aiStack_4c ((int *)(albw_frame + 0x4))
  #define local_38 (*(int *)(albw_frame + 0x18))
  #define iStack_34 (*(int *)(albw_frame + 0x1c))
  #define iStack_30 (*(int *)(albw_frame + 0x20))
  #define iStack_2c (*(int *)(albw_frame + 0x24))
  #define local_28 (*(int * *)(albw_frame + 0x28))
  iStack_34 = param_1;
  iStack_30 = param_2;
  iStack_2c = param_3;
  local_28 = param_4;
  func_003DA5D8(aiStack_4c);
  func_001164D4(aiStack_4c,*(undefined4 **)(param_1 + 0x20));
  iVar1 = func_003DA498(aiStack_4c,2);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = func_003D69A8(iVar1);
  }
  puVar3 = (undefined4 *)func_003DA498(aiStack_4c,1);
  piVar4 = (int *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    piVar4 = func_003D6E70(puVar3);
  }
  puVar3 = (undefined4 *)func_003DA498(aiStack_4c,2);
  piVar5 = (int *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    piVar5 = func_003D88B0(puVar3);
  }
  puVar3 = (undefined4 *)func_003DA498(aiStack_4c,2);
  piVar6 = (int *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    piVar6 = func_003D974C(puVar3);
  }
  piVar7 = (int *)func_003DA498(aiStack_4c,1);
  if (piVar7 != (int *)0x0) {
    *piVar7 = 0;
  }
  piVar8 = local_28;
  iVar1 = func_003D5AD0(piVar2,(int)aiStack_4c,param_3,local_28);
  if (iVar1 == 0) {
    iVar1 = func_003D6B50(piVar4,(int)piVar2,(short *)&DAT_003da8b4,(int)piVar8);
    if (iVar1 == 0) {
      uVar9 = func_003D87F4(piVar5,aiStack_4c,(int)piVar2);
      if (uVar9 == 0) {
        local_38 = piVar5[4];
        iVar1 = func_003D94F0(piVar6,aiStack_4c,(int)(piVar5 + 1),&local_38);
        if ((iVar1 != 0) && (uVar9 = 0, param_6 != 0)) {
          do {
            if (((*(uint *)(param_2 + uVar9 * 4) & 1 << *(sbyte *)(param_1 + 0x1b)) == 0) &&
               (iVar1 = func_003D5820(piVar7,(int)(piVar6 + 1),*(ushort **)(param_5 + uVar9 * 4)),
               iVar1 != 0)) {
              *(uint *)(param_2 + uVar9 * 4) =
                   *(uint *)(param_2 + uVar9 * 4) | 1 << *(sbyte *)(param_1 + 0x1b);
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < param_6);
        }
      }
    }
    else {
      uVar9 = 0;
      if (param_6 != 0) {
        do {
          if (((*(uint *)(param_2 + uVar9 * 4) & 1 << *(sbyte *)(param_1 + 0x1b)) == 0) &&
             (iVar1 = func_003D6B50(piVar4,(int)piVar2,*(short **)(param_5 + uVar9 * 4),(int)piVar8)
             , iVar1 == 1)) {
            *(uint *)(param_2 + uVar9 * 4) =
                 *(uint *)(param_2 + uVar9 * 4) | 1 << *(sbyte *)(param_1 + 0x1b);
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < param_6);
      }
    }
  }
  return aiStack_4c;
}

