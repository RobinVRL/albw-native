#include "ghidra_types.h"

extern int func_001788DC(int param_1,undefined4 *param_2);
extern int func_001B6C04(int param_1);
extern int func_002313DC(int param_1);
extern int func_00297138(int param_1,int *param_2);
extern int func_0034C57C(int param_1,int param_2);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern int func_0066E448(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00473914;
extern int DAT_00473928;
extern int *DAT_0047392c;
extern undefined4 *DAT_00473930;
extern int *DAT_00473934;
extern int *DAT_00473938;
extern char s_FANFARE_CLEAR_00473918[];

// USA 0047379C <- EU 00473774 (Ghidra, non-matching)
// GLOBAL DAT_00473914 int *
// GLOBAL DAT_00473928 int
// GLOBAL DAT_0047392c int *
// GLOBAL DAT_00473930 undefined4 *
// GLOBAL DAT_00473934 int *
// GLOBAL DAT_00473938 int *
// GLOBAL s_FANFARE_CLEAR_00473918 string

undefined4 func_0047379C(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(undefined4 *)(albw_frame + 0xc))
  #define local_30 ((int *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x24))
  iVar2 = *(int *)(*DAT_00473914 + 0x14);
  cVar1 = '\0';
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + 0xd76);
  }
  if (iVar2 != 0 && cVar1 != '\0') {
    cVar1 = '\x01';
  }
  *(char *)(param_1 + 0xad) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x22) = 2;
    *(undefined2 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x2e) = 3;
    *(undefined2 *)(param_1 + 0x2c) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x22) = 0;
    *(undefined2 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x2e) = 1;
    *(undefined2 *)(param_1 + 0x2c) = 0;
  }
  func_002313DC(param_1 + 0x20);
  func_0034C57C(*(int *)(param_1 + 0x98),0);
  func_0034C57C(*(int *)(param_1 + 0x9c),0);
  piVar3 = DAT_0047392c;
  iVar2 = DAT_00473928;
  local_1c = s_FANFARE_CLEAR_00473918;
  local_30[4] = DAT_00473928;
  func_00587F74(*DAT_0047392c,local_30 + 4,0);
  local_1c = (char *)*DAT_00473930;
  local_30[4] = iVar2;
  func_00297138(*piVar3,local_30 + 4);
  if (*(int *)(param_1 + 0xa8) != 0) {
    local_30[0] = 0;
    local_30[1] = 0;
    local_30[3] = 0xffffffff;
    local_30[2] = 0;
    local_34 = *(undefined4 *)(*(int *)(param_1 + 0xa8) + 0xa8);
    local_38 = iVar2;
    func_005826A4(*DAT_00473938,local_30,DAT_00473934,&local_38);
    if (local_30[0] != 0) {
      func_001788DC(*(int *)(param_1 + 0xa4),local_30);
      iVar2 = *(int *)(param_1 + 0xa4);
      piVar3 = *(int **)(param_1 + 0xa8);
      *(undefined2 *)(iVar2 + 0x32) = 0;
      *(undefined1 *)(iVar2 + 0x3d) = 0;
      (**(code **)(*piVar3 + 0x60))
                (piVar3,*(undefined4 *)(*(int *)(param_1 + 0xa4) + 8),0,
                 *(ushort *)(*(int *)(param_1 + 0xa4) + 0x20) >> 1);
    }
  }
  func_0066E448((undefined4 *)(param_1 + 0x74),0);
  *(undefined1 *)(param_1 + 0xac) = 0;
  return func_001B6C04(param_1);
}

