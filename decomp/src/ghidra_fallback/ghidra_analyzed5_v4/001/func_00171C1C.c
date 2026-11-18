#include "ghidra_types.h"

extern int func_00297298(int param_1,int param_2);
extern int func_004EC4FC(int param_1,int param_2,int param_3);
extern int func_0051B888(int param_1,int param_2);
extern int func_0051C32C(int param_1);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern int *DAT_00171d4c;
extern int DAT_00171d5c;
extern int *DAT_00171d60;
extern char s_SE_S_FINISH_00171d50[];

// USA 00171C1C <- EU 00171C1C (Ghidra, non-matching)
// GLOBAL DAT_00171d4c int *
// GLOBAL DAT_00171d5c int
// GLOBAL DAT_00171d60 int *
// GLOBAL s_SE_S_FINISH_00171d50 string

undefined4 func_00171C1C(int param_1,int param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  piVar1 = DAT_00171d4c;
  func_0051C32C(*DAT_00171d4c);
  if (param_2 == 1) {
    func_0051B888(*piVar1,2);
  }
  else if (param_2 == 0) {
    func_0051B888(*piVar1,4);
  }
  if (*(char *)(param_1 + 0x2f4) == '\x03') {
    uVar2 = (uint)*(byte *)(param_1 + 0x70);
    if (uVar2 < 8) {
      uVar3 = (uint)*(byte *)(param_1 + 0x34) & 1 << uVar2;
    }
    else {
      param_3 = uVar2 - 8;
      uVar3 = (uint)*(byte *)(param_1 + 0x36) & 1 << (param_3 & 0xff);
    }
    if (uVar3 != 0) {
      if (uVar2 < 9) {
        param_3 = param_1 + uVar2 * 4;
      }
      if (uVar2 < 9) {
        uVar3 = *(uint *)(param_3 + 0x10);
      }
      else {
        uVar3 = 0;
      }
      if (*(uint *)(param_1 + 0x2c8) <= uVar3) goto LAB_00171d04;
    }
    if (uVar2 < 9) {
      *(undefined4 *)(param_1 + uVar2 * 4 + 0x10) = *(undefined4 *)(param_1 + 0x2c8);
      if (uVar2 < 8) {
        *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) | (byte)(1 << uVar2);
      }
      else {
        *(byte *)(param_1 + 0x36) = *(byte *)(param_1 + 0x36) | (byte)(1 << (uVar2 - 8 & 0xff));
      }
    }
  }
LAB_00171d04:
  piVar1 = DAT_00171d60;
  local_18 = DAT_00171d5c;
  local_14 = s_SE_S_FINISH_00171d50;
  func_00587F74(*DAT_00171d60,&local_18,0);
  func_00297298(*piVar1,0xf);
  return func_004EC4FC(*piVar1,0x1e,1);
}

