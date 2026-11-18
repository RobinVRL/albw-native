// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0012C790(int param_1);
extern int func_003616D4();
extern int func_0044F480(int param_1);
extern int func_00478CB8(int param_1,uint param_2,int param_3,int param_4);
extern int func_00479548(int param_1,uint param_2);
extern int func_0047AE74(int param_1);
extern int func_0047B5E4(int param_1);
extern int func_004CDF40(int param_1,int param_2,int param_3);
extern int func_0051B670(int param_1);
extern int func_0066BF2C(undefined4 *param_1,char param_2);
extern int func_0066BFFC(undefined4 *param_1,char param_2);
extern int *DAT_004798e4;
extern int *DAT_004798e8;
extern int *DAT_004798ec;

// USA 004797BC <- EU 00479794 (Ghidra, non-matching)
// GLOBAL DAT_004798e4 int *
// GLOBAL DAT_004798e8 int *
// GLOBAL DAT_004798ec int *

void func_004797BC(int param_1)

{
  int *piVar1;
  ushort *puVar2;
  int in_r3;
  int iVar3;
  
  func_0066BF2C((undefined4 *)(*(int *)(param_1 + 0x200) + 0x20),'\0');
  func_0066BF2C((undefined4 *)(*(int *)(param_1 + 0x204) + 0x20),'\0');
  func_00479548(param_1,0xffffffff);
  func_00478CB8(param_1,0xffffffff,0,in_r3);
  *(undefined1 *)(param_1 + 0x308) = 0xff;
  *(undefined1 *)(param_1 + 0x30a) = 0xff;
  if (*(char *)(*(int *)(param_1 + 500) + 0xf7) != '\0') {
    func_0066BFFC((undefined4 *)(*(int *)(param_1 + 500) + 0x38),'\0');
  }
  if (*(char *)(*(int *)(param_1 + 0x1f8) + 0xf7) != '\0') {
    func_0066BFFC((undefined4 *)(*(int *)(param_1 + 0x1f8) + 0x38),'\0');
  }
  func_0047AE74(param_1);
  piVar1 = DAT_004798e4;
  *(undefined1 *)(param_1 + 0x114) = 0;
  func_0051B670(*piVar1);
  func_0012C790(*(int *)(*piVar1 + 0xf8));
  iVar3 = *DAT_004798e8;
  func_003616D4(iVar3,2,(int)*(char *)(*(int *)(param_1 + 500) + 0xe4));
  func_003616D4(iVar3,1,(int)*(char *)(*(int *)(param_1 + 0x1f8) + 0xe4));
  puVar2 = (ushort *)(*(int *)(param_1 + 0x14) + 0x16);
  *puVar2 = *puVar2 & 0xfffd;
  func_0047B5E4(param_1);
  if (*(char *)(param_1 + 0x311) != '\0') {
    func_004CDF40(*DAT_004798ec,0x6d,1);
  }
  if (*(int *)(param_1 + 0x214) != 0) {
    func_0044F480(*(int *)(param_1 + 0x214));
    *(undefined1 *)(*(int *)(param_1 + 0x214) + 0x98) = 9;
  }
  if (*(int *)(param_1 + 0x210) != 0) {
    func_0044F480(*(int *)(param_1 + 0x210));
    *(undefined1 *)(*(int *)(param_1 + 0x210) + 0x98) = 9;
  }
  return;
}

