#include "ghidra_types.h"

extern int DAT_005c4398;
extern undefined4 *DAT_005c439c;
extern undefined4 *DAT_005c43a0;
extern undefined DAT_005c43a4;
extern undefined4 DAT_005c43a8;
extern undefined DAT_005c43ac;
extern undefined DAT_005c43b0;
extern undefined4 DAT_005c43b4;
extern undefined4 DAT_005c43b8;
extern undefined4 *DAT_005c43bc;
extern undefined DAT_005c43c0;
extern undefined DAT_005c43c4;
extern undefined DAT_005c43c8;
extern undefined4 DAT_005c43cc;
extern undefined4 *DAT_005c43d0;
extern undefined4 DAT_005c43e8;
extern undefined4 *DAT_005c43ec;
extern undefined4 DAT_005c43f8;
extern undefined4 *DAT_005c43fc;
extern undefined4 *DAT_005c4408;
extern undefined4 *DAT_005c4418;
extern undefined DAT_005c441c;
extern undefined4 *DAT_005c4424;
extern undefined DAT_005c4428;
extern undefined DAT_005c4430;
extern undefined4 DAT_005c4438;
extern undefined4 *DAT_005c443c;
extern undefined DAT_005c4440;
extern undefined4 *DAT_005c4444;
extern undefined DAT_005c4448;
extern undefined4 *DAT_005c444c;
extern undefined DAT_005c4450;
extern undefined DAT_005c4454;
extern undefined DAT_005c4458;
extern undefined DAT_005c445c;
extern undefined4 DAT_005c4460;
extern undefined4 *DAT_005c4464;
extern undefined DAT_005c4468;
extern undefined4 *DAT_005c446c;
extern undefined DAT_005c4470;
extern undefined4 *DAT_005c4474;
extern undefined4 *DAT_005c4480;
extern undefined4 *DAT_005c448c;
extern undefined DAT_005c4490;
extern undefined4 *DAT_005c4494;
extern undefined4 DAT_005c4498;
extern undefined4 DAT_005c449c;
extern undefined4 DAT_005c44a0;
extern char s_darkbgsp_005c440c[];
extern char s_follow_005c43f0[];
extern char s_isdark_005c4400[];
extern char s_isfixed_005c43e0[];
extern char s_isfixed_ch_005c43d4[];
extern char s_no_pe_005c4478[];
extern char s_peclr_005c4484[];

// USA 005C4138 <- EU 005C4110 (Ghidra, non-matching)
// GLOBAL DAT_005c4398 int
// GLOBAL DAT_005c439c undefined4 *
// GLOBAL DAT_005c43a0 undefined4 *
// GLOBAL DAT_005c43a4 undefined
// GLOBAL DAT_005c43a8 undefined4
// GLOBAL DAT_005c43ac undefined
// GLOBAL DAT_005c43b0 undefined
// GLOBAL DAT_005c43b4 undefined4
// GLOBAL DAT_005c43b8 undefined4
// GLOBAL DAT_005c43bc undefined4 *
// GLOBAL DAT_005c43c0 undefined
// GLOBAL DAT_005c43c4 undefined
// GLOBAL DAT_005c43c8 undefined
// GLOBAL DAT_005c43cc undefined4
// GLOBAL DAT_005c43d0 undefined4 *
// GLOBAL DAT_005c43e8 undefined4
// GLOBAL DAT_005c43ec undefined4 *
// GLOBAL DAT_005c43f8 undefined4
// GLOBAL DAT_005c43fc undefined4 *
// GLOBAL DAT_005c4408 undefined4 *
// GLOBAL DAT_005c4418 undefined4 *
// GLOBAL DAT_005c441c undefined
// GLOBAL DAT_005c4424 undefined4 *
// GLOBAL DAT_005c4428 undefined
// GLOBAL DAT_005c4430 undefined
// GLOBAL DAT_005c4438 undefined4
// GLOBAL DAT_005c443c undefined4 *
// GLOBAL DAT_005c4440 undefined
// GLOBAL DAT_005c4444 undefined4 *
// GLOBAL DAT_005c4448 undefined
// GLOBAL DAT_005c444c undefined4 *
// GLOBAL DAT_005c4450 undefined
// GLOBAL DAT_005c4454 undefined
// GLOBAL DAT_005c4458 undefined
// GLOBAL DAT_005c445c undefined
// GLOBAL DAT_005c4460 undefined4
// GLOBAL DAT_005c4464 undefined4 *
// GLOBAL DAT_005c4468 undefined
// GLOBAL DAT_005c446c undefined4 *
// GLOBAL DAT_005c4470 undefined
// GLOBAL DAT_005c4474 undefined4 *
// GLOBAL DAT_005c4480 undefined4 *
// GLOBAL DAT_005c448c undefined4 *
// GLOBAL DAT_005c4490 undefined
// GLOBAL DAT_005c4494 undefined4 *
// GLOBAL DAT_005c4498 undefined4
// GLOBAL DAT_005c449c undefined4
// GLOBAL DAT_005c44a0 undefined4
// GLOBAL s_darkbgsp_005c440c string
// GLOBAL s_follow_005c43f0 string
// GLOBAL s_isdark_005c4400 string
// GLOBAL s_isfixed_005c43e0 string
// GLOBAL s_isfixed_ch_005c43d4 string
// GLOBAL s_no_pe_005c4478 string
// GLOBAL s_peclr_005c4484 string

