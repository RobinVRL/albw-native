#include "ghidra_types.h"

extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_003FF898(int param_1,int param_2);
extern int func_003FF904(int param_1,int param_2);
extern int func_00441330(undefined4 *param_1,int *param_2,int *param_3,int *param_4);
extern int func_005229AC(int *param_1,int *param_2);
extern int DAT_0045f500;
extern int DAT_0045f518;
extern int DAT_0045f51c;
extern int DAT_0045f520;
extern undefined DAT_0045f524;
extern undefined DAT_0045f528;
extern undefined DAT_0045f530;
extern undefined4 DAT_0045f540;
extern undefined4 DAT_0045f544;
extern undefined4 DAT_0045f548;
extern char s_L_ArrowIcon_00_0045f4f0[];
extern char s_N_Window_00_0045f534[];
extern char s_T_ItemGetMessage_00_0045f504[];

// USA 0045F2F8 <- EU 0045F2D0 (Ghidra, non-matching)
// GLOBAL DAT_0045f500 int
// GLOBAL DAT_0045f518 int
// GLOBAL DAT_0045f51c int
// GLOBAL DAT_0045f520 int
// GLOBAL DAT_0045f524 undefined
// GLOBAL DAT_0045f528 undefined
// GLOBAL DAT_0045f530 undefined
// GLOBAL DAT_0045f540 undefined4
// GLOBAL DAT_0045f544 undefined4
// GLOBAL DAT_0045f548 undefined4
// GLOBAL s_L_ArrowIcon_00_0045f4f0 string
// GLOBAL s_N_Window_00_0045f534 string
// GLOBAL s_T_ItemGetMessage_00_0045f504 string

int * func_0045F2F8(undefined4 *param_1,uint param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(int *)(albw_frame + 0x8))
  #define local_44 (*(undefined4 *)(albw_frame + 0xc))
  #define local_40 (*(int *)(albw_frame + 0x10))
  #define local_3c (*(undefined4 *)(albw_frame + 0x14))
  #define local_38 (*(int *)(albw_frame + 0x18))
  #define local_34 (*(char * *)(albw_frame + 0x1c))
  #define iStack_30 (*(int *)(albw_frame + 0x20))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x24))
  #define iStack_28 (*(int *)(albw_frame + 0x28))
  #define pcStack_24 (*(char * *)(albw_frame + 0x2c))
  iVar4 = DAT_0045f500;
  local_34 = s_L_ArrowIcon_00_0045f4f0;
  local_38 = DAT_0045f500;
  iStack_28 = DAT_0045f500;
  pcStack_24 = s_T_ItemGetMessage_00_0045f504;
  if (param_2 < 3) {
    uStack_2c = *(undefined4 *)(DAT_0045f518 + param_2 * 4);
  }
  else {
    uStack_2c = *(undefined4 *)(DAT_0045f518 + 4);
  }
  iStack_30 = DAT_0045f500;
  piVar2 = func_00441330(param_1,&iStack_30,&iStack_28,&local_38);
  iVar6 = DAT_0045f520;
  iVar3 = DAT_0045f51c;
  piVar2[0xe] = DAT_0045f51c + 0xac;
  *piVar2 = iVar3;
  *(undefined2 *)(piVar2 + 0x39) = 0;
  *(undefined2 *)((int)piVar2 + 0xe6) = 0xffff;
  piVar2[0x3a] = iVar6;
  piVar2[0x3b] = 0;
  piVar5 = (int *)piVar2[7];
  func_0016773C((int)piVar5,3);
  local_34 = &DAT_0045f524;
  local_38 = iVar4;
  func_00166C20(piVar5,0,&local_38,0);
  local_34 = &DAT_0045f528;
  local_38 = iVar4;
  func_00166C20(piVar5,1,&local_38,0);
  local_34 = &DAT_0045f530;
  local_38 = iVar4;
  func_00166C20(piVar5,2,&local_38,0);
  piVar2[10] = (int)piVar5;
  *(undefined2 *)((int)piVar2 + 0x22) = 0;
  *(undefined2 *)(piVar2 + 8) = 0;
  piVar2[0xd] = (int)piVar5;
  *(undefined2 *)((int)piVar2 + 0x2e) = 2;
  *(undefined2 *)(piVar2 + 0xb) = 0;
  piVar2[0x3b] = (int)piVar5;
  *(undefined2 *)((int)piVar2 + 0xe6) = 1;
  *(undefined2 *)(piVar2 + 0x39) = 0;
  local_34 = s_N_Window_00_0045f534;
  local_38 = iVar4;
  iVar3 = func_005229AC((int *)piVar2[7],&local_38);
  if (iVar3 != 0) {
    *(int *)(iVar3 + 0x20) = iVar6;
    *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xef | 0x10;
  }
  cVar1 = (char)piVar2[0x22];
  local_48 = iVar4;
  local_44 = DAT_0045f540;
  iVar3 = func_005229AC((int *)piVar2[7],&local_48);
  if (iVar3 != 0) {
    if (cVar1 == '\0') {
      local_40 = iVar4;
      local_3c = DAT_0045f544;
      iVar4 = func_005229AC((int *)piVar2[7],&local_40);
    }
    else {
      if (cVar1 != '\x02') goto LAB_0045f4d8;
      local_40 = iVar4;
      local_3c = DAT_0045f548;
      iVar4 = func_005229AC((int *)piVar2[7],&local_40);
    }
    if (iVar4 != 0) {
      if (*(int *)(iVar3 + 0xc) != 0) {
        func_003FF904(*(int *)(iVar3 + 0xc),iVar3);
      }
      func_003FF898(iVar4,iVar3);
      *(byte *)(piVar2[7] + 0x70) = *(byte *)(piVar2[7] + 0x70) | 2;
      *(char *)(piVar2 + 0x22) = cVar1;
    }
  }
LAB_0045f4d8:
  *(undefined1 *)((int)piVar2 + 0xe2) = 1;
  *(undefined1 *)((int)piVar2 + 0xe3) = 1;
  return piVar2;
}

