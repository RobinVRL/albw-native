#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_00115224(undefined4 *param_1,undefined4 *param_2);
extern int func_0048C028(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4);
extern int func_00498564(undefined4 *param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern int *DAT_0046ee9c;
extern undefined4 *DAT_0046eea0;
extern uint *DAT_0046eea4;
extern uint DAT_0046eea8;
extern float DAT_0046eeac;
extern float DAT_0046eeb0;
extern float DAT_0046eeb4;

// USA 0046ED18 <- EU 0046ECF0 (Ghidra, non-matching)
// GLOBAL DAT_0046ee9c int *
// GLOBAL DAT_0046eea0 undefined4 *
// GLOBAL DAT_0046eea4 uint *
// GLOBAL DAT_0046eea8 uint
// GLOBAL DAT_0046eeac float
// GLOBAL DAT_0046eeb0 float
// GLOBAL DAT_0046eeb4 float

undefined1 * func_0046ED18(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x120];
  #define local_120 (*(int *)(albw_frame + 0x0))
  #define auStack_11c ((undefined4 *)(albw_frame + 0x4))
  #define local_ec (*(undefined4 *)(albw_frame + 0x34))
  #define local_e8 (*(undefined4 *)(albw_frame + 0x38))
  #define local_e4 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_e0 (*(undefined4 *)(albw_frame + 0x40))
  #define local_dc (*(undefined4 *)(albw_frame + 0x44))
  #define local_d8 (*(undefined4 *)(albw_frame + 0x48))
  #define local_d4 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_d0 (*(undefined4 *)(albw_frame + 0x50))
  #define local_cc (*(undefined4 *)(albw_frame + 0x54))
  #define uStack_c8 (*(undefined4 *)(albw_frame + 0x58))
  #define local_c4 (*(undefined1 *)(albw_frame + 0x5c))
  #define local_c3 (*(undefined1 *)(albw_frame + 0x5d))
  #define auStack_c0 ((undefined4 *)(albw_frame + 0x60))
  #define auStack_80 ((undefined4 *)(albw_frame + 0xa0))
  #define local_40 (*(undefined1 *)(albw_frame + 0xe0))
  #define local_3c (*(undefined4 *)(albw_frame + 0xe4))
  #define local_38 (*(undefined4 *)(albw_frame + 0xe8))
  #define local_34 (*(undefined4 *)(albw_frame + 0xec))
  #define local_30 (*(undefined4 *)(albw_frame + 0xf0))
  #define local_2c (*(undefined4 *)(albw_frame + 0xf4))
  #define local_28 (*(undefined4 *)(albw_frame + 0xf8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xfc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x100))
  #define local_1c (*(undefined4 *)(albw_frame + 0x104))
  #define local_18 (*(undefined4 *)(albw_frame + 0x108))
  #define local_14 (*(undefined4 *)(albw_frame + 0x10c))
  iVar3 = *(int *)(*DAT_0046ee9c + 0x28e4);
  func_0048C028(&local_120,DAT_0046eea0 + -6,DAT_0046eea0 + -3,DAT_0046eea0);
  (**(code **)(local_120 + 0x10))(&local_120,auStack_11c);
  func_001151EC((undefined4 *)(iVar3 + 0x14),auStack_11c);
  *(undefined4 *)(iVar3 + 0x44) = local_ec;
  *(undefined4 *)(iVar3 + 0x48) = local_e8;
  *(undefined4 *)(iVar3 + 0x4c) = local_e4;
  *(undefined4 *)(iVar3 + 0x50) = local_e0;
  *(undefined4 *)(iVar3 + 0x54) = local_dc;
  *(undefined4 *)(iVar3 + 0x58) = local_d8;
  *(undefined4 *)(iVar3 + 0x5c) = local_d4;
  *(undefined4 *)(iVar3 + 0x60) = local_d0;
  *(undefined4 *)(iVar3 + 100) = local_cc;
  puVar1 = DAT_0046eea4;
  *(uint *)(iVar3 + 0x2c8) = *(uint *)(iVar3 + 0x2c8) & 0xfffffffe;
  if (((*puVar1 & 1) == 0) && (iVar2 = func_00100174((int *)puVar1), iVar2 != 0)) {
    puVar1[1] = DAT_0046eea8;
  }
  func_00498564(&uStack_c8,DAT_0046eeb4,DAT_0046eeb0,ALBW_AS_F32(puVar1[1]),DAT_0046eeac);
  *(undefined1 *)(iVar3 + 0x6c) = local_c4;
  *(undefined1 *)(iVar3 + 0x6d) = local_c3;
  func_00115224((undefined4 *)(iVar3 + 0x70),auStack_c0);
  func_00115224((undefined4 *)(iVar3 + 0xb0),auStack_80);
  *(undefined1 *)(iVar3 + 0xf0) = local_40;
  *(undefined4 *)(iVar3 + 0xf4) = local_3c;
  *(undefined4 *)(iVar3 + 0xf8) = local_38;
  *(undefined4 *)(iVar3 + 0xfc) = local_34;
  *(undefined4 *)(iVar3 + 0x100) = local_30;
  *(undefined4 *)(iVar3 + 0x104) = local_2c;
  *(undefined4 *)(iVar3 + 0x108) = local_28;
  *(undefined4 *)(iVar3 + 0x10c) = local_24;
  *(undefined4 *)(iVar3 + 0x110) = local_20;
  *(undefined4 *)(iVar3 + 0x114) = local_1c;
  *(undefined4 *)(iVar3 + 0x118) = local_18;
  *(undefined4 *)(iVar3 + 0x11c) = local_14;
  *(uint *)(iVar3 + 0x2c8) = *(uint *)(iVar3 + 0x2c8) & 0xfffffffd;
  return (undefined1 *)&local_120;
}

