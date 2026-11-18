#include "ghidra_types.h"

extern int DAT_005cdc38;
extern undefined4 *DAT_005cdc3c;
extern undefined4 *DAT_005cdc40;
extern undefined DAT_005cdc44;
extern undefined4 DAT_005cdc4c;
extern undefined DAT_005cdc58;
extern undefined4 DAT_005cdca4;
extern undefined4 DAT_005cdca8;
extern undefined4 DAT_005cdcac;
extern undefined4 *DAT_005cdcb0;
extern undefined4 DAT_005cdcb4;
extern char s_DeguRock_005cdc98[];
extern char s_KnucleMaster_005cdc7c[];
extern char s_ShadowBoomerang_005cdc6c[];
extern char s_Togegoma_005cdc8c[];
extern char s_cylinder_005cdc60[];
extern char s_pyramid_005cdc50[];

// USA 005CDBA8 <- EU 005CDB80 (Ghidra, non-matching)
// GLOBAL DAT_005cdc38 int
// GLOBAL DAT_005cdc3c undefined4 *
// GLOBAL DAT_005cdc40 undefined4 *
// GLOBAL DAT_005cdc44 undefined
// GLOBAL DAT_005cdc4c undefined4
// GLOBAL DAT_005cdc58 undefined
// GLOBAL DAT_005cdca4 undefined4
// GLOBAL DAT_005cdca8 undefined4
// GLOBAL DAT_005cdcac undefined4
// GLOBAL DAT_005cdcb0 undefined4 *
// GLOBAL DAT_005cdcb4 undefined4
// GLOBAL s_DeguRock_005cdc98 string
// GLOBAL s_KnucleMaster_005cdc7c string
// GLOBAL s_ShadowBoomerang_005cdc6c string
// GLOBAL s_Togegoma_005cdc8c string
// GLOBAL s_cylinder_005cdc60 string
// GLOBAL s_pyramid_005cdc50 string

void func_005CDBA8(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = DAT_005cdc38;
  *(undefined4 *)(DAT_005cdc38 + 0x10) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
  puVar2 = DAT_005cdc3c;
  *DAT_005cdc3c = 0;
  puVar2[1] = 0;
  uVar3 = DAT_005cdc4c;
  puVar2 = DAT_005cdc40;
  *DAT_005cdc40 = DAT_005cdc4c;
  puVar2[1] = &DAT_005cdc44;
  puVar2[2] = uVar3;
  puVar2[3] = s_pyramid_005cdc50;
  puVar2[4] = uVar3;
  puVar2[5] = &DAT_005cdc58;
  puVar2[6] = uVar3;
  puVar2[7] = s_cylinder_005cdc60;
  puVar2[8] = uVar3;
  puVar2[9] = s_ShadowBoomerang_005cdc6c;
  puVar2[10] = uVar3;
  puVar2[0xb] = s_KnucleMaster_005cdc7c;
  puVar2[0xc] = uVar3;
  puVar2[0xd] = s_Togegoma_005cdc8c;
  puVar2[0xe] = uVar3;
  puVar2[0xf] = s_DeguRock_005cdc98;
  uVar4 = DAT_005cdcb4;
  puVar2 = DAT_005cdcb0;
  uVar3 = DAT_005cdcac;
  *DAT_005cdcb0 = DAT_005cdcac;
  puVar2[1] = uVar3;
  puVar2[2] = uVar3;
  puVar2[3] = uVar4;
  return;
}

