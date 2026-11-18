#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0014A354(int param_1,int param_2);
extern int func_002FCC74(int *param_1,undefined2 param_2);
extern int func_00323BCC(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern int func_00323BD8(int param_1);
extern int func_004EF418(int param_1,byte *param_2,int param_3,int param_4);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern int func_00588090(int param_1,int param_2);
extern int *DAT_002d838c;
extern int *DAT_002d8390;
extern uint *DAT_002d8394;
extern undefined4 *DAT_002d8398;
extern undefined4 DAT_002d839c;
extern int *DAT_002d83a0;
extern int *DAT_002d83a4;
extern int DAT_002d83a8;
extern char s_SE_S_WARP_FLOOR_002d83ac[];
extern char s_SE_S_WARP_HOLE_002d83d4[];
extern char s_SE_S_WARP_HOLE_SAGE_OUT_002d83bc[];

// USA 002D815C <- EU 002D8138 (Ghidra, non-matching)
// GLOBAL DAT_002d838c int *
// GLOBAL DAT_002d8390 int *
// GLOBAL DAT_002d8394 uint *
// GLOBAL DAT_002d8398 undefined4 *
// GLOBAL DAT_002d839c undefined4
// GLOBAL DAT_002d83a0 int *
// GLOBAL DAT_002d83a4 int *
// GLOBAL DAT_002d83a8 int
// GLOBAL s_SE_S_WARP_FLOOR_002d83ac string
// GLOBAL s_SE_S_WARP_HOLE_002d83d4 string
// GLOBAL s_SE_S_WARP_HOLE_SAGE_OUT_002d83bc string

undefined4 func_002D815C(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  piVar1 = DAT_002d838c;
  if (*(char *)(param_1 + 0x75) != '\0') {
    iVar2 = *(int *)(param_1 + 0x2c);
    piVar6 = (int *)0x0;
    iVar5 = 3;
    if (*(short *)(iVar2 + 0x42) == 0x83) {
      uVar4 = (int)*(char *)(iVar2 + 0x154) - 9;
      bVar7 = uVar4 == 0xc;
      if (uVar4 < 0xd) {
        bVar7 = (int)*(char *)(iVar2 + 0x154) == (int)*(char *)(*DAT_002d838c + 0x18);
      }
      if (bVar7) {
        iVar5 = 10;
      }
      else {
        iVar5 = 8;
      }
      if (*(char *)(param_1 + 0xfa) != '\0') {
        iVar5 = 0;
        piVar3 = (int *)func_0014A354(*DAT_002d8390,0);
        if (piVar3 != (int *)0x0) {
          if (((*DAT_002d8394 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_002d8394), iVar2 != 0)
             ) {
            *DAT_002d8398 = DAT_002d839c;
          }
          iVar2 = (**(code **)(*piVar3 + 8))(piVar3,DAT_002d8398);
          if (iVar2 == 0) {
            piVar3 = (int *)0x0;
          }
          piVar6 = piVar3;
          if (piVar3 != (int *)0x0) {
            func_00323BCC((int)piVar3,0x96,0x1e,0x78);
          }
        }
      }
    }
    else if (*(short *)(iVar2 + 0x42) == 0x85) {
      uVar4 = (int)*(char *)(iVar2 + 0x154) - 9;
      bVar7 = uVar4 == 0xc;
      if (uVar4 < 0xd) {
        bVar7 = (int)*(char *)(iVar2 + 0x154) == (int)*(char *)(*DAT_002d838c + 0x18);
      }
      if (bVar7) {
        iVar5 = 9;
      }
      else {
        iVar5 = 7;
      }
    }
    iVar2 = func_004EF418(*piVar1,(byte *)(*(int *)(param_1 + 0x2c) + 0x154),iVar5,0);
    if (iVar2 != 0) {
      *(undefined1 *)(param_1 + 0x75) = 0;
    }
    if (*(char *)(param_1 + 0xfa) != '\0' && piVar6 != (int *)0x0) {
      func_00323BD8((int)piVar6);
    }
    *(undefined1 *)(param_1 + 0xfa) = 0;
  }
  iVar2 = DAT_002d83a8;
  piVar6 = DAT_002d83a4;
  piVar1 = DAT_002d83a0;
  if (*(char *)(param_1 + 0xfb) != '\0') {
    piVar3 = *(int **)(*(int *)(param_1 + 0x2c) + 100);
    if ((*(int **)(*DAT_002d83a0 + 0x44) == (int *)0x0) ||
       (*(int **)(*DAT_002d83a0 + 0x44) != piVar3)) {
      func_002FCC74(piVar3,0x3d);
      *(undefined1 *)(param_1 + 0xfb) = 0;
      local_24 = s_SE_S_WARP_FLOOR_002d83ac;
      local_28 = iVar2;
      func_00587F74(*piVar6,&local_28,0);
    }
  }
  if (*(char *)(param_1 + 0xfc) != '\0') {
    piVar3 = *(int **)(*(int *)(param_1 + 0x2c) + 100);
    if ((*(int **)(*piVar1 + 0x44) == (int *)0x0) || (*(int **)(*piVar1 + 0x44) != piVar3)) {
      func_002FCC74(piVar3,0x78);
      *(undefined1 *)(param_1 + 0xfc) = 0;
      bVar7 = func_00588090(*piVar6,0x11);
      local_28 = iVar2;
      if (!bVar7) {
        local_24 = s_SE_S_WARP_HOLE_002d83d4;
        return func_00587F74(*piVar6,&local_28,0);
      }
      local_24 = s_SE_S_WARP_HOLE_SAGE_OUT_002d83bc;
      func_00587F74(*piVar6,&local_28,0);
    }
  }
  return 0;
}

