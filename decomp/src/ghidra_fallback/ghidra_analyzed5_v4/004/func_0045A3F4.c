#include "ghidra_types.h"

extern int func_00166C00(int param_1,int param_2);
extern int func_004576CC(int param_1,uint param_2,int param_3,undefined4 param_4);
extern int func_0047FD30(int param_1,int *param_2);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern undefined4 *DAT_0045a4e0;
extern int *DAT_0045a4e4;
extern int DAT_0045a500;
extern int *DAT_0045a50c;
extern char s_Common_0045a504[];
extern char s_cmn_initial_playername_0045a4e8[];

// USA 0045A3F4 <- EU 0045A3CC (Ghidra, non-matching)
// GLOBAL DAT_0045a4e0 undefined4 *
// GLOBAL DAT_0045a4e4 int *
// GLOBAL DAT_0045a500 int
// GLOBAL DAT_0045a50c int *
// GLOBAL s_Common_0045a504 string
// GLOBAL s_cmn_initial_playername_0045a4e8 string

undefined4 func_0045A3F4(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_r3;
  bool bVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 ((int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  #define iStack_18 (*(int *)(albw_frame + 0x18))
  #define pcStack_14 (*(char * *)(albw_frame + 0x1c))
  iVar3 = *(int *)(param_1 + 0x1d8);
  cVar1 = *(char *)(iVar3 + 0xd);
  bVar5 = cVar1 == '\0';
  if (bVar5) {
    cVar1 = *(char *)(iVar3 + 0xe);
  }
  if (bVar5 && cVar1 == '\0') {
    *(undefined1 *)(iVar3 + 0xe) = 1;
  }
  func_004576CC(param_1,5,0,in_r3);
  iVar3 = *(int *)(param_1 + 0x1dc);
  cVar1 = *(char *)(iVar3 + 0xd);
  bVar5 = cVar1 == '\0';
  if (bVar5) {
    cVar1 = *(char *)(iVar3 + 0xe);
  }
  if (bVar5 && cVar1 == '\0') {
    *(undefined1 *)(iVar3 + 0xe) = 1;
  }
  puVar2 = DAT_0045a4e0;
  iVar3 = *(int *)(param_1 + 0x1e0);
  cVar1 = *(char *)(iVar3 + 0xd);
  bVar5 = cVar1 == '\0';
  if (bVar5) {
    cVar1 = *(char *)(iVar3 + 0xe);
  }
  if (bVar5 && cVar1 == '\0') {
    *(undefined1 *)(iVar3 + 0xe) = 1;
  }
  piVar4 = DAT_0045a4e4;
  *(undefined4 *)(param_1 + 0x220) = *puVar2;
  if (*piVar4 != 0) {
    local_30[3] = 0xffffffff;
    local_30[0] = 0;
    local_30[1] = 0;
    local_30[2] = 0;
    iStack_18 = DAT_0045a500;
    pcStack_14 = s_cmn_initial_playername_0045a4e8;
    local_30[4] = DAT_0045a500;
    local_1c = s_Common_0045a504;
    iVar3 = func_005826A4(*piVar4,local_30,local_30 + 4,&iStack_18);
    if (iVar3 != 0) {
      *(int *)(param_1 + 0x220) = local_30[0];
    }
  }
  piVar4 = (int *)(param_1 + 0x1e4);
  if (*(uint *)(param_1 + 0x214) < 3) {
    piVar4 = piVar4 + *(uint *)(param_1 + 0x214);
  }
  func_0047FD30(*(int *)(*piVar4 + 0xfc),(int *)(param_1 + 0x21c));
  piVar4 = DAT_0045a50c;
  *(undefined1 *)(param_1 + 0x218) = 0;
  *(undefined1 *)(param_1 + 0x224) = 1;
  return func_00166C00(*piVar4,1);
}

