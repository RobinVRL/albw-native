#include "ghidra_types.h"

extern int func_00112364(int *param_1,int param_2,int *param_3);
extern int func_00409F8C(int param_1,int param_2,uint *param_3,int param_4);
extern int func_0040A180(int param_1,int param_2,uint *param_3,uint param_4);
extern int func_0040A35C(int param_1,int param_2,uint *param_3,int param_4);
extern int func_0040BD34(int param_1,uint *param_2,int param_3,int param_4);
extern int func_0040F100(undefined4 *param_1,undefined4 param_2);
extern int func_0041D790(int param_1,int param_2,int param_3);
extern int func_00569C64(int param_1,uint *param_2);
extern int DAT_0040c534;
extern uint DAT_0040c538;

// USA 0040C38C <- EU 0040C36C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// GLOBAL DAT_0040c534 int
// GLOBAL DAT_0040c538 uint

undefined4 func_0040C38C(int param_1,int param_2,undefined4 *param_3,int param_4,int param_5)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 ((undefined4 * *)(albw_frame + 0x0))
  #define local_68 (*(undefined4 * *)(albw_frame + 0x8))
  #define local_5c (*(uint *)(albw_frame + 0x14))
  #define local_58 (*(int *)(albw_frame + 0x18))
  #define local_54 (*(int *)(albw_frame + 0x1c))
  #define local_48 (*(int *)(albw_frame + 0x28))
  #define iStack_34 (*(int *)(albw_frame + 0x3c))
  #define local_30 (*(int *)(albw_frame + 0x40))
  #define puStack_2c (*(undefined4 * *)(albw_frame + 0x44))
  #define local_28 (*(int *)(albw_frame + 0x48))
  if (((uint)param_3 & 0x1f) != 0) {
    return 0;
  }
  uVar10 = (int)param_3 + param_4;
  local_70[0] = param_3;
  iStack_34 = param_1;
  local_30 = param_2;
  puStack_2c = param_3;
  local_28 = param_4;
  iVar3 = func_0040A180(param_1,param_2,(uint *)local_70,uVar10);
  uVar5 = 0;
  if (iVar3 != 0) {
    bVar2 = func_00569C64(local_30,&local_5c);
    if (bVar2) {
      iVar3 = func_0040A35C(param_1,local_5c,(uint *)local_70,uVar10);
      if (iVar3 == 0) {
        return 0;
      }
      iVar3 = func_00409F8C(param_1,local_48,(uint *)local_70,uVar10);
      puVar8 = local_70[0];
      if (iVar3 == 0) {
        return 0;
      }
      if (((uint)local_70[0] & 0x1f) != 0) {
        return 0;
      }
      uVar4 = local_54 * DAT_0040c534 + 0x1fU & 0xffffffe0;
      local_68 = (undefined4 *)((int)local_70[0] + uVar4);
      if (0 < (int)((int)local_68 - uVar10)) {
        return 0;
      }
      uVar9 = 0;
      uVar1 = (uint)((ulonglong)uVar4 * (ulonglong)DAT_0040c538 >> 0x2d);
      puVar7 = local_70[0];
      if (uVar1 != 0) {
        do {
          if (puVar7 == (undefined4 *)0x0) {
            puVar6 = (undefined4 *)0x0;
          }
          else {
            puVar6 = func_0040F100(puVar7,(undefined4 *)(param_1 + 0xb8));
          }
          func_00112364((int *)(param_1 + 0xcc),param_1 + 0xd0,puVar6 + 0x3d);
          uVar9 = uVar9 + 1;
          puVar7 = puVar7 + 0xb0e;
        } while (uVar9 < uVar1);
      }
      *(undefined4 *)(param_1 + 0xb8) = puVar8;
      *(uint *)(param_1 + 0xbc) = uVar4;
      local_70[0] = local_68;
      if (((uint)local_68 & 0x1f) != 0) {
        return 0;
      }
      uVar4 = local_58 * 0x138 + 0x1fU & 0xffffffe0;
      puVar8 = (undefined4 *)((int)local_68 + uVar4);
      if (0 < (int)((int)puVar8 - uVar10)) {
        return 0;
      }
      func_0041D790(param_1 + 0xf4,(int)local_68,uVar4);
      local_70[0] = puVar8;
    }
    if ((param_5 != 0) &&
       (iVar3 = func_0040BD34(param_1,(uint *)local_70,uVar10,param_5), iVar3 == 0)) {
      return 0;
    }
    *(int *)(param_1 + 4) = local_30;
    *(undefined4 **)(param_1 + 0x104) = param_3;
    *(int *)(param_1 + 0x108) = local_28;
    uVar5 = 1;
  }
  return uVar5;
}

