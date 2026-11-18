#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern int DAT_005e46c0;
extern undefined4 *DAT_005e46c4;
extern undefined4 *DAT_005e46c8;
extern undefined4 DAT_005e46d8;
extern undefined DAT_005e46dc;
extern undefined DAT_005e46e4;
extern undefined DAT_005e46e8;
extern undefined4 DAT_005e46ec;
extern undefined4 DAT_005e46f0;
extern undefined4 *DAT_005e46f4;
extern undefined4 DAT_005e4708;
extern undefined4 *DAT_005e470c;
extern undefined4 *DAT_005e4724;
extern char s_CrossRecordList_005e46f8[];
extern char s_GetMedal_005e46cc[];
extern char s_T_Panel_00_005e4728[];
extern char s_cf_005e4710[];
extern char s_cross_record__02d_005e4710[];

// USA 005E4618 <- EU 005E45F0 (Ghidra, non-matching)
// GLOBAL DAT_005e46c0 int
// GLOBAL DAT_005e46c4 undefined4 *
// GLOBAL DAT_005e46c8 undefined4 *
// GLOBAL DAT_005e46d8 undefined4
// GLOBAL DAT_005e46dc undefined
// GLOBAL DAT_005e46e4 undefined
// GLOBAL DAT_005e46e8 undefined
// GLOBAL DAT_005e46ec undefined4
// GLOBAL DAT_005e46f0 undefined4
// GLOBAL DAT_005e46f4 undefined4 *
// GLOBAL DAT_005e4708 undefined4
// GLOBAL DAT_005e470c undefined4 *
// GLOBAL DAT_005e4724 undefined4 *
// GLOBAL s_CrossRecordList_005e46f8 string
// GLOBAL s_GetMedal_005e46cc string
// GLOBAL s_T_Panel_00_005e4728 string
// GLOBAL s_cf_005e4710 string

undefined4 func_005E4618(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_005e46c0;
  *(undefined4 *)(DAT_005e46c0 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  uVar3 = DAT_005e46d8;
  puVar2 = DAT_005e46c4;
  *DAT_005e46c4 = 0;
  puVar2[1] = 0;
  puVar2 = DAT_005e46c8;
  DAT_005e46c8[1] = s_GetMedal_005e46cc;
  *puVar2 = uVar3;
  puVar2[3] = &DAT_005e46dc;
  puVar2[2] = uVar3;
  puVar2[5] = &DAT_005e46e4;
  puVar2[4] = uVar3;
  puVar2[7] = &DAT_005e46e4;
  puVar2[6] = uVar3;
  puVar2[8] = uVar3;
  puVar2[9] = &DAT_005e46e8;
  puVar2 = DAT_005e46f4;
  DAT_005e46f4[1] = s_CrossRecordList_005e46f8;
  *puVar2 = uVar3;
  puVar2 = DAT_005e470c;
  DAT_005e470c[1] = s_cross_record__02d_005e4710;
  *puVar2 = uVar3;
  puVar2 = DAT_005e4724;
  DAT_005e4724[1] = s_T_Panel_00_005e4728;
  *puVar2 = uVar3;
  return func_005902C0(puVar2);
}

