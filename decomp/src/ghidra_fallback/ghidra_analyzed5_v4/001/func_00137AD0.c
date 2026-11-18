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
extern int DAT_00137c4c;
extern float DAT_00137c50;
extern float DAT_00137c54;
extern int DAT_00137c58;
extern undefined4 DAT_00137c5c;
extern int DAT_00137c60;
extern int DAT_00137c64;
extern int DAT_00137c68;
extern undefined DAT_00137c6c;

// USA 00137AD0 <- EU 00137AD0 (Ghidra, non-matching)
// GLOBAL DAT_00137c4c int
// GLOBAL DAT_00137c50 float
// GLOBAL DAT_00137c54 float
// GLOBAL DAT_00137c58 int
// GLOBAL DAT_00137c5c undefined4
// GLOBAL DAT_00137c60 int
// GLOBAL DAT_00137c64 int
// GLOBAL DAT_00137c68 int
// GLOBAL DAT_00137c6c undefined

int * func_00137AD0(undefined4 *param_1,uint *param_2)

{
  short sVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined4 *)(albw_frame + 0x0))
  #define local_1c (*(undefined * *)(albw_frame + 0x4))
  piVar2 = (int *)func_00305AF4(param_1,param_2);
  iVar4 = DAT_00137c4c + 0x5c;
  *piVar2 = DAT_00137c4c;
  piVar2[200] = iVar4;
  iVar4 = func_0014E428((int)piVar2,0,0,0,1,0,0);
  piVar2[0x11f] = iVar4;
  func_001E3FD8((int)piVar2);
  func_001E4018((int)piVar2,0);
  func_001E3EB0((int)piVar2,DAT_00137c54,DAT_00137c50,DAT_00137c50);
  func_001E40F4((int)piVar2,2);
  iVar4 = DAT_00137c58;
  uVar5 = 0;
  do {
    func_00169678((int)piVar2,uVar5,iVar4 + uVar5 * 8);
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 2);
  func_001E4378((int)piVar2);
  local_20 = DAT_00137c5c;
  sVar1 = *(short *)((int)piVar2 + 0x2e);
  if (sVar1 == 0) {
    piVar2[0x127] = DAT_00137c68;
  }
  else {
    iVar4 = DAT_00137c60;
    if ((sVar1 == 1) || (iVar4 = DAT_00137c64, sVar1 == 2)) {
      piVar2[0x127] = iVar4;
    }
  }
  *(undefined2 *)(*(int *)(piVar2[0x121] + 0x18) + 0x28) = 100;
  *(uint *)(*(int *)(piVar2[0x121] + 0x18) + 0x2c) =
       *(uint *)(*(int *)(piVar2[0x121] + 0x18) + 0x2c) & 0xfffff8ff | 0x100;
  puVar3 = (undefined4 *)func_0010BAB4(0x2cc);
  iVar4 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    local_1c = &DAT_00137c6c;
    iVar4 = func_002BE9D4(puVar3,&local_20,0,0,1);
  }
  piVar2[0x128] = iVar4;
  piVar2[0xb8] = piVar2[0xb8] | 2;
  return piVar2;
}

