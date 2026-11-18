#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_003521F0(int param_1,undefined4 param_2);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2F38(int param_1,undefined4 *param_2);
extern int func_004A3788(int *param_1);
extern int func_005811E8(int *param_1);
extern int func_00588BE4(int param_1);
extern int *DAT_0037ee0c;
extern int DAT_0037ee10;
extern char s_IronFire_0037ee1c[];
extern char s_PLFire_0037ee14[];

// USA 0037EC94 <- EU 0037EC70 (Ghidra, non-matching)
// GLOBAL DAT_0037ee0c int *
// GLOBAL DAT_0037ee10 int
// GLOBAL s_IronFire_0037ee1c string
// GLOBAL s_PLFire_0037ee14 string

undefined4 func_0037EC94(int param_1)

{
  int iVar1;
  int *piVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x4))
  iVar1 = func_00588BE4(param_1);
  if (iVar1 != *DAT_0037ee0c) {
    return 0;
  }
  *(undefined2 *)(DAT_0037ee10 + param_1) = 2;
  iVar1 = func_005811E8((int *)(param_1 + 0xb4c));
  if (iVar1 != 0) {
    func_004A3788((int *)(param_1 + 0xb4c));
  }
  piVar2 = (int *)(param_1 + 0xb44);
  iVar1 = func_005811E8(piVar2);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x344) == 0) {
      *piVar2 = 0;
      *(undefined4 *)(param_1 + 0xb48) = 0;
    }
    else {
      iVar1 = *piVar2;
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == *(int *)(param_1 + 0xb48))) {
        func_00110848(iVar1);
      }
      func_004A1B9C(&local_20,*(int *)(param_1 + 0x344),(uint *)s_PLFire_0037ee14);
      *piVar2 = local_20;
      *(undefined4 *)(param_1 + 0xb48) = uStack_1c;
    }
    iVar1 = *piVar2;
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == *(int *)(param_1 + 0xb48))) {
      func_004A2F38(iVar1,(undefined4 *)(param_1 + 0xa90));
    }
  }
  piVar2 = (int *)(param_1 + 0xb3c);
  iVar1 = func_005811E8(piVar2);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x344) == 0) {
      *piVar2 = 0;
      *(undefined4 *)(param_1 + 0xb40) = 0;
    }
    else {
      iVar1 = *piVar2;
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == *(int *)(param_1 + 0xb40))) {
        func_00110848(iVar1);
      }
      func_004A1B9C(&local_20,*(int *)(param_1 + 0x344),(uint *)s_IronFire_0037ee1c);
      *piVar2 = local_20;
      *(undefined4 *)(param_1 + 0xb40) = uStack_1c;
    }
    iVar1 = *piVar2;
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == *(int *)(param_1 + 0xb40))) {
      func_004A2F38(iVar1,(undefined4 *)(param_1 + 0xa90));
    }
  }
  if (*(short *)(param_1 + 0x2e) == 0) {
    return func_003521F0(param_1 + 0x324,0);
  }
  return func_003521F0(param_1 + 0x324,1);
}

