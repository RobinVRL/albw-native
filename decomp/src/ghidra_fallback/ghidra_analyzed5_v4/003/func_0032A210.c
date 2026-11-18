#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern float DAT_0032a294;
extern float DAT_0032a298;

// USA 0032A210 <- EU 0032A1EC (Ghidra, non-matching)
// GLOBAL DAT_0032a294 float
// GLOBAL DAT_0032a298 float

void func_0032A210(int param_1)

{
  char cVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define local_14 (*(float *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  if (*(int *)(param_1 + 0xa84) != 0) {
    iVar2 = *(int *)(param_1 + 0xa80);
    cVar1 = '\0';
    if (iVar2 != 0) {
      cVar1 = *(char *)(iVar2 + 0x30);
    }
    if (iVar2 != 0 && cVar1 != '\0') {
      iVar2 = *(int *)(param_1 + 0xa88);
      local_18 = *(float *)(iVar2 + 0x8c);
      local_14 = *(float *)(iVar2 + 0x9c);
      local_10 = *(undefined4 *)(iVar2 + 0xac);
      func_00115C54(&local_18,&local_18,(float *)(param_1 + 0x564));
      local_14 = (*(float *)(param_1 + 0x3d4) - DAT_0032a294) + DAT_0032a298;
      iVar2 = *(int *)(param_1 + 0xa80);
      *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
      func_004D8AEC((float *)(iVar2 + 0x80),*(uint *)(param_1 + 1000),&local_18);
      func_004CEAF0(*(int *)(param_1 + 0xa80));
    }
  }
  return;
}

