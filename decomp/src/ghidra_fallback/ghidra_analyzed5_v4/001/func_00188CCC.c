#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D88(float *param_1,float *param_2,float fparam_0);
extern float DAT_00188dd8;
extern float DAT_00188ddc;
extern float DAT_00188de0;
extern float DAT_00188de4;
extern float DAT_00188de8;
extern float DAT_00188dec;

// USA 00188CCC <- EU 00188CCC (Ghidra, non-matching)
// GLOBAL DAT_00188dd8 float
// GLOBAL DAT_00188ddc float
// GLOBAL DAT_00188de0 float
// GLOBAL DAT_00188de4 float
// GLOBAL DAT_00188de8 float
// GLOBAL DAT_00188dec float

void func_00188CCC(int param_1,float fparam_0)

{
  char cVar1;
  int iVar2;
  float fparam_0_00;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x10))
  #define local_38 (*(float *)(albw_frame + 0x18))
  #define local_34 (*(float *)(albw_frame + 0x1c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2c (*(float *)(albw_frame + 0x24))
  #define local_28 (*(float *)(albw_frame + 0x28))
  #define local_24 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_20 (*(float *)(albw_frame + 0x30))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x34))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x38))
  fparam_0_00 = DAT_00188de8;
  cVar1 = *(char *)(param_1 + 0x500);
  local_34 = DAT_00188ddc;
  if ((cVar1 != '\x06' && cVar1 != '\a') &&
     (local_34 = DAT_00188dd8, cVar1 == '\x02' || cVar1 == '\x03')) {
    local_34 = DAT_00188de0;
  }
  local_34 = local_34 - fparam_0 * DAT_00188de4 * DAT_00188de8;
  local_38 = *(float *)(param_1 + 0x3d0);
  if (local_34 < DAT_00188dec) {
    local_34 = DAT_00188dec;
  }
  local_28 = *(float *)(param_1 + 0x3d4);
  local_30 = *(undefined4 *)(param_1 + 0x3d8);
  local_34 = local_28 - local_34;
  iVar2 = *(int *)(param_1 + 0x570);
  *(float *)(iVar2 + 0x58) = local_38;
  *(float *)(iVar2 + 0x5c) = local_34;
  *(undefined4 *)(iVar2 + 0x60) = local_30;
  *(float *)(iVar2 + 100) = local_38;
  *(float *)(iVar2 + 0x68) = local_28;
  *(undefined4 *)(iVar2 + 0x6c) = local_30;
  *(float *)(iVar2 + 0x70) = fparam_0;
  iVar2 = *(int *)(param_1 + 0x570);
  local_2c = local_38;
  local_24 = local_30;
  func_00115C54(&local_20,&local_38,&local_2c);
  local_48 = local_20;
  uStack_44 = uStack_1c;
  uStack_40 = uStack_18;
  func_00115D88(&local_20,&local_48,fparam_0_00);
  *(float *)(iVar2 + 4) = local_20;
  *(undefined4 *)(iVar2 + 8) = uStack_1c;
  *(undefined4 *)(iVar2 + 0xc) = uStack_18;
  return;
}

