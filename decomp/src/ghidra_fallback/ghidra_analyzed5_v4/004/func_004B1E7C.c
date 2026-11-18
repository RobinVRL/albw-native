#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0048C378(int *param_1,int param_2,undefined4 param_3);
extern int func_00688CA0(int param_1,int *param_2);
extern int func_00689894(int param_1,int *param_2,uint param_3);
extern int func_00689A2C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_00691D84(int *param_1,int *param_2);
extern undefined4 DAT_004b1fd4;
extern undefined4 DAT_004b1fd8;
extern undefined4 DAT_004b1fdc;
extern undefined4 DAT_004b1fe0;
extern undefined4 *DAT_004b1fe4;
extern undefined4 DAT_004b1fe8;
extern undefined4 DAT_004b1fec;
extern undefined4 DAT_004b1ff0;

// USA 004B1E7C <- EU 004B1E54 (Ghidra, non-matching)
// GLOBAL DAT_004b1fd4 undefined4
// GLOBAL DAT_004b1fd8 undefined4
// GLOBAL DAT_004b1fdc undefined4
// GLOBAL DAT_004b1fe0 undefined4
// GLOBAL DAT_004b1fe4 undefined4 *
// GLOBAL DAT_004b1fe8 undefined4
// GLOBAL DAT_004b1fec undefined4
// GLOBAL DAT_004b1ff0 undefined4

void func_004B1E7C(int param_1,int *param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 (*(int *)(albw_frame + 0x0))
  #define local_6c (*(int *)(albw_frame + 0x4))
  #define auStack_64 ((undefined1 *)(albw_frame + 0xc))
  #define aiStack_40 ((int *)(albw_frame + 0x30))
  #define auStack_34 ((undefined1 *)(albw_frame + 0x3c))
  puVar1 = func_00689A2C(aiStack_40,auStack_34,0x10);
  *(undefined1 *)puVar1[1] = 0;
  *puVar1 = DAT_004b1fd8;
  func_00688CA0(param_3,aiStack_40);
  uVar2 = func_00691D84(param_2,aiStack_40);
  if (-1 < (int)uVar2) {
    puVar1 = func_00689A2C(&local_70,auStack_64,0x22);
    *(undefined1 *)puVar1[1] = 0;
    *puVar1 = DAT_004b1fe0;
    func_00688CA0(param_3,&local_70);
    (**(code **)(local_70 + 8))(&local_70);
    puVar1 = DAT_004b1fe4;
    iVar3 = 0;
    do {
      if (*(char *)(local_6c + iVar3) == '\0') break;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x40001);
    if (*(int *)(param_1 + 0x20) == 0) {
      iVar3 = 1;
    }
    else {
      iVar3 = func_0010983C(*DAT_004b1fe4,*(int *)(param_1 + 0x20));
    }
    puVar4 = (undefined4 *)func_0010BAB4(0x3c);
    puVar5 = (undefined4 *)0x0;
    if (puVar4 != (undefined4 *)0x0) {
      puVar4[1] = param_2[0x670d];
      puVar4[2] = 0x13;
      *puVar4 = DAT_004b1fe8;
      puVar4[3] = uVar2;
      puVar4 = func_00689A2C(puVar4 + 4,puVar4 + 7,0x20);
      *puVar4 = DAT_004b1fec;
      func_00689894((int)puVar4,&local_70,0xffffffff);
      puVar5 = puVar4 + -4;
      *puVar4 = DAT_004b1ff0;
    }
    func_0048C378((int *)(param_1 + 0x18b4),0,puVar5);
    if (iVar3 != 1) {
      func_0010983C(*puVar1,iVar3);
    }
  }
  return;
}

