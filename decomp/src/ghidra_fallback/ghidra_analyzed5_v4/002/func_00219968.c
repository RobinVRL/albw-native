#include "ghidra_types.h"

extern int func_002AED68(int param_1,undefined2 param_2);
extern int func_002AF5FC(int param_1,undefined2 param_2,int param_3);
extern int func_004FC218(int param_1,char param_2,int param_3,ushort param_4);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_00564A78(int param_1,int *param_2);
extern int DAT_00219a90;
extern int DAT_00219a94;
extern int *DAT_00219a98;
extern int DAT_00219aa4;
extern char s_center_00219a9c[];

// USA 00219968 <- EU 00219968 (Ghidra, non-matching)
// GLOBAL DAT_00219a90 int
// GLOBAL DAT_00219a94 int
// GLOBAL DAT_00219a98 int *
// GLOBAL DAT_00219aa4 int
// GLOBAL s_center_00219a9c string

int * func_00219968(undefined4 *param_1,uint *param_2,undefined1 param_3,uint *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint in_fpscr;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  piVar2 = func_004FD464(param_1,param_2,param_4);
  iVar1 = DAT_00219a94;
  iVar3 = DAT_00219a90;
  *piVar2 = DAT_00219a90;
  piVar2[200] = iVar3 + 0x84;
  piVar2[0x22f] = iVar1;
  piVar2[0x230] = iVar1;
  piVar2[0x231] = iVar1;
  piVar2[0x232] = iVar1;
  piVar2[0x233] = iVar1;
  piVar2[0x234] = 0;
  piVar2[0x235] = 0;
  piVar2[0x236] = 0;
  piVar2[0x237] = 0;
  *(undefined2 *)(piVar2 + 0x238) = 0;
  *(undefined2 *)((int)piVar2 + 0x8e2) = 0;
  *(undefined2 *)(piVar2 + 0x239) = 0;
  *(undefined2 *)((int)piVar2 + 0x8e6) = 0;
  *(undefined2 *)(piVar2 + 0x23a) = 10;
  *(undefined2 *)((int)piVar2 + 0x8ea) = 0;
  *(undefined1 *)(piVar2 + 0x23b) = 0;
  *(undefined1 *)((int)piVar2 + 0x8ed) = param_3;
  local_18 = DAT_00219aa4;
  piVar4 = DAT_00219a98;
  iVar3 = (int)*(short *)((int)piVar2 + 0x32);
  if (0xe < iVar3 - 1U) {
    iVar3 = 5;
  }
  iVar3 = ALBW_AS_U32(VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3));
  piVar2[0x232] = iVar3;
  piVar4 = (int *)(*(int *)(*piVar4 + 0x3dbe8) + 0x10);
  if (*piVar4 != 0) {
    *piVar4 = 0;
  }
  local_14 = s_center_00219a9c;
  uVar5 = func_00564A78(piVar2[0x103],&local_18);
  piVar2[0x234] = uVar5;
  func_002AF5FC((int)piVar2,7,-1);
  func_002AED68((int)piVar2,7);
  *(undefined1 *)((int)piVar2 + 0x77d) = 6;
  *(undefined1 *)((int)piVar2 + 0x77e) = 0xff;
  *(undefined1 *)((int)piVar2 + 0x77f) = 0;
  func_004FC218((int)piVar2,'\x05',-1,0x7fff);
  return piVar2;
}

