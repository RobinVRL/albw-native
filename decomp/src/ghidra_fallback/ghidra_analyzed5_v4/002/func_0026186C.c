#include "ghidra_types.h"

extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_0010F1DC(int *param_1,int *param_2);
extern int func_00133870(int param_1,uint param_2,int param_3);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_00222718(int param_1,undefined4 param_2,uint param_3);
extern int func_002227F4(int param_1,undefined4 param_2,uint param_3);
extern int func_002228F8(int param_1,int param_2,uint param_3,int param_4,int param_5,byte param_6, float fparam_0);
extern int func_005330BC(int param_1,int *param_2);
extern int func_00564A78(int param_1,int *param_2);
extern float DAT_00261aa8;
extern undefined4 DAT_00261aac;
extern undefined4 DAT_00261ab0;

// USA 0026186C <- EU 00261894 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int *
// PARAM param_6 Stack[0x4]:4 int
// PARAM param_7 Stack[0x8]:4 uint
// PARAM param_8 Stack[0xc]:4 int
// PARAM param_9 Stack[0x10]:4 uint
// PARAM param_10 Stack[0x14]:1 byte
// GLOBAL DAT_00261aa8 float
// GLOBAL DAT_00261aac undefined4
// GLOBAL DAT_00261ab0 undefined4

undefined4 *
func_0026186C(undefined4 *param_1,int param_2,int *param_3,int param_4,int *param_5,int param_6,
             uint param_7,int param_8,uint param_9,byte param_10)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  float fparam_0;
  
  fparam_0 = DAT_00261aa8;
  puVar1 = func_0010DA7C(param_1,0,3);
  *puVar1 = DAT_00261aac;
  puVar1[4] = param_2;
  puVar1[5] = *(undefined4 *)(*(int *)(param_2 + 0x2d0) + 0x1c8 + param_4 * 4);
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined1 *)(puVar1 + 9) = 0;
  *(undefined1 *)((int)puVar1 + 0x25) = 0;
  uVar2 = func_005330BC(*(int *)(*(int *)(puVar1[4] + 0x2d0) + 0x1c8 + param_4 * 4),param_5);
  func_002228F8((int)puVar1,param_4,uVar2,param_7,param_9,param_10,fparam_0);
  *puVar1 = DAT_00261ab0;
  puVar1[10] = 0;
  puVar1[0xc] = 0xffffffff;
  puVar1[0xb] = 0;
  if (*(int *)(puVar1[4] + 0x40c) != 0) {
    uVar2 = func_00564A78(*(int *)(puVar1[4] + 0x40c),param_3);
    puVar1[0xc] = uVar2;
  }
  if (param_7 != 0 && param_6 != 0) {
    uVar2 = 0;
    if (param_7 != 0) {
      do {
        if ((uint *)puVar1[7] != (uint *)0x0) {
          func_00169688((uint *)puVar1[7],uVar2,(int *)(param_6 + uVar2 * 8),puVar1[5]);
          func_00133870(puVar1[7],uVar2,puVar1[6]);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < param_7);
    }
    if (puVar1[7] != 0) {
      func_0016A02C(puVar1[7],-1,(int *)0xffffffff,0);
    }
    func_002227F4((int)puVar1,0,0);
  }
  if (param_9 != 0 && param_8 != 0) {
    uVar2 = 0;
    if (param_9 != 0) {
      do {
        if ((uint *)puVar1[8] != (uint *)0x0) {
          func_00169608((uint *)puVar1[8],uVar2,(int *)(param_8 + uVar2 * 8),puVar1[5]);
          func_00133870(puVar1[8],uVar2,puVar1[6]);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < param_9);
    }
    if (puVar1[8] != 0) {
      func_0016A02C(puVar1[8],-1,(int *)0xffffffff,0);
    }
    func_00222718((int)puVar1,0,0);
  }
  iVar3 = puVar1[4];
  func_0010F1DC((int *)(iVar3 + 0x884),(int *)(*(int *)(iVar3 + 0x890) + (int)puVar1));
  *(int *)(iVar3 + 0x88c) = *(int *)(iVar3 + 0x88c) + 1;
  return puVar1;
}

