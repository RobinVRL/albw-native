#include "ghidra_types.h"

extern int func_001725D0(int param_1);
extern int func_001E0AF4(int param_1);
extern int func_00260E30(int param_1);
extern int func_002CB110(int param_1);
extern int func_004AD81C(int param_1,undefined4 param_2,uint param_3,int *param_4);
extern int func_004B77C4(int param_1);
extern int func_004C5100(int param_1);
extern int func_004C6DD0(int param_1,uint **param_2,uint *param_3,uint *param_4);
extern int func_004CD45C(int param_1);
extern int func_004CDBEC(int param_1);
extern int func_004ED740(int param_1);
extern int func_004EF7EC(int param_1,undefined4 param_2,uint param_3);
extern int func_0051C3C8(int param_1);
extern int *DAT_004efc40;
extern int *DAT_004efc44;
extern int *DAT_004efc48;
extern int *DAT_004efc4c;
extern int *DAT_004efc50;
extern int *DAT_004efc54;
extern int *DAT_004efc58;
extern int *DAT_004efc5c;
extern int *DAT_004efc60;
extern int *DAT_004efc64;
extern int *DAT_004efc68;
extern int *DAT_004efc6c;
extern int *DAT_004efc70;
extern int *DAT_004efc74;

// USA 004EFB10 <- EU 004EFAE8 (Ghidra, non-matching)
// GLOBAL DAT_004efc40 int *
// GLOBAL DAT_004efc44 int *
// GLOBAL DAT_004efc48 int *
// GLOBAL DAT_004efc4c int *
// GLOBAL DAT_004efc50 int *
// GLOBAL DAT_004efc54 int *
// GLOBAL DAT_004efc58 int *
// GLOBAL DAT_004efc5c int *
// GLOBAL DAT_004efc60 int *
// GLOBAL DAT_004efc64 int *
// GLOBAL DAT_004efc68 int *
// GLOBAL DAT_004efc6c int *
// GLOBAL DAT_004efc70 int *
// GLOBAL DAT_004efc74 int *

void func_004EFB10(int param_1,undefined4 param_2,uint *param_3,uint *param_4)

{
  char cVar1;
  int *piVar2;
  uint **extraout_r1;
  uint **extraout_r1_00;
  undefined4 extraout_r1_01;
  uint **extraout_r1_02;
  uint **ppuVar3;
  undefined4 extraout_r1_03;
  bool bVar4;
  
  piVar2 = DAT_004efc40;
  cVar1 = *(char *)(param_1 + 0x60);
  bVar4 = cVar1 == '\0';
  if (bVar4) {
    cVar1 = *(char *)(param_1 + 0x66);
  }
  if (bVar4 && cVar1 == '\0') {
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
    if (*(char *)(*(int *)(*piVar2 + 0x1128) + 0x10c) != '\0') {
      *(undefined1 *)(*DAT_004efc44 + 0x2c1b) = 0;
    }
    if (*(char *)(param_1 + 0x67) != '\0') {
      func_001E0AF4(*DAT_004efc48);
      *(undefined1 *)(param_1 + 0x67) = 0;
    }
    func_004CDBEC(*DAT_004efc4c);
    func_002CB110(*DAT_004efc50);
    ppuVar3 = extraout_r1;
    if (*DAT_004efc54 != 0) {
      func_004B77C4(*DAT_004efc54);
      ppuVar3 = extraout_r1_00;
    }
    if ((*(char *)(param_1 + 0x65) != '\0') && (*(int *)(*piVar2 + 0x28) != 0)) {
      func_004ED740(*DAT_004efc58);
      func_004AD81C(*DAT_004efc5c,extraout_r1_01,(uint)param_3,(int *)param_4);
      func_004CD45C(*DAT_004efc60);
      func_004C5100(*DAT_004efc64);
      func_00260E30(*DAT_004efc68);
      ppuVar3 = extraout_r1_02;
    }
    if (*DAT_004efc6c != 0) {
      func_004C6DD0(*DAT_004efc6c,ppuVar3,param_3,param_4);
    }
    func_0051C3C8(*DAT_004efc70);
    func_001725D0(*DAT_004efc74);
    if (*(short *)(param_1 + 0x68) != 0) {
      func_004EF7EC(param_1,extraout_r1_03,(uint)param_3);
    }
  }
  return;
}

