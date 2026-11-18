#include "ghidra_types.h"

extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_001E1EDC(int param_1,int *param_2);
extern undefined4 DAT_0019d008;
extern int DAT_0019d00c;
extern int DAT_0019d010;
extern int *DAT_0019d014;

// USA 0019CEF0 <- EU 0019CEF0 (Ghidra, non-matching)
// GLOBAL DAT_0019d008 undefined4
// GLOBAL DAT_0019d00c int
// GLOBAL DAT_0019d010 int
// GLOBAL DAT_0019d014 int *

undefined4 * func_0019CEF0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 (*(int *)(albw_frame + 0x0))
  #define local_5c (*(undefined4 *)(albw_frame + 0x4))
  #define local_58 (*(undefined4 *)(albw_frame + 0x8))
  #define local_54 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x10))
  #define local_4c (*(undefined4 *)(albw_frame + 0x14))
  #define local_48 (*(undefined4 *)(albw_frame + 0x18))
  #define local_44 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x20))
  #define local_3c (*(undefined4 *)(albw_frame + 0x24))
  #define local_38 (*(undefined4 *)(albw_frame + 0x28))
  #define local_34 (*(int *)(albw_frame + 0x2c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x30))
  #define local_2c (*(undefined1 *)(albw_frame + 0x34))
  #define local_2b (*(undefined1 *)(albw_frame + 0x35))
  #define local_2a (*(undefined1 *)(albw_frame + 0x36))
  #define local_29 (*(undefined1 *)(albw_frame + 0x37))
  #define local_28 (*(undefined1 *)(albw_frame + 0x38))
  puVar4 = func_0010DA7C(param_1,0,3);
  iVar1 = DAT_0019d00c;
  *puVar4 = DAT_0019d008;
  piVar3 = DAT_0019d014;
  iVar2 = DAT_0019d010;
  local_60 = iVar1;
  local_58 = 0;
  local_54 = 0;
  uStack_50 = 0x20;
  local_40 = 0;
  local_4c = 0;
  local_48 = 0;
  local_2c = 7;
  local_44 = 0;
  local_3c = 0;
  local_34 = iVar1;
  local_38 = 0;
  local_29 = 0;
  local_30 = *(undefined4 *)(DAT_0019d010 + 4);
  local_5c = *(undefined4 *)(DAT_0019d010 + 0xc);
  local_2b = 0;
  local_28 = 1;
  local_2a = 0xf;
  puVar5 = func_001E1EDC(*DAT_0019d014,&local_60);
  puVar4[4] = puVar5[5];
  local_60 = iVar1;
  local_58 = 0;
  local_54 = 0;
  uStack_50 = 0x20;
  local_40 = 0;
  local_4c = 0;
  local_48 = 0;
  local_2c = 7;
  local_44 = 0;
  local_3c = 0;
  local_34 = iVar1;
  local_38 = 0;
  local_29 = 0;
  local_30 = *(undefined4 *)(iVar2 + 4);
  local_5c = *(undefined4 *)(iVar2 + 0x14);
  local_2b = 0;
  local_28 = 1;
  local_2a = 0xf;
  puVar5 = func_001E1EDC(*piVar3,&local_60);
  puVar4[5] = puVar5[5];
  return puVar4;
}

