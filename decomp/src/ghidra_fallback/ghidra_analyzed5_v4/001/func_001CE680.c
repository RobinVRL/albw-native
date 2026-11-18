#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014FD6C(int param_1,float *param_2,undefined4 param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_001CDF44(int param_1);
extern int func_001CE008(int *param_1);
extern int func_003929C4(int *param_1);
extern int func_00392C20(int param_1);
extern int func_004A8F40(int param_1,int *param_2,uint param_3);
extern int func_0052E32C(int param_1,undefined4 *param_2);
extern int func_00547514(int param_1);
extern float DAT_001ce8b8;
extern uint DAT_001ce8bc;
extern int *DAT_001ce8c0;
extern undefined4 DAT_001ce8c4;
extern int DAT_001ce8c8;
extern undefined4 DAT_001ce8cc;
extern int *DAT_001ce8d0;
extern float DAT_001ce8d4;
extern float DAT_001ce8d8;
extern float DAT_001ce8dc;

// USA 001CE680 <- EU 001CE680 (Ghidra, non-matching)
// GLOBAL DAT_001ce8b8 float
// GLOBAL DAT_001ce8bc uint
// GLOBAL DAT_001ce8c0 int *
// GLOBAL DAT_001ce8c4 undefined4
// GLOBAL DAT_001ce8c8 int
// GLOBAL DAT_001ce8cc undefined4
// GLOBAL DAT_001ce8d0 int *
// GLOBAL DAT_001ce8d4 float
// GLOBAL DAT_001ce8d8 float
// GLOBAL DAT_001ce8dc float

undefined4 func_001CE680(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(int *)(albw_frame + 0x0))
  #define local_4c (*(undefined4 *)(albw_frame + 0x4))
  #define local_48 (*(undefined4 *)(albw_frame + 0x8))
  #define local_44 (*(int *)(albw_frame + 0xc))
  #define uStack_40 (*(uint *)(albw_frame + 0x10))
  #define local_3c (*(undefined4 *)(albw_frame + 0x14))
  #define local_38 (*(undefined4 *)(albw_frame + 0x18))
  #define local_34 (*(int *)(albw_frame + 0x1c))
  #define local_30 (*(undefined1 *)(albw_frame + 0x20))
  #define local_2c (*(float *)(albw_frame + 0x24))
  #define local_28 (*(undefined4 *)(albw_frame + 0x28))
  #define local_24 (*(float *)(albw_frame + 0x2c))
  #define local_20 (*(int *)(albw_frame + 0x30))
  #define local_1c (*(undefined4 *)(albw_frame + 0x34))
  piVar1 = DAT_001ce8d0;
  if ((char)param_1[0x15c] != '\0') {
    if ((short)param_1[0xb] == 1) {
      func_00547514((int)(param_1 + 1));
    }
    *(undefined1 *)((int)param_1 + 0x2d7) = 1;
    return 0;
  }
  switch((char)param_1[0x140]) {
  case '\0':
    uStack_40 = DAT_001ce8bc | (uint)param_1 & 0xffff0000;
    local_50 = 0;
    local_4c = 0;
    local_48 = 0;
    local_3c = 0xff;
    local_38 = 0;
    local_30 = 0;
    local_44 = param_1[0xb3];
    local_34 = param_1[0x141];
    fVar6 = DAT_001ce8b8;
    uVar2 = func_004A8F40(*DAT_001ce8c0,&local_50,0x1200);
    if (uVar2 != 0) {
      local_1c = DAT_001ce8c4;
      local_20 = DAT_001ce8c8;
      func_00150A84(param_1,&local_20,0);
      (**(code **)(param_1[200] + 0x30))(param_1 + 200);
      local_28 = DAT_001ce8cc;
      *(undefined1 *)(param_1 + 0x15c) = 1;
      local_2c = fVar6;
      local_24 = fVar6;
      func_0014FD6C((int)param_1,&local_2c,param_1[0xfa]);
    }
    break;
  case '\x01':
    fVar7 = DAT_001ce8b8;
    func_0052E32C(*DAT_001ce8d0,param_1 + 0xf4);
    fVar5 = DAT_001ce8dc;
    fVar6 = DAT_001ce8d8;
    iVar3 = *piVar1;
    param_1[0xfa] = **(int **)(iVar3 + 0x24);
    fVar4 = *(float *)(*(int *)(iVar3 + 0x1c) + 4);
    param_1[0x15d] = (int)ALBW_AS_U32(fVar4);
    fVar5 = (fVar5 * ((ALBW_AS_F32(param_1[0xf5]) - fVar4) - fVar7)) / fVar6 + DAT_001ce8d4;
    fVar6 = DAT_001ce8d4;
    if (0x3f800000 < (int)ALBW_AS_U32(fVar5)) {
      fVar6 = fVar5;
    }
    param_1[0x15e] = (int)ALBW_AS_U32(fVar5);
    param_1[0x15e] = (int)ALBW_AS_U32(fVar6);
    break;
  case '\x02':
    func_001CE008(param_1);
    break;
  case '\x03':
    func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0xf4),(float *)(param_1 + 0xf7));
    iVar3 = func_003929C4(param_1 + 0x169);
    goto joined_r0x001ce89c;
  case '\x04':
    func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0xf4),(float *)(param_1 + 0xf7));
    iVar3 = func_00392C20((int)(param_1 + 0x169));
joined_r0x001ce89c:
    if (iVar3 != 0) {
      *(undefined1 *)(param_1 + 0x15c) = 1;
    }
  }
  return func_001CDF44((int)param_1);
}

