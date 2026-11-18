#include "ghidra_types.h"

extern int func_00167E04(int param_1,int param_2,uint param_3);
extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_005229AC(int *param_1,int *param_2);
extern int DAT_00479634;
extern int DAT_00479638;
extern char s_P_CursorX_00_0047964c[];
extern char s_P_CursorY_00_0047965c[];
extern char s_P_Cursor__02d_0047963c[];
extern char s_cf_0047963c[];

// USA 00479548 <- EU 00479520 (Ghidra, non-matching)
// GLOBAL DAT_00479634 int
// GLOBAL DAT_00479638 int
// GLOBAL s_P_CursorX_00_0047964c string
// GLOBAL s_P_CursorY_00_0047965c string
// GLOBAL s_cf_0047963c string

void func_00479548(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2c ((char *)(albw_frame + 0x14))
  #define uStack_1d (*(undefined1 *)(albw_frame + 0x23))
  #define local_18 (*(int *)(albw_frame + 0x28))
  #define local_14 (*(char * *)(albw_frame + 0x2c))
  if (*(int *)(param_1 + 0x20c) != 0) {
    func_00167E04(*(int *)(param_1 + 0x1c),*(int *)(param_1 + 0x20c),0);
  }
  iVar1 = DAT_00479634;
  iVar2 = 0;
  if (-1 < (int)param_2) {
    if ((int)param_2 < 0x14) {
      local_34 = local_2c;
      uStack_30 = 0x10;
      uStack_1d = 0;
      local_2c[0] = '\0';
      local_38 = DAT_00479638;
      func_004994B0((int)&local_38,s_P_Cursor__02d_0047963c,param_2,&local_34);
      (**(code **)(local_38 + 8))(&local_38);
      local_18 = iVar1;
      local_14 = local_34;
      iVar2 = func_005229AC(*(int **)(param_1 + 0x1c),&local_18);
    }
    else {
      local_38 = DAT_00479634;
      if (param_2 == 0x14) {
        local_34 = s_P_CursorX_00_0047964c;
        iVar2 = func_005229AC(*(int **)(param_1 + 0x1c),&local_38);
      }
      else {
        local_34 = s_P_CursorY_00_0047965c;
        iVar2 = func_005229AC(*(int **)(param_1 + 0x1c),&local_38);
      }
    }
    if (iVar2 != 0) {
      func_00167E04(*(int *)(param_1 + 0x1c),iVar2,1);
    }
  }
  *(int *)(param_1 + 0x20c) = iVar2;
  return;
}

