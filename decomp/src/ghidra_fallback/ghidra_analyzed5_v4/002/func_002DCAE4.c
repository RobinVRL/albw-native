#include "ghidra_types.h"

extern int func_001DC3C4(int param_1,undefined4 param_2,int param_3);
extern int func_0028C8EC(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_004EAF8C(int param_1,int *param_2,int param_3);
extern int DAT_002dcbf8;
extern int DAT_002dcc10;
extern int *DAT_002dcc14;
extern char s_SE_PV_SWIM_IN_WATER_002dcbfc[];

// USA 002DCAE4 <- EU 002DCAC0 (Ghidra, non-matching)
// GLOBAL DAT_002dcbf8 int
// GLOBAL DAT_002dcc10 int
// GLOBAL DAT_002dcc14 int *
// GLOBAL s_SE_PV_SWIM_IN_WATER_002dcbfc string

undefined4 func_002DCAE4(int param_1,short *param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  #define local_18 (*(int *)(albw_frame + 0x8))
  local_20 = DAT_002dcbf8;
  switch(param_2[1]) {
  case 0x3f:
    if ((char)param_2[2] != '\b') {
      piVar1 = *(int **)(param_1 + 0x34);
      *piVar1 = DAT_002dcbf8;
      piVar1[1] = local_20;
      piVar1[2] = local_20;
    }
    local_1c = (char *)local_20;
    local_18 = local_20;
    func_001DC3C4(*(int *)(param_1 + 0x28),&local_20,0);
    *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x74) = 0;
    break;
  case 0x40:
    *(undefined4 *)(param_1 + 0x74) = 0xf;
    *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x78) = 0;
    if (*param_2 == 0x45) {
      *(undefined1 *)(param_1 + 0x78) = 1;
    }
    return 0;
  case 0x41:
    piVar1 = *(int **)(param_1 + 0x34);
    *piVar1 = DAT_002dcbf8;
    piVar1[1] = local_20;
    piVar1[2] = local_20;
    return 0;
  case 0x42:
    local_1c = s_SE_PV_SWIM_IN_WATER_002dcbfc;
    local_20 = DAT_002dcc10;
    return func_004EAF8C(*DAT_002dcc14,&local_20,0);
  case 0x43:
    uVar2 = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0xa8) = 0;
    *(undefined4 *)(param_1 + 0x58) = **(undefined4 **)(param_1 + 0x3c);
    local_1c = (char *)local_20;
    local_18 = local_20;
    func_001DC3C4(*(int *)(param_1 + 0x28),&local_20,0);
    return func_0028C8EC(*(int *)(param_1 + 0x4c),1,uVar2,param_4);
  }
  return 0;
}

