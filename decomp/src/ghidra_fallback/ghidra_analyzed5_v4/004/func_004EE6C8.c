#include "ghidra_types.h"

extern int func_001031B4(undefined4 *param_1,undefined4 *param_2);
extern int func_00171E8C(int *param_1);
extern int func_00260D10(int *param_1);
extern int func_00271494(void);
extern int func_002DF3E4(int param_1);
extern int func_00328114(int *param_1);
extern int func_003947D0(int *param_1);
extern int func_0049D4A8(int param_1,undefined4 *param_2);
extern int func_004A90B8(int *param_1);
extern int func_004AC7EC(int *param_1);
extern int func_004C3DF4(int param_1);
extern int func_004C4808(int *param_1);
extern int func_004C58F0(int param_1,int *param_2);
extern int func_004C6668(int *param_1);
extern int func_004CD000(int *param_1);
extern int func_004CD6EC(int *param_1);
extern int func_004CD7C8(int param_1,int param_2);
extern int func_004ED408(int *param_1);
extern int func_005182D0(int param_1);
extern int func_005183CC(int *param_1);
extern int func_005191F4(int param_1);
extern int func_0051AA64(int *param_1);
extern int *DAT_004ee814;
extern undefined4 DAT_004ee818;
extern undefined4 DAT_004ee81c;
extern int *DAT_004ee820;
extern int *DAT_004ee824;
extern int *DAT_004ee828;
extern undefined4 *DAT_004ee82c;
extern int *DAT_004ee830;
extern undefined4 DAT_004ee834;
extern int *DAT_004ee838;
extern int *DAT_004ee83c;
extern undefined4 DAT_004ee840;

// USA 004EE6C8 <- EU 004EE6A0 (Ghidra, non-matching)
// GLOBAL DAT_004ee814 int *
// GLOBAL DAT_004ee818 undefined4
// GLOBAL DAT_004ee81c undefined4
// GLOBAL DAT_004ee820 int *
// GLOBAL DAT_004ee824 int *
// GLOBAL DAT_004ee828 int *
// GLOBAL DAT_004ee82c undefined4 *
// GLOBAL DAT_004ee830 int *
// GLOBAL DAT_004ee834 undefined4
// GLOBAL DAT_004ee838 int *
// GLOBAL DAT_004ee83c int *
// GLOBAL DAT_004ee840 undefined4

void func_004EE6C8(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define auStack_a0 ((undefined4 *)(albw_frame + 0x0))
  #define local_44 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_20 ((undefined1 *)(albw_frame + 0x80))
  #define local_1c (*(undefined4 *)(albw_frame + 0x84))
  func_002DF3E4(*DAT_004ee814);
  *(undefined4 *)(param_1 + 0x14) = param_3;
  func_00271494();
  if (*(char *)(*DAT_004ee820 + 0x25) == '\0') {
    func_004C6668((int *)0x0);
  }
  func_004A90B8((int *)0x0);
  func_004CD6EC((int *)0x0);
  func_004CD7C8(*DAT_004ee824,param_1 + 0x98);
  func_004AC7EC((int *)0x0);
  func_00260D10((int *)0x0);
  func_004C4808((int *)0x0);
  func_004C58F0(*DAT_004ee828,(int *)0x0);
  puVar1 = DAT_004ee82c;
  *DAT_004ee82c = 1;
  func_005183CC((int *)0x0);
  func_005182D0(*DAT_004ee830);
  *puVar1 = 0xffffffff;
  func_00328114((int *)0x0);
  func_003947D0((int *)0x0);
  func_004ED408((int *)0x0);
  func_0051AA64((int *)0x0);
  func_005191F4(*DAT_004ee838);
  func_004CD000((int *)0x0);
  func_00171E8C((int *)0x0);
  if (*(char *)(*(int *)(*DAT_004ee83c + 0x14) + 0x1600) == '\0') {
    func_004C3DF4(*DAT_004ee83c);
  }
  (**(code **)(**(int **)(param_1 + 0x14) + 0x6c))(*(int **)(param_1 + 0x14));
  local_1c = DAT_004ee840;
  local_20[0] = 2;
  func_001031B4(auStack_a0,local_20);
  local_44 = param_3;
  piVar2 = func_0049D4A8(param_2,auStack_a0);
  *(int **)(param_1 + 0x10) = piVar2;
  return;
}

