#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_00169678(int param_1,uint param_2,int *param_3);
extern int func_001E3EB0(int param_1,float fparam_0,float fparam_1,float fparam_2);
extern int func_001E3FD8(int param_1);
extern int func_001E4018(int param_1,uint param_2);
extern int func_001E40F4(int param_1,int param_2);
extern void func_001E4378(int param_1);
extern int func_002BE9D4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4, undefined1 param_5);
extern int func_00305AF4(undefined4 *param_1,uint *param_2);
extern int DAT_001c0940;
extern float DAT_001c0944;
extern float DAT_001c0948;
extern int DAT_001c094c;
extern undefined4 DAT_001c0950;
extern int DAT_001c0954;
extern int DAT_001c0958;
extern int DAT_001c095c;
extern undefined DAT_001c0960;

// USA 001C0744 <- EU 001C0744 (Ghidra, non-matching)
// GLOBAL DAT_001c0940 int
// GLOBAL DAT_001c0944 float
// GLOBAL DAT_001c0948 float
// GLOBAL DAT_001c094c int
// GLOBAL DAT_001c0950 undefined4
// GLOBAL DAT_001c0954 int
// GLOBAL DAT_001c0958 int
// GLOBAL DAT_001c095c int
// GLOBAL DAT_001c0960 undefined

int * func_001C0744(undefined4 *param_1,uint *param_2)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined4 *)(albw_frame + 0x0))
  #define local_1c (*(undefined * *)(albw_frame + 0x4))
  piVar2 = (int *)func_00305AF4(param_1,param_2);
  iVar3 = DAT_001c0940;
  sVar1 = (short)piVar2[0xc];
  piVar2[200] = DAT_001c0940 + 0x5c;
  *piVar2 = iVar3;
  if (sVar1 == 0) {
    iVar3 = func_0014E428((int)piVar2,0,0,0,1,0,0);
    piVar2[0x11f] = iVar3;
  }
  else if (sVar1 == 1) {
    iVar3 = func_0014E428((int)piVar2,0,1,0,1,0,0);
    piVar2[0x11f] = iVar3;
  }
  else if (sVar1 == 2) {
    iVar3 = func_0014E428((int)piVar2,0,2,0,1,0,0);
    piVar2[0x11f] = iVar3;
  }
  else {
    iVar3 = func_0014E428((int)piVar2,0,3,0,1,0,0);
    piVar2[0x11f] = iVar3;
  }
  func_001E3FD8((int)piVar2);
  func_001E4018((int)piVar2,0);
  func_001E3EB0((int)piVar2,DAT_001c0948,DAT_001c0944,DAT_001c0944);
  func_001E40F4((int)piVar2,2);
  iVar3 = DAT_001c094c;
  uVar5 = 0;
  do {
    func_00169678((int)piVar2,uVar5,iVar3 + uVar5 * 8);
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 2);
  func_001E4378((int)piVar2);
  local_20 = DAT_001c0950;
  sVar1 = *(short *)((int)piVar2 + 0x2e);
  if (sVar1 == 0) {
    piVar2[0x127] = DAT_001c095c;
  }
  else {
    iVar3 = DAT_001c0954;
    if ((sVar1 == 1) || (iVar3 = DAT_001c0958, sVar1 == 2)) {
      piVar2[0x127] = iVar3;
    }
  }
  *(undefined2 *)(*(int *)(piVar2[0x121] + 0x18) + 0x28) = 100;
  *(uint *)(*(int *)(piVar2[0x121] + 0x18) + 0x2c) =
       *(uint *)(*(int *)(piVar2[0x121] + 0x18) + 0x2c) & 0xfffff8ff | 0x100;
  puVar4 = (undefined4 *)func_0010BAB4(0x2cc);
  iVar3 = 0;
  if (puVar4 != (undefined4 *)0x0) {
    local_1c = &DAT_001c0960;
    iVar3 = func_002BE9D4(puVar4,&local_20,0,0,1);
  }
  piVar2[0x128] = iVar3;
  piVar2[0xb8] = piVar2[0xb8] | 2;
  return piVar2;
}

