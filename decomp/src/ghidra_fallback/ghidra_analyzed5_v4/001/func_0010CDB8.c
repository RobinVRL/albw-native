#include "ghidra_types.h"

extern int func_0010B954(int param_1,int param_2,int *param_3,int param_4,int param_5);
extern int func_0010D5C8(int *param_1);
extern int func_0010D8FC(undefined4 *param_1);
extern int func_0010D978(undefined4 param_1);
extern int func_0010DB24(int *param_1);
extern int func_0010E1C8(int param_1,int *param_2);
extern int *DAT_0010ce60;
extern undefined4 DAT_0010ce74;
extern int *DAT_0010ce78;
extern char s_cf_0010ce64[];
extern char s_sead__ThreadMgr_0010ce64[];

// USA 0010CDB8 <- EU 0010CDB8 (Ghidra, non-matching)
// GLOBAL DAT_0010ce60 int *
// GLOBAL DAT_0010ce74 undefined4
// GLOBAL DAT_0010ce78 int *
// GLOBAL s_cf_0010ce64 string

undefined4 func_0010CDB8(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  if ((undefined4 *)param_1[1] == (undefined4 *)0x0) {
    func_0010D978(*param_1);
  }
  else {
    func_0010D8FC((undefined4 *)param_1[1]);
  }
  if (*DAT_0010ce60 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *(int **)DAT_0010ce60[2];
  }
  local_14 = s_sead__ThreadMgr_0010ce64;
  local_18 = DAT_0010ce74;
  piVar1 = func_0010B954(0,(int)&local_18,piVar2,1,0);
  func_0010DB24(piVar1);
  func_0010E1C8(*DAT_0010ce78,piVar1);
  (**(code **)(*piVar1 + 0x14))(piVar1);
  return func_0010D5C8(piVar2);
}

