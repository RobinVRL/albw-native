#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_003521F0(int param_1,undefined4 param_2);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2F38(int param_1,undefined4 *param_2);
extern int func_004A3788(int *param_1);
extern int func_005811E8(int *param_1);
extern int func_00588BE4(int param_1);
extern int *DAT_0037f060;
extern int DAT_0037f064;
extern char s_IronFireWait_0037f074[];
extern char s_PLFireWait_0037f068[];

// USA 0037EEE8 <- EU 0037EEC4 (Ghidra, non-matching)
// GLOBAL DAT_0037f060 int *
// GLOBAL DAT_0037f064 int
// GLOBAL s_IronFireWait_0037f074 string
// GLOBAL s_PLFireWait_0037f068 string

undefined4 func_0037EEE8(int param_1)

{
  int iVar1;
  int *piVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x4))
  iVar1 = func_00588BE4(param_1);
  if (iVar1 != *DAT_0037f060) {
    return 0;
  }
  *(undefined2 *)(DAT_0037f064 + param_1) = 2;
  iVar1 = func_005811E8((int *)(param_1 + 0xb3c));
  if (iVar1 != 0) {
    func_004A3788((int *)(param_1 + 0xb3c));
  }
  piVar2 = (int *)(param_1 + 0xb54);
  iVar1 = func_005811E8(piVar2);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x344) == 0) {
      *piVar2 = 0;
      *(undefined4 *)(param_1 + 0xb58) = 0;
    }
    else {
      iVar1 = *piVar2;
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == *(int *)(param_1 + 0xb58))) {
        func_00110848(iVar1);
      }
      func_004A1B9C(&local_20,*(int *)(param_1 + 0x344),(uint *)s_PLFireWait_0037f068);
      *piVar2 = local_20;
      *(undefined4 *)(param_1 + 0xb58) = uStack_1c;
    }
    iVar1 = *piVar2;
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == *(int *)(param_1 + 0xb58))) {
      func_004A2F38(iVar1,(undefined4 *)(param_1 + 0xa90));
    }
  }
  piVar2 = (int *)(param_1 + 0xb4c);
  iVar1 = func_005811E8(piVar2);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x344) == 0) {
      *piVar2 = 0;
      *(undefined4 *)(param_1 + 0xb50) = 0;
    }
    else {
      iVar1 = *piVar2;
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == *(int *)(param_1 + 0xb50))) {
        func_00110848(iVar1);
      }
      func_004A1B9C(&local_20,*(int *)(param_1 + 0x344),(uint *)s_IronFireWait_0037f074);
      *piVar2 = local_20;
      *(undefined4 *)(param_1 + 0xb50) = uStack_1c;
    }
    iVar1 = *piVar2;
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == *(int *)(param_1 + 0xb50))) {
      func_004A2F38(iVar1,(undefined4 *)(param_1 + 0xa90));
    }
  }
  if (*(short *)(param_1 + 0x2e) == 0) {
    return func_003521F0(param_1 + 0x324,0);
  }
  return func_003521F0(param_1 + 0x324,1);
}

