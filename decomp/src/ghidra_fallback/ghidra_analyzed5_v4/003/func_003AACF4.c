#include "ghidra_types.h"

extern int func_004CEA18(int param_1,int param_2,uint param_3);
extern int func_004CF478(int param_1,int param_2);
extern int func_00584C14(int param_1,int *param_2);
extern int func_00588BE4(int param_1);
extern int *DAT_003aadd0;
extern int DAT_003aadd4;
extern char s_SwitchOff_003aade4[];
extern char s_SwitchOn_003aadd8[];
extern char s_Switch_off_003aadfc[];
extern char s_Switch_on_003aadf0[];

// USA 003AACF4 <- EU 003AACD0 (Ghidra, non-matching)
// GLOBAL DAT_003aadd0 int *
// GLOBAL DAT_003aadd4 int
// GLOBAL s_SwitchOff_003aade4 string
// GLOBAL s_SwitchOn_003aadd8 string
// GLOBAL s_Switch_off_003aadfc string
// GLOBAL s_Switch_on_003aadf0 string

undefined4 func_003AACF4(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  piVar4 = (int *)(param_1 + 0x41c);
  if (*(char *)(param_1 + 0x41a) == '\0') {
    return func_004CF478(*(int *)(param_1 + 0x41c),param_2 ^ 1);
  }
  iVar2 = func_00588BE4(param_1);
  iVar1 = DAT_003aadd4;
  local_20 = DAT_003aadd4;
  if (iVar2 == *DAT_003aadd0) {
    local_1c = s_SwitchOn_003aadd8;
    uVar3 = func_00584C14(*(int *)(param_1 + 0x41c),&local_20);
    func_004CEA18(*piVar4,param_2,uVar3);
    local_1c = s_SwitchOff_003aade4;
    local_20 = iVar1;
    uVar3 = func_00584C14(*piVar4,&local_20);
    return func_004CEA18(*piVar4,param_2 ^ 1,uVar3);
  }
  local_1c = s_Switch_on_003aadf0;
  uVar3 = func_00584C14(*(int *)(param_1 + 0x41c),&local_20);
  func_004CEA18(*piVar4,param_2,uVar3);
  local_1c = s_Switch_off_003aadfc;
  local_20 = iVar1;
  uVar3 = func_00584C14(*piVar4,&local_20);
  return func_004CEA18(*piVar4,param_2 ^ 1,uVar3);
}

