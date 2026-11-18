#include "ghidra_types.h"

extern int func_0048ABB8(undefined4 *param_1);
extern int func_0048B204(undefined4 *param_1,undefined4 *param_2,float fparam_0);
extern int func_004928E8(undefined4 *param_1);
extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005c2704;
extern undefined4 *DAT_005c2708;
extern undefined4 DAT_005c270c;
extern float DAT_005c2710;
extern undefined4 *DAT_005c2714;
extern undefined4 DAT_005c2718;
extern undefined4 DAT_005c271c;
extern undefined4 DAT_005c2720;
extern undefined4 *DAT_005c2724;
extern undefined4 DAT_005c2728;
extern undefined4 *DAT_005c272c;
extern undefined4 DAT_005c2730;
extern undefined4 DAT_005c2734;
extern undefined4 *DAT_005c2738;
extern undefined4 DAT_005c273c;
extern undefined4 DAT_005c2740;
extern undefined DAT_005c2744;
extern undefined4 DAT_005c2748;
extern undefined4 DAT_005c274c;
extern undefined4 DAT_005c2750;
extern undefined4 *DAT_005c2754;
extern undefined4 DAT_005c2758;
extern undefined4 DAT_005c275c;

// USA 005C25FC <- EU 005C25D4 (Ghidra, non-matching)
// GLOBAL DAT_005c2704 undefined4 *
// GLOBAL DAT_005c2708 undefined4 *
// GLOBAL DAT_005c270c undefined4
// GLOBAL DAT_005c2710 float
// GLOBAL DAT_005c2714 undefined4 *
// GLOBAL DAT_005c2718 undefined4
// GLOBAL DAT_005c271c undefined4
// GLOBAL DAT_005c2720 undefined4
// GLOBAL DAT_005c2724 undefined4 *
// GLOBAL DAT_005c2728 undefined4
// GLOBAL DAT_005c272c undefined4 *
// GLOBAL DAT_005c2730 undefined4
// GLOBAL DAT_005c2734 undefined4
// GLOBAL DAT_005c2738 undefined4 *
// GLOBAL DAT_005c273c undefined4
// GLOBAL DAT_005c2740 undefined4
// GLOBAL DAT_005c2744 undefined
// GLOBAL DAT_005c2748 undefined4
// GLOBAL DAT_005c274c undefined4
// GLOBAL DAT_005c2750 undefined4
// GLOBAL DAT_005c2754 undefined4 *
// GLOBAL DAT_005c2758 undefined4
// GLOBAL DAT_005c275c undefined4

undefined4 func_005C25FC(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  puVar5 = DAT_005c2704;
  DAT_005c2704[2] = 0xffffffff;
  puVar5[3] = 0xffffffff;
  uVar1 = DAT_005c270c;
  puVar5 = DAT_005c2708;
  *DAT_005c2708 = 0;
  puVar5[1] = 0;
  uVar3 = DAT_005c2748;
  uVar6 = DAT_005c271c;
  uVar2 = DAT_005c2718;
  puVar5 = DAT_005c2714;
  fparam_0 = DAT_005c2710;
  *DAT_005c2714 = uVar1;
  puVar5[1] = uVar2;
  puVar5[2] = uVar1;
  puVar5[3] = ALBW_AS_U32(fparam_0);
  uVar1 = DAT_005c2720;
  puVar5[4] = uVar6;
  puVar5[5] = uVar1;
  uVar2 = DAT_005c273c;
  uVar1 = DAT_005c2728;
  puVar5[6] = uVar6;
  puVar5[7] = ALBW_AS_U32(fparam_0);
  puVar5 = DAT_005c2724;
  *DAT_005c2724 = uVar6;
  puVar5[1] = uVar1;
  uVar1 = DAT_005c2730;
  puVar5[2] = uVar6;
  puVar5[3] = ALBW_AS_U32(fparam_0);
  puVar5 = DAT_005c272c;
  *DAT_005c272c = uVar6;
  puVar5[1] = uVar1;
  uVar1 = DAT_005c2734;
  puVar5[2] = uVar6;
  puVar5[3] = ALBW_AS_U32(fparam_0);
  puVar5 = DAT_005c2738;
  *DAT_005c2738 = uVar1;
  puVar5[1] = uVar2;
  puVar5[2] = uVar1;
  puVar5[3] = ALBW_AS_U32(fparam_0);
  uVar1 = DAT_005c2740;
  puVar5[4] = ALBW_AS_U32(fparam_0);
  puVar5[5] = ALBW_AS_U32(fparam_0);
  puVar5[6] = ALBW_AS_U32(fparam_0);
  puVar5[7] = uVar1;
  puVar5 = DAT_005c2704;
  *DAT_005c2704 = uVar3;
  puVar5[1] = &DAT_005c2744;
  puVar5 = DAT_005c2754 + 1;
  *DAT_005c2754 = DAT_005c2758;
  iVar4 = func_004928E8(puVar5);
  local_18 = uVar6;
  local_14 = uVar6;
  puVar5 = func_0048B204((undefined4 *)(iVar4 + 0xac),&local_18,fparam_0);
  iVar4 = func_0048ABB8(puVar5 + 0x16);
  return func_005902C0(iVar4 + -0x108);
}

