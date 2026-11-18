#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0012E794(int param_1);
extern int func_0014A354(int param_1,int param_2);
extern int func_0014ABEC(int param_1);
extern int func_0014AE1C(int param_1,int param_2);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_00323BCC(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern int func_00323BD8(int param_1);
extern int func_004E9FBC(int param_1);
extern int func_00532C78(int param_1);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern int func_0058D808(int param_1);
extern int func_0058D90C(int param_1);
extern int func_0058DB74(int param_1);
extern int func_0066C88C(undefined4 *param_1,undefined1 param_2);
extern int *DAT_004420b8;
extern int *DAT_004420bc;
extern float DAT_004420c0;
extern int DAT_004420c4;
extern int *DAT_004420d8;
extern int *DAT_004420dc;
extern uint *DAT_004420e0;
extern undefined4 *DAT_004420e4;
extern undefined4 DAT_004420e8;
extern int *DAT_004420ec;
extern int *DAT_004420f0;
extern char s_SE_S_CANCEL_004420f4[];
extern char s_SE_S_PAUSE_EXIT_004420c8[];
extern char s_SE_S_SELECT_00442100[];

// USA 00441E44 <- EU 00441E24 (Ghidra, non-matching)
// GLOBAL DAT_004420b8 int *
// GLOBAL DAT_004420bc int *
// GLOBAL DAT_004420c0 float
// GLOBAL DAT_004420c4 int
// GLOBAL DAT_004420d8 int *
// GLOBAL DAT_004420dc int *
// GLOBAL DAT_004420e0 uint *
// GLOBAL DAT_004420e4 undefined4 *
// GLOBAL DAT_004420e8 undefined4
// GLOBAL DAT_004420ec int *
// GLOBAL DAT_004420f0 int *
// GLOBAL s_SE_S_CANCEL_004420f4 string
// GLOBAL s_SE_S_PAUSE_EXIT_004420c8 string
// GLOBAL s_SE_S_SELECT_00442100 string

undefined4 func_00441E44(int param_1,undefined4 param_2,undefined *param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  piVar1 = DAT_004420b8;
  if ((*(char *)(*(int *)(param_1 + 0xc0) + 0x49) == '\0') ||
     (bVar4 = func_00532C78(*(int *)(param_1 + 0xc0) + 0x38), piVar2 = DAT_004420d8, bVar4)) {
    iVar7 = DAT_004420c4;
    if (*(char *)(*(int *)(param_1 + 0xc0) + 0x49) == '\0') {
      uVar5 = *(uint *)(*DAT_004420bc + (uint)*(byte *)(param_1 + 0x70) * 400 + 0x20);
      if ((uVar5 & 1) == 0) {
        if ((uVar5 & 2) != 0) {
          fVar9 = DAT_004420c0;
          func_0066C88C((undefined4 *)(param_1 + 0x98),5);
          iVar8 = *(int *)(param_1 + 0xbc);
          func_002317C0((undefined2 *)(iVar8 + 0x38),fVar9);
          *(undefined1 *)(iVar8 + 0x49) = 1;
          local_24 = s_SE_S_CANCEL_004420f4;
          local_28 = iVar7;
          return func_00587F74(*piVar1,&local_28,0);
        }
        if (((uVar5 & 0x40000) != 0 || (uVar5 & 0x400000) != 0) ||
           ((uVar5 & 0x80000) != 0 || (uVar5 & 0x800000) != 0)) {
          local_24 = s_SE_S_SELECT_00442100;
          local_28 = DAT_004420c4;
          func_00587F74(*piVar1,&local_28,0);
          return func_0066C88C((undefined4 *)(param_1 + 0x98),5);
        }
      }
      else {
        local_24 = s_SE_S_PAUSE_EXIT_004420c8;
        local_28 = DAT_004420c4;
        fVar9 = DAT_004420c0;
        func_00587F74(*piVar1,&local_28,0);
        iVar7 = *(int *)(param_1 + 0xc0);
        func_002317C0((undefined2 *)(iVar7 + 0x38),fVar9);
        *(undefined1 *)(iVar7 + 0x49) = 1;
      }
    }
  }
  else {
    iVar7 = func_0058D90C(*DAT_004420d8);
    if (iVar7 == 0) {
      piVar6 = (int *)func_0014A354(*DAT_004420dc,0);
      if (((*DAT_004420e0 & 1) == 0) && (iVar7 = func_00100174((int *)DAT_004420e0), iVar7 != 0)) {
        *DAT_004420e4 = DAT_004420e8;
      }
      if ((piVar6 == (int *)0x0) ||
         (iVar7 = (**(code **)(*piVar6 + 8))(piVar6,DAT_004420e4), iVar7 == 0)) {
        piVar6 = (int *)0x0;
      }
      if (piVar6 != (int *)0x0) {
        func_00323BCC((int)piVar6,0x78,2,0x1e);
      }
      piVar3 = DAT_004420ec;
      iVar7 = func_0014ABEC(*DAT_004420ec);
      if (iVar7 != 0) {
        iVar7 = func_0058DB74(*piVar2);
        if ((iVar7 == 0) && (iVar7 = func_0058D808(*piVar2), iVar7 != 0)) {
          func_0014AE1C(*piVar3,0);
        }
        *(undefined1 *)(*piVar1 + 0x79) = 0;
        func_004E9FBC(*piVar1);
        func_0012E794(*DAT_004420f0);
        func_0066C88C((undefined4 *)(param_1 + 0x98),8);
      }
      if (piVar6 != (int *)0x0) {
        return func_00323BD8((int)piVar6);
      }
    }
  }
  return 0;
}

