#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern undefined4 DAT_0025067c;
extern float DAT_00250680;
extern undefined4 DAT_00250684;
extern int DAT_002506a0;
extern char s_SE_SandPillar_BREACK_00250688[];

// USA 00250588 <- EU 00250588 (Ghidra, non-matching)
// GLOBAL DAT_0025067c undefined4
// GLOBAL DAT_00250680 float
// GLOBAL DAT_00250684 undefined4
// GLOBAL DAT_002506a0 int
// GLOBAL s_SE_SandPillar_BREACK_00250688 string

undefined4 func_00250588(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_80 ((uint *)(albw_frame + 0x0))
  #define local_78 (*(undefined4 * *)(albw_frame + 0x8))
  #define local_74 (*(undefined4 *)(albw_frame + 0xc))
  #define local_70 (*(float *)(albw_frame + 0x10))
  #define uStack_6c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_68 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_64 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_60 (*(uint *)(albw_frame + 0x20))
  #define local_2c (*(undefined4 *)(albw_frame + 0x54))
  #define local_28 (*(undefined1 *)(albw_frame + 0x58))
  #define local_20 (*(int *)(albw_frame + 0x60))
  #define local_1c (*(char * *)(albw_frame + 0x64))
  local_80[1] = 3;
  local_78 = &local_74;
  local_28 = 0;
  local_2c = 10;
  local_80[0] = 1;
  local_74 = 1;
  local_60 = param_4 | 0xff;
  local_70 = DAT_00250680;
  uStack_6c = DAT_0025067c;
  uStack_68 = DAT_00250684;
  uStack_64 = DAT_0025067c;
  uVar2 = DAT_0025067c;
  fVar3 = DAT_00250680;
  func_0016898C(param_1[0x122],local_80);
  iVar1 = *(int *)(param_1[0x122] + 0x14);
  if (*(float *)(iVar1 + 8) != fVar3) {
    *(float *)(iVar1 + 8) = fVar3;
    *(undefined1 *)(iVar1 + 0x26) = 1;
  }
  *(undefined4 *)(*(int *)(param_1[0x122] + 0x14) + 0x10) = uVar2;
  if (*(char *)((int)param_1 + 0x492) == '\0') {
    *(undefined1 *)((int)param_1 + 0x492) = 1;
    *(int *)(param_1[0x117] + 0x18) = param_1[0x119];
  }
  local_1c = s_SE_SandPillar_BREACK_00250688;
  local_20 = DAT_002506a0;
  return func_00150A84(param_1,&local_20,0);
}

