#include "ghidra_types.h"

extern int func_00231340(short *param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_003A0C04(int param_1);
extern int func_004A4574(int param_1,uint param_2);
extern int func_00532BA0(int param_1);
extern int func_00587CE8(int param_1,int *param_2,undefined4 param_3,undefined4 *param_4);
extern float DAT_003a0888;
extern int *DAT_003a088c;
extern int DAT_003a0890;
extern undefined4 DAT_003a0894;

// USA 003A0718 <- EU 003A06F4 (Ghidra, non-matching)
// GLOBAL DAT_003a0888 float
// GLOBAL DAT_003a088c int *
// GLOBAL DAT_003a0890 int
// GLOBAL DAT_003a0894 undefined4

undefined4 func_003A0718(int param_1)

{
  float fparam_0;
  int *piVar1;
  int iVar2;
  int extraout_r1;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(undefined4 *)(albw_frame + 0x4))
  iVar3 = 0;
  *(int *)(param_1 + 0x39c) = *(int *)(param_1 + 0x39c) + 1;
  do {
    func_004A4574(param_1 + 0x54 + iVar3 * 0x88,*(uint *)(param_1 + 0x39c));
    iVar3 = iVar3 + 1;
  } while (iVar3 != 6);
  iVar2 = *(int *)(param_1 + 0x398);
  iVar3 = extraout_r1;
  if (iVar2 != -2) {
    iVar3 = *(int *)(param_1 + 0x394);
  }
  if ((iVar2 != -2 && iVar2 != iVar3) && (iVar3 = func_00532BA0(param_1 + 0x30), iVar3 != 0)) {
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x20);
    *(undefined2 *)(param_1 + 0x32) = 1;
    fparam_0 = DAT_003a0888;
    *(undefined2 *)(param_1 + 0x30) = 0;
    func_002317C0((undefined2 *)(param_1 + 0x30),fparam_0);
    func_00231340((short *)(param_1 + 0x30));
    func_003A0C04(param_1);
    iVar3 = DAT_003a0890;
    piVar1 = DAT_003a088c;
    iVar2 = *(int *)(param_1 + 0x394);
    if (iVar2 < *(int *)(param_1 + 0x398)) {
      if (iVar2 < 0x2e) {
        *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x20);
        *(undefined2 *)(param_1 + 0x32) = 0;
        *(undefined2 *)(param_1 + 0x30) = 0;
        func_002317C0((undefined2 *)(param_1 + 0x30),*(float *)(param_1 + 0x3a0));
        *(int *)(param_1 + 0x394) = *(int *)(param_1 + 0x394) + 1;
        local_20 = iVar3;
        local_1c = DAT_003a0894;
        func_00587CE8(*piVar1,&local_20,*(undefined4 *)(**(int **)(param_1 + 0x20) + 0x10),0);
      }
    }
    else if (-1 < iVar2) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x20);
      *(undefined2 *)(param_1 + 0x32) = 1;
      *(undefined2 *)(param_1 + 0x30) = 0;
      func_002317C0((undefined2 *)(param_1 + 0x30),*(float *)(param_1 + 0x3a0));
      *(int *)(param_1 + 0x394) = *(int *)(param_1 + 0x394) + -1;
      local_20 = iVar3;
      local_1c = DAT_003a0894;
      func_00587CE8(*piVar1,&local_20,*(undefined4 *)(**(int **)(param_1 + 0x20) + 0x10),0);
      return func_003A0C04(param_1);
    }
  }
  return 0;
}

