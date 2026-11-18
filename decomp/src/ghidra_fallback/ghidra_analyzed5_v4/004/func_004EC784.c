#include "ghidra_types.h"

extern int func_0025B398(undefined4 *param_1,uint param_2,int param_3);
extern int func_0029450C(int param_1);
extern int func_00294B24(int param_1);
extern int func_00296BD0(int param_1,int param_2);
extern int func_00297140(int param_1,int *param_2);
extern int func_00297648(int *param_1);
extern int func_002DEE24(int param_1,int param_2);
extern int func_005382AC(undefined4 param_1,int *param_2,char *param_3,int param_4);
extern int func_00540A78(int param_1,int *param_2);
extern int func_005568B0(int param_1);
extern int func_00689024(undefined4 *param_1);
extern int *DAT_004ec8ac;
extern int *DAT_004ec8b0;
extern int DAT_004ec8b4;
extern int DAT_004ec8b8;
extern int *DAT_004ec8bc;

// USA 004EC784 <- EU 004EC75C (Ghidra, non-matching)
// GLOBAL DAT_004ec8ac int *
// GLOBAL DAT_004ec8b0 int *
// GLOBAL DAT_004ec8b4 int
// GLOBAL DAT_004ec8b8 int
// GLOBAL DAT_004ec8bc int *

void func_004EC784(int param_1,uint param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint extraout_r1;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_68 (*(int *)(albw_frame + 0x8))
  #define local_64 (*(undefined4 *)(albw_frame + 0xc))
  piVar1 = DAT_004ec8ac;
  if (*(char *)(*DAT_004ec8b0 + 0x25) != '\x02') {
    func_00294B24(*(int *)(param_1 + 0x4c));
    iVar2 = DAT_004ec8b8;
    iVar5 = DAT_004ec8b4;
    if (*(char *)(*piVar1 + 0x48) == -1) {
      local_64 = *(undefined4 *)(DAT_004ec8b4 + 0x1c);
      local_68 = DAT_004ec8b8;
      iVar4 = func_00540A78(*(int *)(param_1 + 0x4c),&local_68);
      if (iVar4 == 0) {
        func_00296BD0(*(int *)(param_1 + 0x4c),0x3c);
      }
      func_0029450C(*(int *)(param_1 + 0x4c));
    }
    if ((*DAT_004ec8bc != 0) && (cVar3 = func_005568B0(*DAT_004ec8bc), cVar3 == '\0')) {
      local_64 = *(undefined4 *)(iVar5 + 0x1c);
      local_68 = iVar2;
      iVar5 = func_00540A78(*(int *)(param_1 + 0x4c),&local_68);
      if (iVar5 == 0) {
        func_00296BD0(*(int *)(param_1 + 0x4c),0x3c);
      }
      func_0029450C(*(int *)(param_1 + 0x4c));
    }
    func_002DEE24(*(int *)(param_1 + 0x3c),0x1e);
    *(undefined1 *)(param_1 + 0x7b) = 0;
    param_2 = extraout_r1;
  }
  func_0025B398(*(undefined4 **)(param_1 + 0x50),param_2,param_3);
  *(undefined1 *)(*(int *)(param_1 + 0x40) + 0x84) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x40) + 0x85) = 0;
  func_00297648(*(int **)(param_1 + 0x38));
  *(undefined1 *)(param_1 + 0x82) = 1;
  if (*(char *)(*piVar1 + 0x48) == '\b') {
    func_00689024(&local_68);
    func_005382AC(*(undefined4 *)(param_1 + 0x50),&local_68,(char *)(*piVar1 + 0x48),1);
    func_00297140(*(int *)(param_1 + 0x4c),&local_68);
  }
  return;
}

