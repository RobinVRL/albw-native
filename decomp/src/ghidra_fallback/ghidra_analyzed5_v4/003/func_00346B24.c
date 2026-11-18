#include "ghidra_types.h"

extern int func_0028C8EC(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_004EA104(int param_1,int *param_2,int param_3);
extern int func_0054C998(int param_1,int param_2);
extern undefined4 DAT_00346c08;
extern int DAT_00346c20;
extern int *DAT_00346c24;
extern char s_SE_PL_Hammer_SET_00346c0c[];

// USA 00346B24 <- EU 00346B00 (Ghidra, non-matching)
// GLOBAL DAT_00346c08 undefined4
// GLOBAL DAT_00346c20 int
// GLOBAL DAT_00346c24 int *
// GLOBAL s_SE_PL_Hammer_SET_00346c0c string

undefined4 func_00346B24(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  uVar4 = DAT_00346c08;
  *(undefined4 *)(param_1 + 0x134) = DAT_00346c08;
  *(undefined4 *)(param_1 + 0x138) = uVar4;
  *(undefined1 *)(param_1 + 0x13d) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  sVar1 = *(short *)(param_2 + 2);
  if (sVar1 == 0x37) {
    *(undefined1 *)(param_1 + 0x13e) = 0;
    iVar2 = func_0054C998(*(int *)(param_1 + 0x48),**(int **)(param_1 + 0x3c));
    *(int *)(param_1 + 0x58) = iVar2;
    local_c = s_SE_PL_Hammer_SET_00346c0c;
    local_10 = DAT_00346c20;
    func_004EA104(*DAT_00346c24,&local_10,0);
  }
  else {
    if (sVar1 == 0x38) {
      *(undefined1 *)(param_1 + 0x13e) = 1;
      puVar3 = *(undefined4 **)(param_1 + 0x30);
      *(undefined4 *)(param_1 + 0x14c) = *puVar3;
      *(undefined4 *)(param_1 + 0x150) = puVar3[1];
      *(undefined4 *)(param_1 + 0x154) = puVar3[2];
      **(undefined4 **)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x58);
      *(undefined1 *)(param_1 + 0x140) = 1;
      *(undefined1 *)(*(int *)(param_1 + 0x2c) + 199) = 0;
      return 0;
    }
    if (sVar1 == 0x39) {
      *(undefined1 *)(param_1 + 0x13e) = 1;
      puVar3 = *(undefined4 **)(param_1 + 0x30);
      *(undefined4 *)(param_1 + 0x14c) = *puVar3;
      uVar4 = puVar3[1];
      *(undefined4 *)(param_1 + 0x150) = uVar4;
      *(undefined4 *)(param_1 + 0x154) = puVar3[2];
      **(undefined4 **)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x58);
      return func_0028C8EC(*(int *)(param_1 + 0x4c),1,uVar4,(int *)0x1);
    }
  }
  return 0;
}

