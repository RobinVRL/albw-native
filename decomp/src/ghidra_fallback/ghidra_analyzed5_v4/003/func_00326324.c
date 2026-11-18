#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_003249B4(int param_1);
extern int func_004CDF40(int param_1,int param_2,int param_3);
extern int func_004CEA18(int param_1,int param_2,uint param_3);
extern int func_005238E4(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern float DAT_0032646c;
extern int *DAT_00326470;
extern int *DAT_00326474;
extern int DAT_00326478;
extern int *DAT_003264a8;
extern char s_SE_TreasureBoxL_OPEN_0032647c[];
extern char s_SE_TreasureBox_OPEN_00326494[];

// USA 00326324 <- EU 00326300 (Ghidra, non-matching)
// GLOBAL DAT_0032646c float
// GLOBAL DAT_00326470 int *
// GLOBAL DAT_00326474 int *
// GLOBAL DAT_00326478 int
// GLOBAL DAT_003264a8 int *
// GLOBAL EXT_00000008 undefined
// GLOBAL s_SE_TreasureBoxL_OPEN_0032647c string
// GLOBAL s_SE_TreasureBox_OPEN_00326494 string

undefined4 func_00326324(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  if (*(char *)((int)param_1 + 0x475) == '\0') {
    *(undefined1 *)((int)param_1 + 0x475) = 1;
    if (param_1[0x125] != 0) {
      iVar3 = *(int *)(param_1[0x125] + 0x14);
      if (*(float *)(iVar3 + 8) != DAT_0032646c) {
        *(float *)(iVar3 + 8) = DAT_0032646c;
        *(undefined1 *)(iVar3 + 0x26) = 1;
      }
    }
    func_004CEA18(param_1[0x124],0,0);
    func_004CEA18(param_1[0x124],0,1);
    func_00588C14((int)param_1,1,1);
    func_003249B4((int)param_1);
    piVar1 = DAT_00326470;
    if (*(char *)((int)param_1 + 0x476) == '\x01') {
      *(char *)(*DAT_00326470 + 0x2e3) = *(char *)(*DAT_00326470 + 0x2e3) + '\x01';
    }
    iVar3 = func_00588BE4((int)param_1);
    local_20 = DAT_00326478;
    if (iVar3 == *DAT_00326474) {
      local_1c = s_SE_TreasureBoxL_OPEN_0032647c;
      func_00150A84(param_1,&local_20,0);
    }
    else {
      local_1c = s_SE_TreasureBox_OPEN_00326494;
      func_00150A84(param_1,&local_20,0);
    }
    if (*(char *)((int)param_1 + 0x476) == '\x01') {
      puVar4 = func_005238E4(*piVar1,(int)(short)param_1[0xb]);
      *param_2 = (int)puVar4;
      if (puVar4 == (uint *)&SupervisorCall) {
        func_004CDF40(*DAT_003264a8,0x3e1,1);
      }
    }
    else {
      *param_2 = (int)(short)param_1[0xb];
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

