#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010B954(int param_1,int param_2,int *param_3,int param_4,int param_5);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010DB90(void);
extern int func_0014D78C(undefined4 *param_1);
extern int func_001E38D4(undefined2 *param_1);
extern int func_0043B4F0(undefined4 *param_1);
extern int func_0043E278(undefined4 *param_1,int param_2);
extern int func_00440404(undefined4 *param_1);
extern int func_00442EAC(undefined4 *param_1);
extern int func_0044F34C(undefined4 *param_1);
extern int func_00462CB0(undefined4 *param_1);
extern int func_0046C0FC(undefined4 *param_1);
extern int func_00486E28(undefined4 *param_1);
extern int func_004A107C(int param_1,int param_2,int *param_3,int param_4,int param_5);
extern int func_004B92E4(int param_1);
extern int func_004B9958(int param_1,undefined4 param_2);
extern int func_00503CA4(int param_1,uint param_2,int param_3);
extern int *DAT_0051940c;
extern int *DAT_00519410;
extern undefined4 *DAT_00519414;
extern undefined4 DAT_00519424;
extern char s_UIMgrGameMsgShare_00519428[];
extern char s_UIMgrGame_00519418[];

// USA 005191F4 <- EU 005191CC (Ghidra, non-matching)
// GLOBAL DAT_0051940c int *
// GLOBAL DAT_00519410 int *
// GLOBAL DAT_00519414 undefined4 *
// GLOBAL DAT_00519424 undefined4
// GLOBAL s_UIMgrGameMsgShare_00519428 string
// GLOBAL s_UIMgrGame_00519418 string

void func_005191F4(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  undefined2 *puVar6;
  int iVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(undefined4 *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  puVar2 = (undefined4 *)func_0010BAB4(0x48);
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = func_0014D78C(puVar2);
  }
  *(undefined4 **)(param_1 + 300) = puVar3;
  if (*(char *)(*DAT_0051940c + 0x25) == '\0') {
    func_00503CA4(*DAT_00519410,8,0);
    puVar3 = DAT_00519414;
    piVar4 = (int *)func_0010DB90();
    uVar1 = DAT_00519424;
    local_2c = s_UIMgrGame_00519418;
    local_30 = DAT_00519424;
    piVar4 = func_004A107C(0,(int)&local_30,piVar4,1,0);
    if (piVar4 == (int *)0x0) {
      iVar7 = 1;
    }
    else {
      iVar7 = func_0010983C(*puVar3,piVar4);
    }
    local_24 = s_UIMgrGameMsgShare_00519428;
    local_28 = uVar1;
    piVar5 = func_0010B954(0x11800,(int)&local_28,(int *)0x0,1,0);
    *(int **)(param_1 + 0x1c) = piVar5;
    *(int *)(param_1 + 0x18) = param_1 + 0x40;
    puVar2 = (undefined4 *)func_0010BAB4(0x1a0);
    piVar5 = (int *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      piVar5 = func_0043E278(puVar2,param_1 + 0x136);
    }
    *(int **)(param_1 + 0x80) = piVar5;
    func_004B9958((int)piVar5,4);
    puVar2 = (undefined4 *)func_0010BAB4(0x74);
    piVar5 = (int *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      piVar5 = func_0043B4F0(puVar2);
    }
    *(int **)(param_1 + 0x84) = piVar5;
    func_004B9958((int)piVar5,4);
    puVar2 = (undefined4 *)func_0010BAB4(0x74);
    piVar5 = (int *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      piVar5 = func_00486E28(puVar2);
    }
    *(int **)(param_1 + 0x88) = piVar5;
    func_004B9958((int)piVar5,0x10);
    puVar2 = (undefined4 *)func_0010BAB4(0x180);
    piVar5 = (int *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      piVar5 = func_00440404(puVar2);
    }
    *(int **)(param_1 + 0xe4) = piVar5;
    func_004B9958((int)piVar5,2);
    puVar2 = (undefined4 *)func_0010BAB4(0xcc);
    piVar5 = (int *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      piVar5 = func_00442EAC(puVar2);
    }
    *(int **)(param_1 + 0xec) = piVar5;
    func_004B9958((int)piVar5,8);
    puVar2 = (undefined4 *)func_0010BAB4(0xd0);
    piVar5 = (int *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      piVar5 = func_0046C0FC(puVar2);
    }
    *(int **)(param_1 + 0xf0) = piVar5;
    func_004B9958((int)piVar5,2);
    puVar2 = (undefined4 *)func_0010BAB4(0x98);
    piVar5 = (int *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      piVar5 = func_00462CB0(puVar2);
    }
    *(int **)(param_1 + 0xf4) = piVar5;
    func_004B9958((int)piVar5,8);
    puVar6 = (undefined2 *)func_0010BAB4(0x78);
    puVar2 = (undefined4 *)0x0;
    if (puVar6 != (undefined2 *)0x0) {
      puVar2 = func_001E38D4(puVar6);
    }
    *(undefined4 **)(param_1 + 0x130) = puVar2;
    func_004B92E4((int)puVar2);
    puVar2 = (undefined4 *)func_0010BAB4(0x88);
    piVar5 = (int *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      piVar5 = func_0044F34C(puVar2);
    }
    *(int **)(param_1 + 0x110) = piVar5;
    (**(code **)(*piVar4 + 0x14))(piVar4);
    if (iVar7 != 1) {
      func_0010983C(*puVar3,iVar7);
    }
  }
  return;
}

