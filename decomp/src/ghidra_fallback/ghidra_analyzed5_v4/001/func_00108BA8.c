#include "ghidra_types.h"

extern int func_00108AE8(void *param_1);
extern int func_00108B98(void);
extern int func_00108DF8(void);
extern int func_00108F4C(void);
extern int func_0010AF24(void);
extern int func_0010AF34(void);
extern int func_0010AF40(void);
extern int func_0010AFEC(void);
extern int func_0010B1B4(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4, int param_5,undefined4 *param_6,undefined4 *param_7);
extern int DAT_00108cd4;
extern int DAT_00108cd8;

// USA 00108BA8 <- EU 00108BA8 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4 *
// PARAM param_6 Stack[0x4]:4 int *
// PARAM param_7 Stack[0x8]:4 int
// GLOBAL DAT_00108cd4 int
// GLOBAL DAT_00108cd8 int

int func_00108BA8(undefined4 *param_1,undefined4 *param_2,undefined1 *param_3,int param_4,
                 undefined4 *param_5,int *param_6,int param_7)

{
  int iVar1;
  undefined4 uVar2;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_34 (*(int *)(albw_frame + 0xc))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x14))
  #define auStack_28 ((undefined1 *)(albw_frame + 0x18))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x1c))
  if (param_7 == 0) {
    func_0010AF40();
  }
  else {
    iVar1 = func_0010AFEC();
    if (iVar1 == 0) {
      return DAT_00108cd4;
    }
  }
  iVar1 = func_0010AF24();
  if (iVar1 == 0) {
    if (param_1 == (undefined4 *)0x0) {
      param_1 = &uStack_30;
    }
    if (param_2 == (undefined4 *)0x0) {
      param_2 = &uStack_2c;
    }
    if (param_3 == (undefined1 *)0x0) {
      param_4 = 0;
    }
    if (param_3 == (undefined1 *)0x0 || param_4 == 0) {
      param_3 = auStack_28;
    }
    if (param_5 == (undefined4 *)0x0) {
      param_5 = &uStack_24;
    }
    if (param_6 == (int *)0x0) {
      param_6 = &local_34;
    }
    local_34 = 0;
    func_00108DF8();
    uVar2 = func_00108B98();
    iVar1 = func_0010B1B4(param_1,uVar2,param_2,param_3,param_4,param_5,param_6);
    func_00108F4C();
    if (local_34 != 0) {
      software_interrupt(0x23);
    }
  }
  else {
    uVar2 = func_0010AF24();
    *param_2 = uVar2;
    func_00108AE8(0);
    func_0010AF34();
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = 0;
    }
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = 0;
    }
    iVar1 = 0;
    if (param_6 != (int *)0x0) {
      *param_6 = *(int *)(DAT_00108cd8 + 8);
    }
  }
  func_0010AF34();
  return iVar1;
}

