#include "ghidra_types.h"

extern int func_0025B398(undefined4 *param_1,uint param_2,int param_3);
extern int func_0029450C(int param_1);
extern int func_00296BD0(int param_1,int param_2);
extern int func_00297648(int *param_1);
extern int func_002DEBA0(int param_1,int param_2);
extern int func_00540A78(int param_1,int *param_2);
extern int DAT_004eb740;
extern int DAT_004eb744;

// USA 004EB6BC <- EU 004EB694 (Ghidra, non-matching)
// GLOBAL DAT_004eb740 int
// GLOBAL DAT_004eb744 int

void func_004EB6BC(int param_1)

{
  bool bVar1;
  int iVar2;
  uint extraout_r1;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  *(undefined1 *)(param_1 + 0x79) = 0;
  local_14 = *(undefined4 *)(DAT_004eb740 + 0x1c);
  local_18 = DAT_004eb744;
  iVar3 = DAT_004eb744;
  iVar2 = func_00540A78(*(int *)(param_1 + 0x4c),&local_18);
  if ((iVar2 == 0) || (*(char *)(param_1 + 0x81) != '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    func_00296BD0(*(int *)(param_1 + 0x4c),0x3c);
  }
  func_0029450C(*(int *)(param_1 + 0x4c));
  func_002DEBA0(*(int *)(param_1 + 0x3c),0x1e);
  func_0025B398(*(undefined4 **)(param_1 + 0x50),extraout_r1,iVar3);
  *(undefined1 *)(*(int *)(param_1 + 0x40) + 0x84) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x40) + 0x85) = 0;
  func_00297648(*(int **)(param_1 + 0x38));
  *(undefined1 *)(param_1 + 0x81) = 0;
  return;
}

