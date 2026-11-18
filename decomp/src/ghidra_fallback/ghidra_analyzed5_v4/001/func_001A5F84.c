#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_001A5E58(int param_1);
extern int func_00261694(int param_1);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004F9FC4(int param_1,int param_2);
extern int func_004FA124(int *param_1,int param_2,int param_3);
extern int func_004FC218(int param_1,char param_2,int param_3,ushort param_4);
extern int func_005283C8(int param_1,float *param_2);
extern int func_0065A6FC(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_001a6198;
extern int DAT_001a619c;
extern char s_Break_001a61bc[];
extern char s_SE_HipLoopPersona_BREAK_001a61c4[];
extern char s_SE_HipLoopPersona_STOLEN_001a61a0[];

// USA 001A5F84 <- EU 001A5F84 (Ghidra, non-matching)
// GLOBAL DAT_001a6198 undefined4
// GLOBAL DAT_001a619c int
// GLOBAL s_Break_001a61bc string
// GLOBAL s_SE_HipLoopPersona_BREAK_001a61c4 string
// GLOBAL s_SE_HipLoopPersona_STOLEN_001a61a0 string

int func_001A5F84(int *param_1,int param_2,float *param_3)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  ushort uVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  #define aiStack_28 ((int *)(albw_frame + 0x8))
  if (param_2 != 0x1d) {
    uVar4 = (ushort)DAT_001a6198;
    if ((char)param_1[0x241] == '\0') {
      bVar2 = func_005283C8((int)param_1,param_3);
      iVar1 = DAT_001a619c;
      if ((bVar2) && (*(char *)(param_3 + 9) == '\t')) {
        param_1[0x242] = param_1[0x1e7];
        *(undefined1 *)(param_1 + 0x241) = 1;
        piVar3 = func_00261694(param_1[0x240]);
        param_1[0x24a] = *piVar3;
        param_1[0x24b] = piVar3[1];
        param_1[0x24c] = piVar3[2];
        param_1[0x250] = param_1[0xfa];
        param_1[0x251] = 0;
        func_004F9FC4((int)param_1,param_1[0x10f]);
        func_004FA124(param_1,(int)*(char *)(param_3 + 9),0);
        func_0065A6FC(param_1 + 0x22f,3);
        local_2c = s_SE_HipLoopPersona_STOLEN_001a61a0;
        local_30 = iVar1;
        func_00150A84(param_1,&local_30,0);
        return 0;
      }
      if (*(char *)(param_3 + 9) == '\x0f') {
        func_004FC218((int)param_1,'\x06',-1,uVar4);
        if (param_1[0xd1] != 0) {
          func_004A1B9C(aiStack_28,param_1[0xd1],(uint *)s_Break_001a61bc);
        }
        local_2c = s_SE_HipLoopPersona_BREAK_001a61c4;
        local_30 = iVar1;
        func_00150A84(param_1,&local_30,0);
        func_001A5E58((int)param_1);
      }
      else {
        bVar2 = func_005283C8((int)param_1,param_3);
        if ((bVar2) && (*(char *)(param_3 + 9) == '\n')) {
          func_004FC218((int)param_1,'\x04',-1,uVar4);
          func_004F9FC4((int)param_1,param_1[0x10f]);
          func_004FA124(param_1,(int)*(char *)(param_3 + 9),0);
          return 0x21;
        }
      }
    }
    if (*(char *)((int)param_1 + 0x94e) == '\0') {
      func_004FC218((int)param_1,'\x06',-1,uVar4);
    }
    else {
      func_004FC218((int)param_1,'\x04',-1,uVar4);
      func_004FA124(param_1,(int)*(char *)(param_3 + 9),0);
    }
  }
  param_1[0x168] = param_1[0x168] | 0x80;
  return param_2;
}

