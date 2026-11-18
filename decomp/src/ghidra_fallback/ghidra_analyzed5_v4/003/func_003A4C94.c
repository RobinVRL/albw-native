#include "ghidra_types.h"

extern int func_0030A5B4(int *param_1,undefined4 param_2,int param_3,int param_4);
extern int func_00588A88(int param_1,int *param_2,int param_3);
extern int func_0058DA24(int param_1);
extern int *DAT_003a4d98;
extern int DAT_003a4d9c;
extern int *DAT_003a4da0;
extern int DAT_003a4da4;
extern char s_SE_EVENT_Hilda_CALLING_003a4da8[];
extern char s_SE_EVENT_Sahasrahla_CALLING_003a4dc0[];

// USA 003A4C94 <- EU 003A4C70 (Ghidra, non-matching)
// GLOBAL DAT_003a4d98 int *
// GLOBAL DAT_003a4d9c int
// GLOBAL DAT_003a4da0 int *
// GLOBAL DAT_003a4da4 int
// GLOBAL s_SE_EVENT_Hilda_CALLING_003a4da8 string
// GLOBAL s_SE_EVENT_Sahasrahla_CALLING_003a4dc0 string

undefined4 func_003A4C94(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  uint uVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  iVar3 = param_1[0x3c];
  uVar4 = (uint)*(ushort *)(iVar3 + 10);
  iVar1 = *DAT_003a4d98;
  if (uVar4 == 0x28) {
    uVar2 = *(undefined4 *)(iVar3 + 4);
    if ((iVar1 != 0) && (iVar3 = func_0058DA24(iVar1), iVar3 == 0)) {
      (**(code **)(*param_1 + 0x30))(param_1);
      return 2;
    }
    iVar3 = DAT_003a4d9c;
    *(char *)((int)param_1 + 0x145) = (char)uVar2;
    iVar3 = (int)*(char *)(iVar3 + (int)param_1);
    param_4 = DAT_003a4da0;
    if (iVar3 == 0xc) {
      local_18 = DAT_003a4da4;
      local_14 = s_SE_EVENT_Hilda_CALLING_003a4da8;
      uVar4 = 0;
      func_00588A88(*DAT_003a4da0,&local_18,0);
      iVar3 = extraout_r1;
    }
    else if (iVar3 == 0x15) {
      local_18 = DAT_003a4da4;
      local_14 = s_SE_EVENT_Sahasrahla_CALLING_003a4dc0;
      uVar4 = 0;
      func_00588A88(*DAT_003a4da0,&local_18,0);
      iVar3 = extraout_r1_00;
    }
  }
  else if (uVar4 == 0x29) {
    if ((iVar1 == 0) || (iVar1 = func_0058DA24(iVar1), iVar3 = extraout_r1_01, iVar1 != 0)) {
      *(undefined1 *)((int)param_1 + 0x145) = 0x19;
    }
    else {
      (**(code **)(*param_1 + 0x30))(param_1);
      iVar3 = extraout_r1_02;
    }
  }
  uVar2 = func_0030A5B4(param_1,iVar3,uVar4,(int)param_4);
  return uVar2;
}

