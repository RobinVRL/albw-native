#include "ghidra_types.h"

extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern int func_00110490(undefined4 *param_1,uint param_2);
extern int func_003CEAF8(int param_1);
extern int func_003CF1FC(int *param_1,int param_2,undefined4 param_3);
extern int func_003D0ACC(int *param_1);
extern int func_003D225C(int param_1);
extern int *DAT_003cff78;
extern char *DAT_003cff7c;
extern int *DAT_003cff80;
extern undefined4 DAT_003cff84;
extern undefined4 DAT_003cff88;

// USA 003CFDAC <- EU 003CFD88 (Ghidra, non-matching)
// GLOBAL DAT_003cff78 int *
// GLOBAL DAT_003cff7c char *
// GLOBAL DAT_003cff80 int *
// GLOBAL DAT_003cff84 undefined4
// GLOBAL DAT_003cff88 undefined4

undefined4 func_003CFDAC(int *param_1)

{
  undefined2 uVar1;
  int *piVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define auStack_24 ((undefined1 *)(albw_frame + 0xc))
  piVar2 = DAT_003cff78;
  func_0010C0C0(DAT_003cff78);
  pcVar3 = DAT_003cff7c;
  if (param_1[1] != 0) {
    if (*(char *)((int)param_1 + 10) != '\0') {
      func_003CF1FC(param_1,0,param_1 + 0x7f);
    }
    if (*(char *)((int)param_1 + 0xb) != '\0') {
      func_003CF1FC(param_1,1,param_1 + 0xeb);
    }
    if (*pcVar3 != '\0') {
      (**(code **)(*param_1 + 8))(param_1,param_1[1],0x96,0x14,auStack_24);
      func_003D0ACC(param_1);
    }
  }
  (**(code **)(*param_1 + 0x28))(param_1,param_1[1],0,0,5);
  param_1[1] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  func_00110490(param_1 + 0x87,0x18c);
  func_00110490(param_1 + 0xf3,0x18c);
  param_1[0x157] = 0;
  param_1[0x158] = 0;
  func_00110490(param_1 + 0x159,0x318);
  piVar4 = DAT_003cff80;
  func_0010C0C0(DAT_003cff80);
  if (pcVar3[3] != '\0') {
    func_003D225C(param_1[0xea]);
    pcVar3[3] = '\0';
  }
  func_0010C160(piVar4);
  piVar4 = DAT_003cff80;
  func_0010C0C0(DAT_003cff80);
  if (pcVar3[4] != '\0') {
    func_003D225C(param_1[0x156]);
    pcVar3[4] = '\0';
  }
  func_0010C160(piVar4);
  uVar5 = DAT_003cff88;
  uVar1 = (undefined2)DAT_003cff84;
  *(undefined2 *)(param_1 + 0x7f) = uVar1;
  *(undefined2 *)(param_1 + 0xeb) = uVar1;
  *(short *)(param_1 + 0x157) = (short)uVar5;
  func_003CEAF8(0);
  pcVar3[1] = '\0';
  *pcVar3 = '\0';
  return func_0010C160(piVar2);
}

