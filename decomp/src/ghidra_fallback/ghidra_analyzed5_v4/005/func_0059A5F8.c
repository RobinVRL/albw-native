#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern int DAT_0059a67c;
extern undefined4 *DAT_0059a680;
extern undefined4 *DAT_0059a684;
extern undefined4 DAT_0059a694;
extern undefined4 DAT_0059a704;
extern undefined4 DAT_0059a708;
extern char s_Option_0_0059a688[];
extern char s_Option_1_0059a698[];
extern char s_Option_2_0059a6a4[];
extern char s_Option_3_0059a6b0[];
extern char s_Option_4_0059a6bc[];
extern char s_Option_5_0059a6c8[];
extern char s_Option_6_0059a6d4[];
extern char s_Option_7_0059a6e0[];
extern char s_Option_8_0059a6ec[];
extern char s_Option_9_0059a6f8[];

// USA 0059A5F8 <- EU 0059A5D0 (Ghidra, non-matching)
// GLOBAL DAT_0059a67c int
// GLOBAL DAT_0059a680 undefined4 *
// GLOBAL DAT_0059a684 undefined4 *
// GLOBAL DAT_0059a694 undefined4
// GLOBAL DAT_0059a704 undefined4
// GLOBAL DAT_0059a708 undefined4
// GLOBAL s_Option_0_0059a688 string
// GLOBAL s_Option_1_0059a698 string
// GLOBAL s_Option_2_0059a6a4 string
// GLOBAL s_Option_3_0059a6b0 string
// GLOBAL s_Option_4_0059a6bc string
// GLOBAL s_Option_5_0059a6c8 string
// GLOBAL s_Option_6_0059a6d4 string
// GLOBAL s_Option_7_0059a6e0 string
// GLOBAL s_Option_8_0059a6ec string
// GLOBAL s_Option_9_0059a6f8 string

undefined4 func_0059A5F8(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_0059a67c;
  *(undefined4 *)(DAT_0059a67c + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_0059a680;
  *DAT_0059a680 = 0;
  puVar2[1] = 0;
  uVar3 = DAT_0059a694;
  puVar2 = DAT_0059a684;
  *DAT_0059a684 = DAT_0059a694;
  puVar2[1] = s_Option_0_0059a688;
  puVar2[2] = uVar3;
  puVar2[3] = s_Option_1_0059a698;
  puVar2[4] = uVar3;
  puVar2[5] = s_Option_2_0059a6a4;
  puVar2[6] = uVar3;
  puVar2[7] = s_Option_3_0059a6b0;
  puVar2[8] = uVar3;
  puVar2[9] = s_Option_4_0059a6bc;
  puVar2[10] = uVar3;
  puVar2[0xb] = s_Option_5_0059a6c8;
  puVar2[0xc] = uVar3;
  puVar2[0xd] = s_Option_6_0059a6d4;
  puVar2[0xe] = uVar3;
  puVar2[0xf] = s_Option_7_0059a6e0;
  puVar2[0x10] = uVar3;
  puVar2[0x11] = s_Option_8_0059a6ec;
  puVar2[0x12] = uVar3;
  puVar2[0x13] = s_Option_9_0059a6f8;
  return func_005902C0(0);
}

