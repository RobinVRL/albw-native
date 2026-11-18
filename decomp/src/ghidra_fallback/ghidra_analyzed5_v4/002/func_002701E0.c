#include "ghidra_types.h"

extern int func_0010B954(int param_1,int param_2,int *param_3,int param_4,int param_5);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_0016CF38(int *param_1,int *param_2,int *param_3);
extern int func_0016D9C0(undefined4 *param_1);
extern int *DAT_00270310;
extern undefined4 DAT_00270314;
extern undefined4 DAT_00270318;
extern undefined4 DAT_0027031c;
extern undefined1 *DAT_00270320;
extern undefined4 DAT_00270324;

// USA 002701E0 <- EU 00270208 (Ghidra, non-matching)
// GLOBAL DAT_00270310 int *
// GLOBAL DAT_00270314 undefined4
// GLOBAL DAT_00270318 undefined4
// GLOBAL DAT_0027031c undefined4
// GLOBAL DAT_00270320 undefined1 *
// GLOBAL DAT_00270324 undefined4

int func_002701E0(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined4 *)(albw_frame + 0x0))
  #define local_1c (*(undefined4 *)(albw_frame + 0x4))
  piVar1 = DAT_00270310;
  if (*DAT_00270310 == 0) {
    puVar4 = (undefined4 *)func_0010CEE0(0x60,param_1,4);
    if (puVar4 == (undefined4 *)0x0) {
      piVar1[1] = 0;
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar5 = func_0010DA7C(puVar4,param_1,3);
      *puVar5 = DAT_00270314;
      piVar1[1] = (int)puVar5;
      puVar4[4] = 0;
      puVar4[7] = 0;
      puVar4[8] = 0;
      *(undefined1 *)(puVar4 + 0x17) = 0;
      *(undefined1 *)((int)puVar4 + 0x5d) = 0;
      puVar6 = (undefined4 *)func_0010BAB4(0x38);
      puVar5 = (undefined4 *)0x0;
      if (puVar6 != (undefined4 *)0x0) {
        puVar5 = func_0016D9C0(puVar6);
      }
      puVar4[4] = puVar5;
      uVar2 = DAT_0027031c;
      local_1c = DAT_00270318;
      local_20 = DAT_0027031c;
      func_0016CF38((int *)puVar4[4],&local_20,(int *)0x0);
      puVar3 = DAT_00270320;
      iVar7 = puVar4[4];
      *(undefined1 *)(iVar7 + 0x14) = DAT_00270320[3];
      *(undefined1 *)(iVar7 + 0x15) = puVar3[2];
      *(undefined1 *)(iVar7 + 0x16) = puVar3[1];
      *(undefined1 *)(iVar7 + 0x17) = *puVar3;
      local_20 = uVar2;
      local_1c = DAT_00270324;
      piVar8 = func_0010B954(0x1e000,(int)&local_20,(int *)0x0,1,0);
      puVar4[0x16] = piVar8;
      puVar4[5] = 0;
      puVar4[6] = 0;
    }
    *piVar1 = (int)puVar4;
  }
  return *piVar1;
}

