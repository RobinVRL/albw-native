#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00163A30(int *param_1,int param_2);
extern int func_00289FCC(int param_1);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_0052FBA0(int param_1,uint param_2);
extern int iRam00163870;
extern int *piRam00163858;
extern undefined4 DAT_00163850;
extern undefined4 DAT_00163854;
extern char s_SE_Omugai_SHELL_OUT_0016385c[];

// USA 001637A4 <- EU 001637A8 (Ghidra, non-matching)
// GLOBAL DAT_00163850 undefined4
// GLOBAL DAT_00163854 undefined4
// GLOBAL UNK_00163858 int *
// GLOBAL UNK_00163870 int
// GLOBAL s_SE_Omugai_SHELL_OUT_0016385c string

undefined4 func_001637A4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define iStack_10 (*(int *)(albw_frame + 0x0))
  #define pcStack_c (*(char * *)(albw_frame + 0x4))
  uVar1 = DAT_00163850;
  *(undefined4 *)(param_1 + 0x4e4) = DAT_00163850;
  *(undefined4 *)(param_1 + 0x4e8) = uVar1;
  *(undefined4 *)(param_1 + 0x4ec) = uVar1;
  uVar1 = DAT_00163854;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_00163854;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  func_004FABDC(param_1,4,0,0);
  func_00163A30((int *)param_1,0);
  iVar2 = func_0052FBA0(*piRam00163858 + 0x3dbbc,*(uint *)(param_1 + 0x8f8));
  if (iVar2 != 0) {
    func_00289FCC(iVar2);
  }
  iStack_10 = iRam00163870;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xffffff7f | 0x4000;
  pcStack_c = s_SE_Omugai_SHELL_OUT_0016385c;
  return func_00150A84((int *)param_1,&iStack_10,0);
}

