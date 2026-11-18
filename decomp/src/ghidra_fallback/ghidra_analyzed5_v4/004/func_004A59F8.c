#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern float func_0034C0E4(int param_1,int param_2,int param_3,undefined4 param_4);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int DAT_004a5bb0;
extern undefined DAT_004a5bd0;
extern char s_SE_S_COUNT_NG_004a5bec[];
extern char s_SE_S_LIVER_BTN_DOWN_FIN_004a5c14[];
extern char s_SE_S_LIVER_BTN_DOWN_START_004a5bb4[];
extern char s_SE_S_LIVER_BTN_UP_START_004a5bfc[];
extern char s__SE_S_LIVER_BTN_UP_FIN_004a5bd3[];
extern undefined4 _DAT_004a5bd0;

// USA 004A59F8 <- EU 004A59D0 (Ghidra, non-matching)
// GLOBAL DAT_004a5bb0 int
// GLOBAL DAT_004a5bd0 undefined
// GLOBAL s_SE_S_COUNT_NG_004a5bec string
// GLOBAL s_SE_S_LIVER_BTN_DOWN_FIN_004a5c14 string
// GLOBAL s_SE_S_LIVER_BTN_DOWN_START_004a5bb4 string
// GLOBAL s_SE_S_LIVER_BTN_UP_START_004a5bfc string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_004A59F8(int param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  char cVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  iVar4 = DAT_004a5bb0;
  cVar2 = *(char *)(param_1 + 0x86);
  cVar3 = *(char *)(param_1 + 0x84);
  if (*(char *)(param_1 + 0x87) == '\x01') {
    cVar1 = cVar3 + '\x01';
    *(char *)(param_1 + 0x84) = cVar1;
    cVar5 = cVar2;
    if ((-1 < cVar1) && (cVar5 = cVar1, cVar2 < cVar1)) {
      cVar5 = '\0';
    }
    *(char *)(param_1 + 0x84) = cVar5;
    func_0034C0E4(*(int *)(param_1 + 0x44),(int)cVar3,(int)cVar5,5);
    if (*(char *)(param_1 + 0x86) == '\0') {
      local_1c = s_SE_S_COUNT_NG_004a5bec;
      local_20 = iVar4;
      func_00533078(param_1,&local_20,0);
    }
    else {
      local_20 = iVar4;
      if (*(char *)(param_1 + 0x84) == *(char *)(param_1 + 0x86)) {
        local_1c = s__SE_S_LIVER_BTN_UP_FIN_004a5bd3 + 1;
        func_00533078(param_1,&local_20,0);
        *(undefined1 *)(param_1 + 0x89) = 1;
      }
      else {
        local_1c = s_SE_S_LIVER_BTN_UP_START_004a5bfc;
        func_00533078(param_1,&local_20,0);
        *(undefined1 *)(param_1 + 0x89) = 0;
      }
    }
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x62) = 3;
  }
  else {
    cVar1 = cVar3 + -1;
    *(char *)(param_1 + 0x84) = cVar1;
    cVar5 = cVar2;
    if ((-1 < cVar1) && (cVar5 = cVar1, cVar2 < cVar1)) {
      cVar5 = '\0';
    }
    *(char *)(param_1 + 0x84) = cVar5;
    func_0034C0E4(*(int *)(param_1 + 0x44),(int)cVar3,(int)cVar5,5);
    if (*(char *)(param_1 + 0x86) == '\0') {
      local_1c = s_SE_S_COUNT_NG_004a5bec;
      local_20 = iVar4;
      func_00533078(param_1,&local_20,0);
    }
    else {
      local_20 = iVar4;
      if (*(char *)(param_1 + 0x84) == '\0') {
        local_1c = s_SE_S_LIVER_BTN_DOWN_FIN_004a5c14;
        func_00533078(param_1,&local_20,0);
        *(undefined1 *)(param_1 + 0x89) = 1;
      }
      else {
        local_1c = s_SE_S_LIVER_BTN_DOWN_START_004a5bb4;
        func_00533078(param_1,&local_20,0);
        *(undefined1 *)(param_1 + 0x89) = 0;
      }
    }
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x62) = 4;
  }
  *(undefined2 *)(param_1 + 0x60) = 0;
  func_002317C0((undefined2 *)(param_1 + 0x60),ALBW_AS_F32(_DAT_004a5bd0));
  return;
}

