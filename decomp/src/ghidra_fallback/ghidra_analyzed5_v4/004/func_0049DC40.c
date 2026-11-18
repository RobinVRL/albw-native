#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern int func_0010F1DC(int *param_1,int *param_2);
extern void func_0010F1F8(int *param_1,float fparam_0);
extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_0049FA78(undefined1 *param_1);
extern undefined4 DAT_0049de08;

// USA 0049DC40 <- EU 0049DC18 (Ghidra, non-matching)
// GLOBAL DAT_0049de08 undefined4

undefined4 func_0049DC40(int param_1,byte *param_2,int param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  float in_s0;
  
  iVar7 = param_1 + 4;
  func_0010C0B8(iVar7);
  piVar3 = *(int **)(param_1 + 0x8c);
  if (piVar3[2] < piVar3[5]) {
    piVar1 = (int *)piVar3[3];
    if (piVar1 == (int *)0x0) {
      puVar5 = (undefined1 *)0x0;
    }
    else {
      piVar3[3] = *piVar1;
      *piVar1 = 0;
      puVar2 = func_0049FA78((undefined1 *)(piVar1 + 1));
      puVar5 = puVar2 + -4;
      *(undefined4 *)(puVar2 + 0x80) = DAT_0049de08;
      *(undefined1 **)(puVar2 + 0x88) = puVar2 + 0x84;
      *(undefined4 *)(puVar2 + 0x8c) = 0;
      *(undefined1 **)(puVar2 + 0x84) = puVar2 + 0x84;
      *(undefined4 *)(puVar2 + 0x90) = 0;
      *(undefined4 *)(puVar2 + 0x94) = 0;
    }
    func_0010F1DC(piVar3,(int *)(puVar5 + 0x94));
    piVar3[2] = piVar3[2] + 1;
    if (puVar5 != (undefined1 *)0x0) {
      func_00110D44((undefined4 *)(puVar5 + 4),param_2,0x80);
      iVar4 = *(int *)(param_2 + 0x70);
      if (param_3 != 0) {
        if (*(char *)(param_3 + 0x38) != '\0') {
          iVar6 = *(int *)(param_3 + 0x1c);
          if (iVar6 != 0) {
            *(undefined4 *)(param_3 + 0x1c) = 0;
            func_0010F1F8((int *)(param_3 + 0x10),in_s0);
            *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + -1;
          }
          *(undefined1 *)(param_3 + 0x38) = 0;
        }
        iVar6 = *(int *)(param_3 + 0x1c);
        if (iVar6 != 0) {
          *(undefined4 *)(param_3 + 0x1c) = 0;
          func_0010F1F8((int *)(param_3 + 0x10),in_s0);
          *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + -1;
        }
        *(undefined1 **)(param_3 + 0x1c) = puVar5 + 0x88;
        func_0010F1DC((int *)(puVar5 + 0x88),(int *)(param_3 + 0x10));
        *(int *)(puVar5 + 0x90) = *(int *)(puVar5 + 0x90) + 1;
        *(undefined1 *)(param_3 + 0x38) = 1;
      }
      if (iVar4 != 0) {
        if (*(char *)(iVar4 + 0x38) != '\0') {
          iVar6 = *(int *)(iVar4 + 0x1c);
          if (iVar6 != 0) {
            *(undefined4 *)(iVar4 + 0x1c) = 0;
            func_0010F1F8((int *)(iVar4 + 0x10),in_s0);
            *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + -1;
          }
          *(undefined1 *)(iVar4 + 0x38) = 0;
        }
        iVar6 = *(int *)(iVar4 + 0x1c);
        if (iVar6 != 0) {
          *(undefined4 *)(iVar4 + 0x1c) = 0;
          func_0010F1F8((int *)(iVar4 + 0x10),in_s0);
          *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + -1;
        }
        *(undefined1 **)(iVar4 + 0x1c) = puVar5 + 0x88;
        func_0010F1DC((int *)(puVar5 + 0x88),(int *)(iVar4 + 0x10));
        *(int *)(puVar5 + 0x90) = *(int *)(puVar5 + 0x90) + 1;
        *(undefined1 *)(iVar4 + 0x38) = 1;
      }
      func_0010EEE0(iVar7);
      return 1;
    }
  }
  func_0010EEE0(iVar7);
  return 0;
}

