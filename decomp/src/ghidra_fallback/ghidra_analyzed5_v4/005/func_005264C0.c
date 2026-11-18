#include "ghidra_types.h"

extern int func_00526744(int param_1,int param_2);
extern int func_00526854(int param_1,int param_2);
extern int func_00526964(int param_1,int param_2);
extern int func_00526A74(int param_1,int param_2);
extern int func_00526B84(int param_1,int param_2);
extern int func_00526C94(int param_1,int param_2);
extern int func_00526DA4(int param_1,int param_2);
extern int func_00526EB4(int param_1,int param_2);
extern int func_00526FC4(int param_1,int param_2);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int func_00653004(int *param_1,int *param_2,int *param_3,undefined1 param_4,uint param_5, undefined2 param_6);
extern int *DAT_00526710;
extern undefined4 *DAT_00526714;
extern int DAT_00526718;

// USA 005264C0 <- EU 00526498 (Ghidra, non-matching)
// GLOBAL DAT_00526710 int *
// GLOBAL DAT_00526714 undefined4 *
// GLOBAL DAT_00526718 int

undefined4 func_005264C0(int param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 ((int *)(albw_frame + 0x0))
  puVar2 = DAT_00526714;
  cVar1 = *(char *)(param_1 + 0x4cb);
  if (cVar1 == '\0') {
    iVar4 = *DAT_00526710;
    if (iVar4 != 0) {
      puVar3 = (undefined4 *)func_005841A8(iVar4,*DAT_00526714,*(int **)(DAT_00526718 + iVar4));
      if (*(undefined4 **)(iVar4 + 0x3dbc8) != puVar3) {
        do {
          if ((int *)*puVar3 != (int *)0x0) {
            if (param_2 == 0) {
              return 1;
            }
            local_20[0] = *(int *)(param_1 + 0x2cc);
            func_00653004((int *)*puVar3,local_20,(int *)(param_1 + 0x3d0),
                          *(undefined1 *)(param_1 + 0x4ca),(int)*(short *)(param_1 + 0x30),
                          *(undefined2 *)(param_1 + 0x32));
            return 1;
          }
          puVar3 = (undefined4 *)func_005841A8(iVar4,*puVar2,puVar3 + 1);
        } while (*(undefined4 **)(iVar4 + 0x3dbc8) != puVar3);
      }
    }
  }
  else {
    if (cVar1 == '\x01') {
      iVar4 = func_00526854(param_1,param_2);
      if (iVar4 != 0) {
        return 1;
      }
      iVar4 = func_00526DA4(param_1,param_2);
    }
    else if (cVar1 == '\x02') {
      iVar4 = func_00526964(param_1,param_2);
      if (iVar4 != 0) {
        return 1;
      }
      iVar4 = func_00526744(param_1,param_2);
      if (iVar4 != 0) {
        return 1;
      }
      iVar4 = func_00526B84(param_1,param_2);
      if (iVar4 != 0) {
        return 1;
      }
      iVar4 = func_00526C94(param_1,param_2);
      if (iVar4 != 0) {
        return 1;
      }
      iVar4 = func_00526FC4(param_1,param_2);
    }
    else if (cVar1 == '\x04') {
      iVar4 = func_00526964(param_1,param_2);
      if (iVar4 != 0) {
        return 1;
      }
      iVar4 = func_00526744(param_1,param_2);
      if (iVar4 != 0) {
        return 1;
      }
      iVar4 = func_00526B84(param_1,param_2);
      if (iVar4 != 0) {
        return 1;
      }
      iVar4 = func_00526C94(param_1,param_2);
      if (iVar4 != 0) {
        return 1;
      }
      iVar4 = func_00526FC4(param_1,param_2);
      if (iVar4 != 0) {
        return 1;
      }
      iVar4 = func_00526854(param_1,param_2);
      if (iVar4 != 0) {
        return 1;
      }
      iVar4 = func_00526854(param_1,param_2);
    }
    else {
      if (cVar1 != '\x03') {
        return 0;
      }
      iVar4 = func_00526A74(param_1,param_2);
      if (iVar4 != 0) {
        return 1;
      }
      iVar4 = func_00526EB4(param_1,param_2);
    }
    if (iVar4 != 0) {
      return 1;
    }
  }
  return 0;
}