void func_005C4138(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = DAT_005c4398;
  *(undefined4 *)(DAT_005c4398 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  uVar3 = DAT_005c43a8;
  puVar2 = DAT_005c439c;
  *DAT_005c439c = 0;
  puVar2[1] = 0;
  puVar2 = DAT_005c43a0;
  DAT_005c43a0[1] = &DAT_005c43a4;
  *puVar2 = uVar3;
  puVar2[3] = &DAT_005c43ac;
  puVar2[2] = uVar3;
  puVar2[4] = uVar3;
  puVar2[5] = &DAT_005c43b0;
  puVar2 = DAT_005c43bc;
  DAT_005c43bc[1] = &DAT_005c43c0;
  *puVar2 = uVar3;
  puVar2[3] = &DAT_005c43c4;
  puVar2[2] = uVar3;
  puVar2[4] = uVar3;
  puVar2[5] = &DAT_005c43c8;
  puVar2 = DAT_005c43d0;
  DAT_005c43d0[1] = s_isfixed_ch_005c43d4;
  *puVar2 = uVar3;
  puVar2[2] = uVar3;
  puVar2[3] = s_isfixed_005c43e0;
  puVar2 = DAT_005c43ec;
  DAT_005c43ec[1] = s_follow_005c43f0;
  *puVar2 = uVar3;
  puVar2 = DAT_005c43fc;
  DAT_005c43fc[1] = s_isdark_005c4400;
  *puVar2 = uVar3;
  puVar2 = DAT_005c4408;
  DAT_005c4408[1] = s_darkbgsp_005c440c;
  *puVar2 = uVar3;
  puVar2 = DAT_005c4418;
  DAT_005c4418[1] = &DAT_005c441c;
  *puVar2 = uVar3;
  puVar2 = DAT_005c4424;
  DAT_005c4424[1] = &DAT_005c4428;
  *puVar2 = uVar3;
  puVar2[2] = uVar3;
  puVar2[3] = &DAT_005c4430;
  puVar2 = DAT_005c443c;
  DAT_005c443c[1] = &DAT_005c4440;
  *puVar2 = uVar3;
  puVar2 = DAT_005c4444;
  DAT_005c4444[1] = &DAT_005c4448;
  *puVar2 = uVar3;
  puVar2 = DAT_005c444c;
  DAT_005c444c[1] = &DAT_005c4450;
  *puVar2 = uVar3;
  puVar2[3] = &DAT_005c4454;
  puVar2[2] = uVar3;
  puVar2[5] = &DAT_005c4458;
  puVar2[4] = uVar3;
  puVar2[6] = uVar3;
  puVar2[7] = &DAT_005c445c;
  puVar2 = DAT_005c4464;
  DAT_005c4464[1] = &DAT_005c4468;
  *puVar2 = uVar3;
  puVar2 = DAT_005c446c;
  DAT_005c446c[1] = &DAT_005c4470;
  *puVar2 = uVar3;
  puVar2 = DAT_005c4474;
  DAT_005c4474[1] = s_no_pe_005c4478;
  *puVar2 = uVar3;
  puVar2 = DAT_005c4480;
  DAT_005c4480[1] = s_peclr_005c4484;
  *puVar2 = uVar3;
  puVar2 = DAT_005c448c;
  DAT_005c448c[1] = &DAT_005c4490;
  *puVar2 = uVar3;
  uVar4 = DAT_005c44a0;
  uVar3 = DAT_005c449c;
  puVar2 = DAT_005c4494;
  *DAT_005c4494 = DAT_005c4498;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  return;
}

