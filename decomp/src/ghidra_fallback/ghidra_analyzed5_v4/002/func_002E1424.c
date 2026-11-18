#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_002E11AC(float *param_1,float *param_2,float param_3,float fparam_0);
extern int *DAT_002e1544;
extern int *DAT_002e1548;
extern int *DAT_002e154c;
extern float DAT_002e1550;
extern float *DAT_002e1554;
extern float DAT_002e1558;
extern float DAT_002e155c;
extern float DAT_002e1560;

// USA 002E1424 <- EU 002E1400 (Ghidra, non-matching)
// GLOBAL DAT_002e1544 int *
// GLOBAL DAT_002e1548 int *
// GLOBAL DAT_002e154c int *
// GLOBAL DAT_002e1550 float
// GLOBAL DAT_002e1554 float *
// GLOBAL DAT_002e1558 float
// GLOBAL DAT_002e155c float
// GLOBAL DAT_002e1560 float

bool func_002E1424(float *param_1,float *param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define fStack_34 (*(float *)(albw_frame + 0xc))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define local_2c (*(float *)(albw_frame + 0x14))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_20 (*(float *)(albw_frame + 0x20))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x28))
  uint uVar5;
  
  if (((*(char *)(*DAT_002e1544 + 0x25) == '\0') && (*(char *)(*DAT_002e1548 + 0x18) != '\a')) &&
     (*(char *)(*DAT_002e1548 + 0x18) != '%')) {
    local_38 = *DAT_002e1554;
    uVar4 = *(uint *)(*DAT_002e154c + 0x44c);
    fStack_34 = DAT_002e1554[1];
    local_30 = DAT_002e1554[2];
    uVar5 = (uVar4 & 0x40000) >> 0x12;
    fVar6 = local_38;
    if (uVar5 != 0) {
      fVar6 = local_38 - DAT_002e1550;
    }
    uVar1 = (uVar4 & 0x80000) >> 0x13;
    uVar2 = (uVar4 & 0x10000) >> 0x10;
    uVar4 = (uVar4 & 0x20000) >> 0x11;
    if (uVar5 != 0) {
      local_38 = fVar6;
    }
    if (uVar1 != 0) {
      local_38 = fVar6 + DAT_002e1550;
    }
    if (uVar2 != 0) {
      local_30 = local_30 - DAT_002e1550;
    }
    if (uVar4 != 0) {
      local_30 = local_30 + DAT_002e1550;
    }
    uVar5 = uVar5 ^ uVar1 | uVar2 ^ uVar4;
    bVar3 = SUB41(uVar5,0);
    if (uVar5 != 0) {
      func_00115DC8(&local_38);
      local_38 = local_38 * DAT_002e1558;
      local_30 = local_30 * DAT_002e155c;
      fVar6 = DAT_002e1558;
      func_00115C54(&local_20,&local_38,param_2);
      local_2c = local_20;
      uStack_28 = uStack_1c;
      uStack_24 = uStack_18;
      func_002E11AC(param_1,&local_2c,DAT_002e1560,fVar6);
      bVar3 = true;
    }
    return bVar3;
  }
  return false;
}

