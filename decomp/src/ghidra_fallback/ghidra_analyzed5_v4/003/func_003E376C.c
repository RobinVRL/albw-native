#include "ghidra_types.h"

extern int func_00103C68(undefined4 *param_1,undefined4 param_2);
extern int func_00104164(undefined4 *param_1,int param_2);
extern int func_00104248(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5 ,uint param_6,undefined4 param_7,int param_8);
extern int func_001081A4(int param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_0010A98C(uint param_1);
extern int func_0010AEF8(void);
extern int func_0010AF18(void);
extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern int func_0010DEB0(undefined4 *param_1);
extern int func_003E3380(undefined4 *param_1,undefined4 param_2);
extern int func_003E3EB0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4, undefined4 *param_5);
extern int func_003E3F20(void);
extern uint DAT_003e3924;
extern undefined4 DAT_003e3928;
extern uint DAT_003e392c;
extern undefined4 DAT_003e3930;
extern undefined4 DAT_003e3934;
extern undefined4 DAT_003e3938;

// USA 003E376C <- EU 003E374C (Ghidra, non-matching)
// GLOBAL DAT_003e3924 uint
// GLOBAL DAT_003e3928 undefined4
// GLOBAL DAT_003e392c uint
// GLOBAL DAT_003e3930 undefined4
// GLOBAL DAT_003e3934 undefined4
// GLOBAL DAT_003e3938 undefined4

/* WARNING: Variable defined which should be unmapped: objStack_40 */

undefined4 func_003E376C(int *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define objStack_40 ((uint *)(albw_frame + 0x0))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define local_2c (*(undefined4 *)(albw_frame + 0x14))
  #define local_28 (*(int *)(albw_frame + 0x18))
  #define local_24 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x20))
  #define local_1c (*(undefined4 *)(albw_frame + 0x24))
  #define local_18 (*(int * *)(albw_frame + 0x28))
  local_2c = 0;
  func_0010DEB0(param_1);
  func_0010C0C0(param_1);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  objStack_40[0] = 0;
  uVar1 = DAT_003e3924;
  if ((param_1[0xb] == 0) && (uVar1 = func_00103C68(objStack_40,0), -1 < (int)uVar1)) {
    param_1[0xb] = objStack_40[0];
    uVar1 = 0;
  }
  if ((int)uVar1 < 0) {
    func_0010A98C(uVar1);
  }
  *(undefined1 *)((int)param_1 + 0x77) = 0;
  *(undefined1 *)((int)param_1 + 0x76) = 0;
  func_00104164(param_1 + 0x19,0);
  piVar2 = (int *)func_0010AF18();
  iVar3 = func_0010AEF8();
  if (iVar3 == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = 2;
  }
  iVar3 = func_003E3F20();
  objStack_40[0] = (uint)&local_30;
  if (iVar3 != 0) {
    uVar1 = uVar1 | 4;
  }
  iVar3 = func_003E3EB0(piVar2,param_1[0xb],uVar1,&local_2c,(undefined4 *)objStack_40[0]);
  *(char *)(param_1 + 0x1d) = (char)local_30;
  func_001081A4((int)(param_1 + 0xe),local_2c,0x1000,0);
  param_1[0xc] = param_1[0xb];
  param_1[0xd] = param_1[0x10] + local_30 * 0x40;
  func_003E3380(param_1 + 0x16,param_1[0x10] + local_30 * 0x200 + 0x800);
  iVar4 = local_30 * 0x80 + 0x200 + param_1[0x10];
  param_1[0x17] = iVar4;
  param_1[0x18] = iVar4 + 0x40;
  if (iVar3 == 0x2a07) {
    *(undefined1 *)((int)param_1 + 0x75) = 1;
  }
  else {
    *(undefined1 *)((int)param_1 + 0x75) = 0;
  }
  local_28 = 4;
  local_24 = DAT_003e3930;
  objStack_40[1] = DAT_003e392c;
  local_20 = DAT_003e3934;
  local_1c = DAT_003e3938;
  objStack_40[0] = (uint)(param_1 + 0x41e);
  objStack_40[2] = 0xfffffffe;
  objStack_40[3] = 0;
  local_18 = param_1;
  uVar1 = func_00104248(param_1 + 0x1b,&local_28,DAT_003e3928,&local_18,objStack_40[0],DAT_003e392c,
                        0xfffffffe,0);
  if ((int)uVar1 < 0) {
    func_0010A98C(uVar1);
  }
  return func_0010C160(param_1);
}

