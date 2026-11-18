#include "ghidra_types.h"

extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_002313DC(int param_1);
extern int func_00441330(undefined4 *param_1,int *param_2,int *param_3,int *param_4);
extern undefined DAT_00489114;
extern int DAT_00489118;
extern int DAT_00489138;
extern char s_InText_0048913c[];
extern char s_Mn_StoryDemoB_00489128[];
extern char s_OutText_00489144[];
extern char s_T_Text_00_0048911c[];

// USA 00489050 <- EU 00489028 (Ghidra, non-matching)
// GLOBAL DAT_00489114 undefined
// GLOBAL DAT_00489118 int
// GLOBAL DAT_00489138 int
// GLOBAL s_InText_0048913c string
// GLOBAL s_Mn_StoryDemoB_00489128 string
// GLOBAL s_OutText_00489144 string
// GLOBAL s_T_Text_00_0048911c string

int * func_00489050(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  #define iStack_28 (*(int *)(albw_frame + 0x8))
  #define pcStack_24 (*(char * *)(albw_frame + 0xc))
  #define local_20 (*(int *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  iVar1 = DAT_00489118;
  local_2c = &DAT_00489114;
  local_30 = DAT_00489118;
  local_1c = s_T_Text_00_0048911c;
  local_20 = DAT_00489118;
  iStack_28 = DAT_00489118;
  pcStack_24 = s_Mn_StoryDemoB_00489128;
  piVar2 = func_00441330(param_1,&iStack_28,&local_20,&local_30);
  iVar3 = DAT_00489138 + 0xac;
  *piVar2 = DAT_00489138;
  piVar2[0xe] = iVar3;
  piVar4 = (int *)piVar2[7];
  func_0016773C((int)piVar4,2);
  local_2c = s_InText_0048913c;
  local_30 = iVar1;
  func_00166C20(piVar4,0,&local_30,0);
  local_2c = s_OutText_00489144;
  local_30 = iVar1;
  func_00166C20(piVar4,1,&local_30,0);
  piVar2[10] = (int)piVar4;
  *(undefined2 *)((int)piVar2 + 0x22) = 0;
  *(undefined2 *)(piVar2 + 8) = 0;
  piVar2[0xd] = (int)piVar4;
  *(undefined2 *)((int)piVar2 + 0x2e) = 1;
  *(undefined2 *)(piVar2 + 0xb) = 0;
  func_002313DC((int)(piVar2 + 8));
  *(undefined2 *)(piVar2 + 0x38) = 0;
  *(undefined1 *)((int)piVar2 + 0xe2) = 1;
  *(undefined1 *)((int)piVar2 + 0xf) = 0x12;
  return piVar2;
}

