#include "ghidra_types.h"

extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_002BF950(int param_1,int param_2);
extern int func_00447A40(int param_1,undefined4 param_2,int param_3,int param_4);
extern int func_00447E28(int param_1,int param_2,int *param_3,int param_4);
extern int func_0047E8C4(int param_1,int param_2,int param_3);
extern int func_0051AA20(int param_1);
extern int func_0051B524(int param_1);
extern int func_0051BE94(int param_1);
extern int func_0051C218(int param_1);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00584B94(int param_1,int param_2);
extern int *DAT_00449638;
extern float DAT_0044963c;
extern int DAT_00449640;
extern undefined4 DAT_00449644;
extern undefined4 DAT_00449648;
extern undefined4 DAT_0044964c;
extern int DAT_00449650;
extern int *DAT_00449654;

// USA 004494C0 <- EU 00449498 (Ghidra, non-matching)
// GLOBAL DAT_00449638 int *
// GLOBAL DAT_0044963c float
// GLOBAL DAT_00449640 int
// GLOBAL DAT_00449644 undefined4
// GLOBAL DAT_00449648 undefined4
// GLOBAL DAT_0044964c undefined4
// GLOBAL DAT_00449650 int
// GLOBAL DAT_00449654 int *

void func_004494C0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 extraout_r1;
  int iVar4;
  int in_r3;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xc))
  piVar1 = DAT_00449638;
  func_0051AA20(*DAT_00449638);
  func_0051C218(*piVar1);
  func_0047E8C4(*(int *)(param_1 + 0x210),0,0);
  iVar4 = DAT_00449640;
  fparam_0 = DAT_0044963c;
  if (*(char *)(param_1 + 0x290) == '\0') {
    local_28 = DAT_00449640;
    local_24 = DAT_0044964c;
    iVar4 = 0;
    func_00533078(*(undefined4 *)(param_1 + 0x210),&local_28,0);
  }
  else {
    *(undefined2 *)(param_1 + 200) = 0;
    func_002317C0((undefined2 *)(param_1 + 200),fparam_0);
    uVar2 = DAT_00449644;
    *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_1 + 0x248);
    *(undefined4 *)(param_1 + 0x25c) = *(undefined4 *)(param_1 + 0x24c);
    *(undefined4 *)(param_1 + 0x250) = *(undefined4 *)(param_1 + 0x288);
    *(undefined4 *)(param_1 + 0x254) = *(undefined4 *)(param_1 + 0x28c);
    *(undefined4 *)(param_1 + 0x260) = uVar2;
    func_00447E28(param_1,1,*(int **)(param_1 + 0x23c),0);
    in_r3 = 0;
    func_00447E28(param_1,0,*(int **)(param_1 + 0x240),0);
    local_24 = DAT_00449648;
    *(undefined1 *)(param_1 + 0x294) = 1;
    local_28 = iVar4;
    iVar4 = 0;
    func_00533078(*(undefined4 *)(param_1 + 0x210),&local_28,0);
  }
  func_0051BE94(*piVar1);
  func_0051B524(*piVar1);
  func_00447A40(param_1,extraout_r1,iVar4,in_r3);
  func_002317C0((undefined2 *)(param_1 + 0xf8),fparam_0);
  func_00231448(param_1 + 0x104);
  bVar3 = func_00584B94(*DAT_00449654,DAT_00449650);
  if (((bVar3) && (iVar4 = *(int *)(param_1 + 0x214), *(char *)(iVar4 + 0xd) == '\0')) &&
     (*(char *)(iVar4 + 0xe) == '\0')) {
    *(undefined1 *)(iVar4 + 0xe) = 1;
  }
  iVar4 = *(int *)(param_1 + 0x210);
  if (*(char *)(iVar4 + 0x5d) != '\0') {
    func_002BF950(iVar4,1);
    func_002317C0((undefined2 *)(iVar4 + 0x78),fparam_0);
    return;
  }
  return;
}

